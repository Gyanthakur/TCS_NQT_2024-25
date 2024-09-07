
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Find all subarrays whose sum is equal to target

void bruteForce(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int curSum = 0;
        for (int j = i; j < n; j++)
        {
            curSum += arr[j];
            if (curSum == target)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
}

// vector<vector<int>> optimalApproach(vector<int> &arr, int n, int target)
// {
//     vector<vector<int>> result;
//     unordered_map<int, int> sumMap;
//     int curSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         curSum += arr[i];
//         if (curSum == target)
//         {
//             vector<int> temp;
//             for (int j = 0; j <= i; j++)
//             {
//                 temp.push_back(arr[j]);
//             }
//             result.push_back(temp);
//         }
//         if (sumMap.find(curSum - target) != sumMap.end())
//         {
//             int startIndex = sumMap[curSum - target] + 1;
//             vector<int> temp;
//             for (int k = startIndex; k <= i; k++)
//             {
//                 temp.push_back(arr[k]);
//             }
//             result.push_back(temp);
//         }
//         sumMap[curSum] = i;
//     }
//     return result;
// }
vector<vector<int>> optimalApproach(vector<int> &arr, int n, int target)
{
    vector<vector<int>> res;

    unordered_map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == target)
        {
            vector<int> temp;
            for (int j = 0; j <= i; j++)
            {
                temp.push_back(arr[j]);
            }
            res.push_back(temp);
        }
        if (mp.find(sum - target) != mp.end())
        {
            vector<int>temp;
            int startIndex = mp[sum-target]+1;
            for(int j= startIndex;j<=i;j++)
            {
                temp.push_back(arr[j]);
            }
            res.push_back(temp);
        }
        mp[sum] = i;
    }
    return res;
}

int main()
{
    vector<int> arr = {3, 4, -7, 1, 3, 3, 1, -4};
    int N = arr.size();
    int target = 7;
    cout << "Brute Force Answer: " << endl;
    bruteForce(arr, N, target);

    vector<vector<int>> result = optimalApproach(arr, N, target);

    cout << "Optimal Answer: " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}