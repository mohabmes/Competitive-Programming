#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#define ll long long int
using namespace std;

char a[10][10];
string g = "IEHOVA#";
vector<string>ans;
int tc, n, m, ndx=0;

void scan(int, int);
void check(int, int, string);

void check(int i, int j, string dir){
    if(a[i][j]==g[ndx] && ndx<=g.length()-1 ){
        ++ndx;
        ans.push_back(dir);
        scan(i,j);
    }
}

void scan(int i,int j){
    if(a[i][j] == '#'){
        return;
    }
    check(i-1, j, "forth");
    check(i, j-1, "left");
    check(i, j+1, "right");
}


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin>>tc;
    while(tc--){
        cin>>m>>n;
        ans.clear();
        ndx=0;

        for(int i=0; i<m; i++)
            cin>>a[i];

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == '@')
                    scan(i,j);
            }
        }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
            if(i<ans.size()-1)
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

