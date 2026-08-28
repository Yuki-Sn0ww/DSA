#include <bits/stdc++.h>
using namespace std;

void findMissingRepeatingNumbers(vector<int> arr) {
    int n = arr.size();
    map<int, int> mpp; 
    vector<int> ans;
    for (auto it : arr) {
        mpp[it]++;
    }
    // for (auto it : mpp) {
    //     if (it.second == 0) ans.push_back(it.first);
    //     if (it.second >= 2) ans.push_back(it.first);
    // }
   for (auto it : mpp) {
        cout << it.first << ": " << it.second;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    findMissingRepeatingNumbers(arr);
    return 0;
}