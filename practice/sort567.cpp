#include <bits/stdc++.h>

using namespace std;

/*
input = [5,6,5,6,7,7,7,7,6,5,6,5,6,5,6]
output =[5,5,5,5,5,6,6,6,6,6,6,7,7,7,7]
*/

int main()
{
    string input;

    getline(cin, input);
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());
    input.erase(remove(input.begin(), input.end(), ' '), input.end()); // Remove any spaces

    stringstream ss(input);
    string ele;
    vector<int> arr;
    while (getline(ss, ele, ','))
    {
        arr.push_back(stoi(ele));
    }
    int n = arr.size();
    int st = 0;
    int mid = 0;
    int en = n - 1;

    while (mid <= en)
    {
        if (arr[mid] == 5)
        {
            swap(arr[st], arr[mid]);
            st++;
            mid++;
        }
        else if (arr[mid] == 6)
        {
            mid++;
        }
        else if (arr[mid] == 7)
        {
            swap(arr[mid], arr[en]);
            en--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}