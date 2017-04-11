#include <iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int r[1000]={0};
	for(int x=1; x<=m; x++){
		int a,b; 
		cin>>a>>b;
		r[a]=r[b]=1;
	}
	cout<<n-1<<endl;
	for(int x=1; x<=n; x++){
		if(!r[x]){
			for(int y=1; y<=n; y++){
				if(x!=y)
					cout<<y<<"	"<<x<<endl;
			}
			break;
		} 
	}
}