#include <bits/stdc++.h>
using namespace std;

string threefive(vector<int> arr)
{
    int n = arr.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            ans += "ThreeFive ";
        }
        else if (arr[i] % 3 == 0)
        {
            ans += "Three ";
        }
        else if (arr[i] % 5 == 0)
        {
            ans += "Five ";
        }
        else
        {
            ans += to_string(arr[i]) + " ";
        }
    }
    return ans;
}
int main()
{
    string input;
    getline(cin, input);
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    stringstream ss(input);

    vector<int> arr;
    string ele;
    while (getline(ss, ele, ','))
    {
        arr.push_back(stoi(ele));
    }
    cout<<threefive(arr);
    
}