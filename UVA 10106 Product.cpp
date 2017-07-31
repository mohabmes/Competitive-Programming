#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

inline int M(char a, char b){
    return (a-'0') * (b-'0');
}

void print(int a[] ,int s){
    for(int i = s ; i>=0; i--)
        cout<<a[i];
}

int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    string s1, s2;
    while( cin>>s1>>s2 ){

        int sz_1, sz_2, sz_3=600, f=600;
        int sol[sz_3]={0};

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        sz_1 = s1.length();
        sz_2 = s2.length();

        for(int i=0 ; i<sz_1 ; i++){
            for(int j=0 ; j<sz_2 ; j++){
                sol[i + j] += M(s1[i], s2[j]);
            }
        }

        for(int i = 0 ; i < sz_3-1 ; i++ ){
            sol[i+1] += (sol[i] / 10);
            sol[i] = sol[i] % 10;
        }

        for(int i = sz_3 - 1 ; i >= 0 ; i-- ){
            if(sol[i] != 0 || i==0){
                print(sol, i);
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}
