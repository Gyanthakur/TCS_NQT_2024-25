#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout<<"enter input number"<<endl;
    // cin>>n;
    // cout<<"number is: "<<n<<endl;

    /*
    string no = "57";
    stringstream ss;
    ss<<no<<endl;
    int n;
    ss>>n;
    cout<<"number is: "<<n;

    */

    string input_data = "78.98,abc,97\n89.68,hii,69";

    stringstream sso(input_data);

    vector<int> vi;
    vector<string> vs;
    vector<float> vf;
    string str;
    while (getline(sso, str))
    {
        string so, fo, vo;
        stringstream ss(str);
        getline(ss, fo, ',');
        vf.push_back(stof(fo));

        getline(ss, so, ',');
        vs.push_back(so);

        getline(ss, vo, ',');
        vi.push_back(stoi(vo));
    }
    cout << "seprated by line" << endl;

    for (int i = 0; i < vf.size(); i++)
        cout << "float number: " << vf[i] << " " << endl;
    for (int i = 0; i < vs.size(); i++)
        cout << "struing is: " << vs[i] << " " << endl;
    for (int i = 0; i < vi.size(); i++)
        cout << "integer number: " << vi[i] << " " << endl;

    cout << endl
         << endl
         << endl;

    // seprated by using semicolomn;
    string input_data1 = "78.98,abc,97;89.68,hii,69;985.84,gyan,78";

    stringstream sso1(input_data1);

    vector<int> vi1;
    vector<string> vs1;
    vector<float> vf1;
    string str1;
    while (getline(sso1, str1, ';'))
    {
        string so, fo, vo;
        stringstream ss(str1);
        getline(ss, fo, ',');
        vf1.push_back(stof(fo));

        getline(ss, so, ',');
        vs1.push_back(so);

        getline(ss, vo, ',');
        vi1.push_back(stoi(vo));
    }
    cout << "seprated by ;" << endl
         << endl;

    for (int i = 0; i < vf1.size(); i++)
        cout << "float number: " << vf1[i] << " " << endl;

    for (int i = 0; i < vs1.size(); i++)
        cout << "struing is: " << vs1[i] << " " << endl;
    for (int i = 0; i < vi1.size(); i++)
        cout << "integer number: " << vi1[i] << " " << endl;

    cout << endl
         << endl
         << endl;

    // seprated by using space;
    string input_data2 = "78.98,abc,97 89.68,hii,69 985.84,gyan,78";

    stringstream sso2(input_data2);

    vector<int> vi2;
    vector<string> vs2;
    vector<float> vf2;
    string str2;
    while (getline(sso2, str2, ' '))
    {
        string so, fo, vo;
        stringstream ss(str2);
        getline(ss, fo, ',');
        vf2.push_back(stof(fo));

        getline(ss, so, ',');
        vs2.push_back(so);

        getline(ss, vo, ',');
        vi2.push_back(stoi(vo));
    }

    cout << "seprated by space" << endl
         << endl;

    for (int i = 0; i < vf2.size(); i++)
        cout << "float number: " << vf2[i] << " " << endl;
    for (int i = 0; i < vs2.size(); i++)
        cout << "struing is: " << vs2[i] << " " << endl;
    for (int i = 0; i < vi2.size(); i++)
        cout << "integer number: " << vi2[i] << " " << endl;

    cout << endl
         << endl
         << endl;

    // take a input of two d arrays 2-d arrays

    string input_array = "1,2,3\n4,5,6\n7,8,9";
    stringstream ss_array(input_array);
    string str_array;
    vector<vector<int>> arr;
    while (getline(ss_array, str_array))
    {
        vector<int> temp;
        string st;
        stringstream ss(str_array);

        while (getline(ss, st, ','))
        {
            temp.push_back(stoi(st));
        }
        arr.push_back(temp);
    }
    cout << "2_d array is: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }




    
}