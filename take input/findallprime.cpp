#include <bits/stdc++.h>
using namespace std;

// int a = 100;
// int b = 150;
// output in vector

bool isPalindrome(int n)
{
    int orignal = n;

    int rev = 0;
    while (n > 0)
    {
        int dig = n % 10;
        rev = rev * 10 + dig;
        n /= 10;
    }
    return orignal == rev;
}
vector<int> findPrime(int a, int b)
{
    vector<int> temp;
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i))
        {
            temp.push_back(i);
        }
    }
    return temp;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    vector<int> ans = findPrime(a, b);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}