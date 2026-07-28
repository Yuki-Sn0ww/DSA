#include <bits/stdc++.h>
using namespace std;
int logestSubbarrayWithSumZero(vector<int> &nums)
{
    int n = nums.size();
    int longest = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j<n; j++) {
            sum += nums[j];
            if (sum == 0) {
                int len = j - i + 1;
                longest = max(longest, len);
            }
        }
    }
    return longest;  
}
int main()
{
    vector<int> nums = { 15, -2, 2, -8, 1, 7, 10, 23 };
    cout << logestSubbarrayWithSumZero(nums);
    return 0;
}