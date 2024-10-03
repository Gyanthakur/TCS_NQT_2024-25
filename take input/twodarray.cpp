#include <bits/stdc++.h>
using namespace std;

// [[1,2,3];[4,5,6];[7,8,9]]
int main()
{
    string input;
    getline(cin, input);

    // Remove all brackets and spaces
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());
    input.erase(remove(input.begin(), input.end(), ' '), input.end());

    
    stringstream ss(input);
    string ele;
    vector<vector<int>>arr;
    while(getline(ss,ele,';'))
    {
        vector<int>temp;
        stringstream ssele(ele);
        string st;
        while(getline(ssele,st,','))
        {
            temp.push_back(stoi(st));
        }
        arr.push_back(temp);
    }


    // while (getline(ss, ele, ';')) // Assuming rows are separated by semicolons
    // {
    //     vector<int> temp;
    //     stringstream ssele(ele);
    //     string st;
    //     while (getline(ssele, st, ','))
    //     {
    //         temp.push_back(stoi(st)); // Convert the string to integer and store
    //     }
    //     arr.push_back(temp);
    // }

    // Output the 2D vector
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
