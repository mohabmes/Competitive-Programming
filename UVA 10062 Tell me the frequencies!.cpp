#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

bool cmp(pair<int,int> x, pair<int,int> y){
    if(x.first!=y.first) return x.first<y.first;
    return x.second>y.second;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	char s[1001];
	int f=0;
	while(gets(s)){
        vector<pair<int,int>> v;
        int arr[128]={0}, sz=strlen(s);
        for(int i=0; i<sz; i++)
            arr[(int)s[i]]++;
        for(int i=0; i<128; i++)
            if(arr[i]>0)v.push_back(make_pair(arr[i],i));
        sort(v.begin(), v.end(), cmp);
        int vsz=v.size();
        if(f)printf("\n"); f=1;
        for(int i=0; i<vsz; i++){
            printf("%d %d\n",v[i].second, v[i].first);
        }

	}
	return 0;
}
