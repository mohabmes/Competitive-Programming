#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    double n, cnt=0, t;
    cin>>n;

    for(int i=0 ; i<n ; i++)
        cin>>t, cnt+=t;

    //cout<<setprecision(12)<<cnt/n;
    printf("%.4f",cnt/n);
    return 0;
}
