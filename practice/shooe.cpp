#include <bits/stdc++.h>
#include <iostream>
using namespace std;


/*
input: 
n = 5
2R,2L,3R,3R,1L
output: 1 for 2L-2R same


or in string [2L,2R,3L,4R,5R,4L,4L,3L,2R,3R,3R,4R,5R]
*/

int main()
{
    int n;
    cin >> n;
    unordered_map<string,int>store;
    for (int i = 0; i < n; i++)
    {
        string shoeSize;
        cin>>shoeSize;

        if(store.find(shoeSize) != store.end())
        {
            store[shoeSize]++;
        }
        else 
        {
            store[shoeSize] = 1;
        }
    }
/*
    string input;
    getline(cin,input);
    stringstream ss(input);
    string ele;

    vector<string>str;
    while(getline(ss,ele,','))
    {
        str.push_back(ele);
    }

    for(auto it:str)
    {
        store[it]++;
    }

    */
    int pairs = 0;
    for(auto it : store)
    {
        string key = it.first;
        string opposite;
        int val = it.second;
        if(key[key.size()-1] == 'L')
        {
            opposite = key.substr(0,key.size()-1) + 'R';
        }
        else
        {
            opposite = key.substr(0,key.size()-1) + 'L';
        }
        if(store.find(opposite) != store.end())
        {
            pairs += min(val,store[opposite]);
        }

    }
    cout<<pairs/2<<endl;
    
}