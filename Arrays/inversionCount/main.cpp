#include <bits/stdc++.h>
using namespace std;

//Brute Force   hint - a[i] > a[j] and i < j   tc - O(n^2) sc - O(i)
// int numberOfInversions(vector<int> &arr)
// {
//     int n = arr.size();
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (arr[i] >  arr[j] && i < j) count++;
//         }
//     }
//     return count;
// }


// better -- using merger sort recursive algo 


int merge(vector<int>& arr, int low, int mid, int high) {
    int left = low;
    int right = mid+1;
    vector<int> temp; 
    int count = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
            count += (mid - left + 1);
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }

    return count;
}


int mergeSort(vector<int>& arr, int low, int high)
{
    int count = 0;
    if (low >= high) return count;
    int mid = (low + high) / 2;
    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid+1, high);
    count += merge(arr, low, mid, high);
    return count;
}
int numberOfInversions(vector<int>& arr)
{
    int n = arr.size();
    int count = mergeSort(arr, 0, n - 1);
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = { 2, 3, 7, 1, 3, 5 };
    cout << numberOfInversions(arr);
    return 0;
}