#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findMajorityEle(vector<string> &arr, int n)
{
    string maxEle = "-1";
    unordered_map<string, int> mp;
    for (auto it : arr)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        if (it.second >= n / 3)
        {
            maxEle = it.first;
            break;
        }
    }

    cout << maxEle << endl;
}
/*
input
[1 3 4 5 6 4 3 2 3 2 32]
output
arr size is : 32
n/3 is : 3

element present mor than n/3 times
3
*/

int main()
{
    // string input;
    // getline(cin,input);

    // stringstream ss(input);
    // string token;
    // vector<string>arr;
    // while(getline(ss,token,','))
    // {
    //     arr.push_back((token));
    // }

    // findMajorityEle(arr,arr.size());

    string input;
    getline(cin, input);
    input.erase(remove(input.begin(), input.end(), '['), input.end());

    input.erase(remove(input.begin(), input.end(), ']'), input.end());
    stringstream ss(input);
    string ele;
    vector<string> arr;
    while (getline(ss, ele, ' '))
    {
        arr.push_back(ele);
    }
    cout << "arr size is : " << arr[arr.size() - 1] << endl;
    int n = arr.size() - 1;
    cout << "n/3 is : " << n / 3 << endl;
    findMajorityEle(arr, arr.size());
}