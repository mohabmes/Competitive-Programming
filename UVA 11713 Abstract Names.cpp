#include <bits/stdc++.h>
using namespace std;

string rmVowels(string in){
    string out;
    for(int i=0; i<in.length(); i++){
        if(in[i]=='a'||in[i]=='u'||in[i]=='e'||in[i]=='i'||in[i]=='o')out+=' ';
        else out+=in[i];
    }return out;
}
int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    string s1,s2;
    while(n--){
        //getline(cin, s1);
        //getline(cin, s2);
        cin>>s1>>s2;
        s1 = rmVowels(s1);
        s2 = rmVowels(s2);
        if(s1==s2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
