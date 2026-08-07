#include <bits/stdc++.h>
using namespace std;

// void mergeOverlap(vector<vector<int>> &arr)
// {
//     sort(arr.begin(), arr.end());
//     int n = arr.size();
//     vector<vector<int>> intervals;
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> interval = arr[i];
//         if (intervals.size() > 0) {
//             vector<int> last = intervals.back();
//             if (interval[1] <= last[1]) {
//                 continue;
//             }
//         }
//         for (int j = i + 1; j < n; j++)
//         {
//             vector<int> secondInterval = arr[j];
//             if (secondInterval[0] < interval[1])
//             {
//                 intervals.push_back({interval[0], secondInterval[1]});
//             } else {
//                 break;
//             }
//         }
//     }
//     for (auto it : intervals)
//     {
//         cout << "{" << it[0] << "," << it[1] << "}";
//         cout << endl;
//     }
//     cout << endl;
// }

// void mergeOverlap(vector<vector<int>> &arr)
// {
//     sort(arr.begin(), arr.end());
//     int n = arr.size();
//     vector<vector<int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int start = arr[i][0];
//         int end = arr[i][1];
//         if (!ans.empty() && end <= ans.back()[1]) {
//             continue;
//         }
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j][0] <= end)
//             {
//                 end = max(end,arr[j][1]);
//             }
//             else
//             {
//                 break;
//             }
//         }
//         ans.push_back({start, end});
//     }
//     for (auto it : ans)
//     {
//         cout << "{" << it[0] << "," << it[1] << "}";
//         cout << endl;
//     }
//     cout << endl;
// }

void mergeOverlap(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 1; i < n; i++)
    {
        vector<int> temp(2);
        temp[0] = start;
        temp[1] = end;
        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }
        if (arr[i][0] <= end)
        {
            end = max(end, arr[i][1]);
        }
        else
        {
            start = arr[i][0];
            end = arr[i][1];
        }

        ans.push_back({start, end});
    }
    for (auto it : ans)
    {
        cout << "{" << it[0] << "," << it[1] << "}";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> arr = {{1, 5}, {3, 6}, {8, 10}, {15, 18}};
    mergeOverlap(arr);
    return 0;
}