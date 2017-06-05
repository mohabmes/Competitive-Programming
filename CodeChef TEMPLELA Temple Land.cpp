#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
 
bool check(int, int[]);
 
int main(){
    //freopen("in.txt", "r", stdin);
    int tc, n;
    cin>>tc;
 
    while(tc--){
        cin>>n;
        int a[n]={0};
 
        for(int i=0; i<n; i++)
            cin>>a[i];
 
        if( check(n, a) )
            cout<<"yes";
        else 
            cout<<"no";
        
        cout<<endl;
    }
    return 0;
}
 
bool check(int n, int a[]){
    int v = 1;
    int mid = (n+1)/2;
 
    if( n%2 != 1 ) return 0;
 
    if( a[0] != 1 || a[n-1] != 1 ) return 0;
 
    for(int i=1; i<mid; i++){
        if(a[i-1]+1 != a[i]) return 0;
    }
 
    for(int i=mid+1 ; i<n; i++){
        if(a[i-1]-1 != a[i]) return 0;
    }
 
    return 1;
}
 