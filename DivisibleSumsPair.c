#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k ,sum=0,i,j,count=0,a[100]; 
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           // if(a[i]<a[j]){
                sum=a[i]+a[j];
              //  printf("%d->",sum);
                if(sum%k==0)
                    count++;
            //    printf("%d\n",count);
                
          //  }
        }    
    }
    printf("%d",count);
    return 0;
}
