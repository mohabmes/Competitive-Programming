#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#define ll long long int
using namespace std;

const int mx=1000;
int a[mx];

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int tc, m,n,tmp, seats;

    cin>>tc;
    while(tc--){
        cin>>n>>m;
        int seats=0;
        for(int i=0; i<mx; i++){
            a[i]=0;
        }
        for(int i=0; i<n; i++){
            cin>>tmp;
            a[tmp]++;
        }
        for(int i=mx-1; i>0; i--){
            if(a[i]>0 && seats<m){
                seats += a[i];
            }

            else if(seats>=m)
                break;
        }
        cout<<seats<<endl;
    }
    return 0;
}