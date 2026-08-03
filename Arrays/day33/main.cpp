#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> &nums) {
    int k = 6;
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int xorr = 0;
        for (int j = i; j < n; j++) {
            xorr = xorr ^ nums[j];
            if (xorr == k) {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> nums = { 4, 2, 2, 6, 4 };
    cout << subarraysWithXorK(nums);
    return 0;
}