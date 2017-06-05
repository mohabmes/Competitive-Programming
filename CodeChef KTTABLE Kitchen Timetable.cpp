#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
    int tc, n, t;
    cin>>tc;
    while(tc--){
        cin>>n;
        int a[++n]={0}, ans=0;
        for(int i=1; i<n; i++){
            cin>>a[i];
        }
        for(int i=1; i<n; i++){
            cin>>t;
            ans+=(a[i]-a[i-1]>=t);
        }
        cout<<ans<<endl;
    }
    return 0;
} 