#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;
    int target = 7;
    for (int i = 0; i < n; i++)
    {
        set<int> hashMap;
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j+1; k < n; k++) {
                int fourth = target -nums[i] - nums[j] - nums[k];
                if (hashMap.find(fourth) != hashMap.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashMap.insert(nums[k]);
            }
         
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> nums = { 1, -2, 3, 5, 7, 9 } ;
    vector<vector<int>> ans = threeSum(nums);
    cout << "{ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << ",";
        }
        cout << " }";
    }
    cout << " }";
    cout << endl;
    return 0;
}