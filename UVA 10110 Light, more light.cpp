#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define ui unsigned int
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    ui n, sq;

    while(cin>>n && n!=0){
        sq = (int) sqrt(n);
        if( sq * sq == n){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }

    return 0;
}
