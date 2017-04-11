#include <iostream>
using namespace std;
int main(){
    int n,m; 
	cin>>n>>m;
    int l[m],r[m],t[m],c[m+1]={0},profit=0;
    for(int x=0; x<m; x++)
		cin>>l[x]>>r[x]>>t[x]>>c[x];
    for(int x=1; x<=n; x++){
        int time=1000000, i=m;
        for(int y=0; y<m; y++){
            if(x>=l[y] && x<=r[y] && t[y]<time)
				time=t[y], i=y;
        }
		profit+=c[i];
    }
	cout<<profit;
}