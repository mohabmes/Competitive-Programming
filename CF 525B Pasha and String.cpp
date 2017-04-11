#include <cstring>
#include <cstdio>
using namespace std;
char str[200100];
int cum[200100];
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int day,a,sz;
    scanf("%s %d",str,&day);
    sz=strlen(str);
    while(day--){
        scanf("%d",&a);
        cum[a-1]++;
    }
    for(int i=0; i<sz/2; i++){
        cum[i]+=cum[i-1];
 		if(cum[i]%2==0)
			cum[i]=0;
		else 
			cum[i]=1;
    }
    for(int i=0; i<=sz/2; i++){
        if(cum[i]%2){
            char tmp=str[sz-i-1];
            str[sz-i-1]=str[i];
            str[i]=tmp;
        }
    }
    printf("%s\n", str);
    return 0;
}