#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main(){
    //freopen("in.txt", "r", stdin);
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,a,b;
        cin>>n>>m;
        for(int i=0; i<m; i++)
            cin>>a>>b;
 
        if(n%2==0 && 2*m<=n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}