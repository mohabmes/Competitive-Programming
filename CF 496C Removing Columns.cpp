#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int compare(vector<char> w1,vector<char> w2){
    for(int i=0; i<w1.size(); i++){
        if(w2[i]>w1[i])
            return i;
        else if(w2[i]<w1[i])
            return -1;
    }
    return -1;
}

int main() {
    //freopen("in.txt","r",stdin);
	int n,m,cnt=0;
    cin>>n>>m;
    vector<char> ws[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char ch;
            cin>>ch;
            ws[i].push_back(ch);
        }
    }
    for(int i=1; i<n; i++){
        int comp=compare(ws[i],ws[i-1]);
        if(comp!=-1){
                for(int j=0; j<n; j++){
                    ws[j].erase(ws[j].begin()+comp);
                }
                i=0;
                cnt++;
            }
    }
    cout<<cnt;
	return 0;
}