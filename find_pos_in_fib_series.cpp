#include <bits/stdc++.h>
using namespace std;

int findIndex(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;

    int a = 0, b = 1, c = 1;
    int res = 1;

    while (c < n)
    {
        c = a + b;
        res++;
        a = b;
        b = c;
    }
    return res+1;
}

int main()
{
    int find;
    cout<<"Enter finding element : ";
    cin>>find;

    cout << findIndex(find);

    return 0;
}