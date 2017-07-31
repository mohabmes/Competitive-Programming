#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

inline int M(char a){
    return a-'0';
}
void print(int sol[], int sz){
    int i,j;
    for(i=0 ; i<sz; i++)
        if(sol[i]!=0) break;
    for( j = sz+1 ; j>=0; j--)
        if(sol[j]) break;
    for( ; i <= j; i++)
        cout<<sol[i];
    cout<<"\n";
}

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;
    string a, b;

    cin>>n;
    while(n--){
        cin>>a>>b;

        int mx=300,
            sz1 = a.length(),
            sz2 = b.length(),
            sz = 0,
            sol[mx]={0};

        for(int i = 0 ; i < sz1 ; i++)
            sol[i] = M(a[i]);

        for(int i = 0 ; i < sz2 ; i++)
            sol[i]+= M(b[i]);

        sz = (sz1 > sz2 ? sz1 : sz2);

        for(int i = 0 ; i <= sz ; i++){
            sol[i+1] += (sol[i] / 10);
            sol[i] = sol[i] % 10;
        }

        print(sol, sz);

    }
    return 0;
}
