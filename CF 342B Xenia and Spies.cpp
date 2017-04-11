#include <iostream>
using namespace std;
int main(){
    int n,m,s,f,mv,t=1; 
	char k;
    cin>>n>>m>>s>>f;
    mv=(f>s? 1 :-1 );
    k =(f>s?'R':'L');
    for(int x=1; x<=m; x++){
        int a,b,c; 
		cin>>a>>b>>c;
        if(s==f)
			break;
        while(t<a && s!=f){
			cout<<k; s+=mv; t++;
		}
        if(s==f)
			break;
        else if((s>=b&&s<=c) || (s+mv>=b&&s+mv<=c)){
			cout<<'X';t++;
		}
        else{
			cout<<k; s+=mv;t++;
		}
    }
    while(s!=f){
		cout<<k;
		s+=mv;
	}
}