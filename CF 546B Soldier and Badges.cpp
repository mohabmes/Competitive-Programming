#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, cnt = 0, t, a[10000] = {0};

    cin>>n;

    for (int i=0 ; i<n ; i++){
        cin>>t;
        while( a[t] > 0){
            t++,
            cnt++;
        }
        a[t]++;
    }
    cout<<cnt;
    return 0;
}
