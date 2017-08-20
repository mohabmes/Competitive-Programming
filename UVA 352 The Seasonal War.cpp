#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#define ll long long int
using namespace std;

char a[25][25];
bool visited[25][25];
int n=0;

void scan(int i,int j);
void check(int i, int j);

void check(int i, int j){
    if(a[i][j]=='1' && !visited[i][j] && (i>=0 && j>=0 && i<n && j<n) ){
        scan(i,j);
    }
}

void scan(int i,int j){
    if(visited[i][j])
        return;
    visited[i][j]=1;
    if(a[i][j]=='1'){
        check(i-1, j-1);
        check(i, j-1);
        check(i+1, j-1);

        check(i-1, j);
        check(i+1, j);

        check(i-1, j+1);
        check(i, j+1);
        check(i+1, j+1);
    }

}


int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int tc =0;
    while(cin>>n){

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        memset(visited, 0, sizeof(visited));

        int wars=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == '1' && !visited[i][j]){
                    scan(i,j);
                    wars++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++tc ,wars);
    }

    return 0;
}

