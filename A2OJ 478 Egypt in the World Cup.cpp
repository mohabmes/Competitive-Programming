#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#define ll long long int
using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    pair<string, int> w;
    string nm;
    int point;
    int g,t,p;

    cin>>g;
    while(g--){
        cin>>t;
        w = make_pair("", 0);
        nm = "";
        p = 0;

        for(int i=0; i<t; i++){
            cin>>nm>>p;
            if(p>w.second){
                w = make_pair(nm, p);
            }
        }
        cout<<w.first<<endl;
    }
    return 0;
}