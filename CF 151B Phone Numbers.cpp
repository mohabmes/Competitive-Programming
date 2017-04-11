#include <iostream>
using namespace std;
int main(){
    int n; 
	cin>>n;
    int T[n+2]={0},P[n+2]={0},G[n+2]={0};
	string na[n];
    for(int x=0; x<n; x++){
        int m; 
		cin>>m>>na[x];
        for(int y=0; y<m; y++){
            string t; 
			cin>>t;
            if(t[0]==t[3] && t[0]==t[6] && t[0]==t[1] && t[3]==t[6] && t[6]==t[7])
				T[x]++;
            else if(t[0]>t[1] && t[1]>t[3] && t[3]>t[4] && t[4]>t[6] && t[6]>t[7])
				P[x]++;
            else 
				G[x]++;
        }
		T[n]=max(T[x],T[n]);
		P[n]=max(P[x],P[n]);
		G[n]=max(G[x],G[n]);
    }
    for(int x=0; x<n; x++){
        if(T[n]==T[x])
			T[n+1]++;
        if(P[n]==P[x])
			P[n+1]++;
        if(G[n]==G[x])
			G[n+1]++;
    }
    cout<<"If you want to call a taxi, you should call:";
    for(int x=0,i=0; x<n; x++){
        if(T[x]==T[n]){
            cout<<" "<<na[x];
			i++;
            if(i<T[n+1])
				cout<<",";
        }
    }
	cout<<".";
    cout<<"\nIf you want to order a pizza, you should call:";
    for(int x=0,i=0; x<n; x++){
        if(P[x]==P[n]){
            cout<<" "<<na[x];
			i++;
            if(i<P[n+1])
				cout<<",";
        }
    }
	cout<<".";
    cout<<"\nIf you want to go to a cafe with a wonderful girl, you should call:";
    for(int x=0,i=0; x<n; x++){
        if(G[x]==G[n]){
            cout<<" "<<na[x];
			i++;
            if(i<G[n+1])
				cout<<",";
        }
    }
	cout<<".";
}