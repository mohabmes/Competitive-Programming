#include <stdio.h>
#include <math.h>
int main(){
    int n,k,flag;
    int a,b,c;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        flag=0;
        scanf("%d", &k);
        for(a=0; a*a<=k; a++){
            int aa=a*a;
            for (b = 0; b*b<=(k-aa); b++){
                int bb=b*b;
                c = sqrt(k-aa-bb);
                if((aa)+(bb)+(c*c)==k){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) printf("%d %d %d\n", a,b,c);
        else printf("-1\n");
    }
    return 0;
}
