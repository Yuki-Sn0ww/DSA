#include <bits/stdc++.h>
using namespace std;

// int subarraysWithXorK(vector<int> &nums) {
//     int k = 6;
//     int count = 0;
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         int xorr = 0;
//         for (int j = i; j < n; j++) {
//             xorr = xorr ^ nums[j];
//             if (xorr == k) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
//xr trick
int subarraysWithXorK(vector<int> &nums)
{
    int k = 6;
    int count = 0;
    int n = nums.size();
    map<int, int> mpp;
    mpp[0] = 1;
    int prefixXor = 0;
    for (int i = 0; i < n; i++)
    {
        prefixXor = prefixXor ^ nums[i];
        int x = prefixXor ^ k;
        count += mpp[x];
        mpp[prefixXor]++;
    }
    return count;
}


//my way
// int subarraysWithXorK(vector<int> &nums)
// {
//     int k = 6;
//     int count = 0;
//     int n = nums.size();
//     map<int, int> mpp;
//     mpp[0] = 1;
//     int prefixXor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         prefixXor ^= nums[i];
//         int needed = prefixXor ^ k;
//         count += mpp[needed];
//         mpp[prefixXor] += 1;
     
//     }
//     return count;
// }

int main()
{
    vector<int> nums = { 4, 2, 2, 6, 4 };
    cout << subarraysWithXorK(nums);
    return 0;
}