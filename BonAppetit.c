#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i,sum=0,k,n,charged,c[100000];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    scanf("%d",&charged);
    for(i=0;i<n;i++){
        if(i==k)
            continue;
        sum=sum+c[i];
    }
    sum=sum/2;
    sum=charged-sum;
    if(sum==0){
        printf("Bon Appetit");
    }else{
        printf("%d",sum);
    }
    
    return 0;
}
