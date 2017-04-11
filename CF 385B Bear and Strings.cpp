#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long cnt=0, sz=s.length();
    int i,j;
	for(i=0; i<sz; i++){
        for(j=i; j<sz-3; j++){
            string sub=s.substr(j,4);
            if(sub.find("bear")!=-1){
                    cnt+=(sz-j-3);
                    break;
            }
        }
	}cout<<cnt;
	return 0;
}