#include<bits/stdc++.h>
using namespace std;


/*
4 1 2 3 4
n, arr
*/
int main()
{
    string input;
    getline(cin,input);
    stringstream ss(input);
    vector<int>arr;
    string ele;
    int n;
    while(getline(ss,ele,' '))
    {
        
        
        arr.push_back(stoi(ele));
        
    }
    n = arr[0];
    arr.erase(arr.begin());
    cout<<"n : "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}