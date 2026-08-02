#include <bits/stdc++.h>
using namespace std;
// brute force
// int logestSubbarrayWithSumZero(vector<int> &nums)
// {
//     int n = nums.size();
//     int longest = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += nums[j];
//             if (sum == 0)
//             {
//                 int len = j - i + 1;
//                 longest = max(longest, len);
//             }
//         }
//     }
//     return longest;
// }
// optimal

int logestSubbarrayWithSumZero(vector<int> &nums)
{
    int n = nums.size();
    int maxi = 0;
    map<int, int> mpp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            maxi = i+1;
        }
        else 
        {
            if (mpp.find(sum) != mpp.end()) {
                maxi = max(maxi,i - mpp[sum]);
            }
            else if (mpp.find(sum) == mpp.end()) {
                mpp[sum ] = i;
            }
        }
    }
    return maxi;
}
int main()
{
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << logestSubbarrayWithSumZero(nums);
    return 0;
}