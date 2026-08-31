#include <bits/stdc++.h>
using namespace std;
//brute force - tc - n^2 and sc - (1)
// void findMissingRepeatingNumbers(vector<int> arr) {
//     int n = arr.size();
//     vector<int> ans(2);
//     ans[0] = -1;
//     ans[1] = -1;
//     for (int i = 1; i <= n; i++) {
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (arr[j] == i) {
//                 count++;
//             } 
//         }
//         if (count == 2) {
//             ans[0] = i;
//         }
//         else if (count == 0) {
//             ans[1] = i;
//         }
//         if (ans[0] != -1 && ans[1] != -1) break;
//     }
//     for (auto it : ans) {
//         cout << it << " ";
//     }
//     cout << endl;
// }


// better tc - O(2n) sc - O(n) hasharray
// void findMissingRepeatingNumbers(vector<int> arr) 
// {
//     int n = arr.size();
//     vector<int> ans(2);
//     ans[0] = -1;
//     ans[1] = -1;
//     vector<int> hashArr(7);

//     for (int i = 0; i < n; i++) {
//         hashArr[arr[i]]++;
//     }

//     for (int i = 1; i < n; i++) {
//         if (hashArr[i] == 2) ans[0] = i;
//         else if (hashArr[i] == 0) ans [1] = i;

//         if (ans[0] != -1 && ans[1] != -1)
//             break;
//     }
//     for (auto it : ans)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
// }
 // optimal1 - using basic maths 
// void findMissingRepeatingNumbers(vector<int> arr)
// {
//     int n = arr.size();
//     vector<int> ans(2);

//     int arrSum = 0;
//     int arrSumSq = 0;
//     for (int i = 0; i < n; i++)
//     {
//         arrSum += arr[i];
//         arrSumSq += (arr[i] * arr[i]);
//     }

//     int sN = (n * (n+1)) / 2;
//     int sNSq = (n * (n+1) * ((2 * n) + 1)) / 6;
    
//     int val1 = arrSum - sN;
//     int val2 = arrSumSq - sNSq;
//     val2 = val2 / val1;
    
//     int x = (val1 + val2) / 2;
//     int y = val2 - x;
    
//     ans[0] = x;
//     ans[1] = y;
//     for (auto it : ans)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
// }

//optimal2 - using xor 
void findMissingRepeatingNumbers(vector<int> arr)
{
   
}
int main()
{
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    findMissingRepeatingNumbers(arr);
    return 0;
}