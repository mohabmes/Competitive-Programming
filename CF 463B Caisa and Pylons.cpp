#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin>>n;
    int a[++n] = {0};

    for (int i=1 ; i<n ; i++)
        cin>>a[i];

    cout<<*max_element(a,a+n);
    return 0;
}
