#include <bits/stdc++.h>
using namespace std;

// void merge(vector<int> &nums1, vector<int> &nums2) {
//     int m = nums1.size();
//     int n = nums2.size();
//     vector<int> temp;

//     int i = 0;
//     int j = 0;
//     while (i < m && j < n) {
//         if (nums1[i] <= nums2[j]) {
//             temp.push_back(nums1[i]);
//             i++;
//         } else {
//             temp.push_back(nums2[j]);
//             j++;
//         }
//     }
//     for (int i = 0; i < temp.size(); i++) {
//         if (i < m) {
//             nums1[i] = temp[i];
//         } else {
//             nums2[i-m] = temp[i];
//         }
//     }
//     for (auto it : nums1) {
//         cout << it << " ";
//     }
//     cout << endl;
//     for (auto it : nums2)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
// }
void merge(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    vector<int> temp;

    int i = m-1;
    int j = 0;
    while (i >= 0 && j < n)
    {
        if (nums2[j] < nums1[i])
        {
            swap(nums1[i], nums2[j]);
            i--;
            j++;
        }
        if (nums1[1] <= nums2[j]) break;
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    for (auto it : nums1)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : nums2)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums1 = { 1, 3, 5, 7 };
    vector<int> nums2 = { 0, 2, 6, 8, 9 };
    merge(nums1, nums2);
    return 0;
}