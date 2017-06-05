#include <iostream>
#include <sstream>
#include <set>
using namespace std;

string trim(string in){
    string out;
    for(int i=0; i<in.size(); i++){
        in[i]=tolower(in[i]);
        if(in[i]>='a' && in[i]<='z')
            out+=in[i];
        else out+=' ';
    }
    return out;
}

int main(){
    set<string>st;
    string s;
    while(getline(cin,s)){
        s=trim(s);
        istringstream iss(s);
        while(iss>>s){
            st.insert(s);
        }
    }
    set<string>::iterator it=st.begin();
    for( ;it!=st.end(); it++){
        cout<<*it<<endl;
    }
	return 0;
}
