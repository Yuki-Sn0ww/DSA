#include <bits/stdc++.h>
using namespace std;

// Brute Force   hint - a[i] > a[j] and i < j   tc - O(n^2) sc - O(i)
//  int numberOfInversions(vector<int> &arr)
//  {
//      int n = arr.size();
//      int count = 0;
//      for (int i = 0; i < n; i++) {
//          for (int j = i+1; j < n; j++) {
//              if (arr[i] > (2 * arr[j]) && i < j) count++;
//          }
//      }
//      return count;
//  }

// better -- using merger sort recursive algo
int countPair(vector<int> &arr, int low, int mid, int high)
{
    int count = 0;
    int right = mid + 1;

    for (int i = low; i <= mid; i++)
    {
        while (right <= high && arr[i] > (2 * arr[right]))
        {
            right++;
            
        }
        count += (right - (mid + 1));
    }
    return count;
}
void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

int mergeSort(vector<int> &arr, int low, int high)
{
    int count = 0;
    if (low >= high)
        return count;
    int mid = (low + high) / 2;
    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);
    count += countPair(arr, low, mid, high);
    merge(arr, low, mid, high);
    return count;
}
int numberOfInversions(vector<int> &arr)
{
    int n = arr.size();
    int count = mergeSort(arr, 0, n - 1);
    return count;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = { 6, 4, 1, 2, 7 };
    cout << numberOfInversions(arr);
    return 0;
}