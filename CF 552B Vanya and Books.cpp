#include <iostream>
#include <cstdio>
#define ll long long int
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    ll n, cnt=0, i=1;
    cin>>n;

    while(i<=n){
        cnt += n-i+1;
        i*=10;
    }
    cout<<cnt;

    return 0;
}
