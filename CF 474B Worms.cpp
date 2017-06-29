#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;

    int a[++n]={0}, q, t;

    for(int i=1 ; i<n ; i++)
        cin>>t,
        a[i]=t+a[i-1];

    cin>>q;
    while(q--){
        cin>>t;
        cout<<lower_bound(a, a+n, t) - a<<endl;
    }
    
    return 0;
}
