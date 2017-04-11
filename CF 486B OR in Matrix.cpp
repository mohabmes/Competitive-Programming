#include <iostream>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int a[m][n],arr[m][n];
	for(int x=0; x<m; x++)
	for(int y=0; y<n; y++){
		cin>>a[x][y]; 
		arr[x][y]=a[x][y];
	}
	
	for(int x=0; x<m; x++)
	for(int y=0; y<n; y++){
		if(a[x][y]==0){
			for(int b=0; b<m; b++) 
				arr[b][y]=0;
			for(int a=0 ; a<n; a++) 
				arr[x][a]=0;
			
		}
	}
	for(int x=0; x<m; x++)
	for(int y=0; y<n; y++){
		int t = 0;
		for(int b=0; b<m; b++) 
			t |= arr[b][y];
		for(int a=0 ; a<n; a++) 
			t |= arr[x][a];
		if (t != a[x][y]){
			cout<<"NO"; return 0;
		}
	}
	cout<<"YES"<<endl;
	for(int x=0; x<m; x++){
		for(int y=0; y<n; y++)
			cout<<arr[x][y]<<" ";
		cout<<endl;
	}
}