#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int d, sumT, smin=0, smax=0;
    cin>>d>>sumT;
    int minT[d], maxT[d], schedule[d]={0},s=0;
    for(int x=0; x<d; x++){
		cin>>minT[x]>>maxT[x]; 
		smin+=minT[x], 
		smax+=maxT[x]; 
	}
    if(smin<=sumT && sumT<=smax){
        for(int x=0; x<d; x++){
			schedule[x]=minT[x]; 
			sumT-=minT[x];
		}
        for(int x=0; sumT && x<d; x++){
            if(schedule[x]<maxT[x]){
                int t=min((maxT[x]-schedule[x]), sumT);
                sumT-=t; 
				schedule[x]+=t;
            }
        }
        cout<<"YES"<<endl; for(int x=0; x<d; x++){
			cout<<schedule[x]<<" ";
		}
    }
	else{
		cout<<"NO";
	}
}