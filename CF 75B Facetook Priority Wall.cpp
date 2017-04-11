#include <iostream>
#include <algorithm>
#include <map>
//#include <cstdio>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    //pair<int,string>p[300];
    vector<pair<int,string>>p;
    map<string,int>name;
    string me; 
	int n,z=0,g=0;
    cin>>me>>n;
    for(int i=0; i<n; i++){
        string x,y,d,_; 
		int po=-1;
        cin>>x>>d;
        if(d=="posted"){
			cin>>_>>y;
			po=15;
		}
        else if(d=="commented"){
			cin>>_>>y; 
			po=10;
		}
        else{
			cin>>y; 
			po=5;
		}
        y=y.substr(0,y.length()-2);
        cin>>_;
        //cout<<x<<" "<<d<<" "<<y<<"\n";
        if(x==me)
			name[y]+=po; 
		else 
			name[x]+=0;
        if(y==me)
			name[x]+=po; 
		else 
			name[y]+=0;
        /*
        int f=0;
        for(int q=0; q<=z; q++){
            if(p[q].second==x||p[q].second==y){p[q].first+=po,f=1;break;}
        }
        if(!f){
            if(x==me){p[z].first=po; p[z++].second=y;}
            else {p[z].first=0; p[z++].second=y;}
            if(y==me){p[z].first=po, p[z++].second=x;}
            else {p[z].first=0, p[z++].second=x;}
        }*/
    }
    for(auto c:name) 
		p.push_back({-c.second,c.first});
    sort(p.begin(),p.end());
    for(auto c:p) 
		cout<<c.second<<endl;
}