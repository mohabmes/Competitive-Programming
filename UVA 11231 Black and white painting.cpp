#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, m, c, a, vn, vm;
    while(cin>>n>>m>>c && n!=0){
        vn = n - 7;
        vm = m - 7;
        a = (vn * vm);

        if(a%2==1 && c==0) a--;
        if(a%2==1 && c==1) a++;

        if(a>1)
            a /= 2;
        cout<<a<<endl;
    }
    return 0;
}
