#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#define ll long long int
using namespace std;

char a[105][105];
bool visited[105][105];
int n=0, tc, t=0;

void scan(int,int);
void check(int,int);

void check(int i, int j){
    if((a[i][j]=='x' || a[i][j]=='@') && !visited[i][j] ){
        scan(i,j);
    }
}

void scan(int i,int j){
    if(visited[i][j])
        return;
    visited[i][j]=1;
    if(a[i][j]=='x' || a[i][j]=='@'){

        check(i, j-1);
        check(i-1, j);
        check(i+1, j);
        check(i, j+1);

    }

}


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    cin>>tc;
    while(tc--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        memset(visited, 0, sizeof(visited));

        int ships=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(a[i][j] == 'x' && !visited[i][j]){
                    scan(i,j);
                    ships++;
                }
        
        printf("Case %d: %d\n", ++t, ships);
    }
    return 0;
}

