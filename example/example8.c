//print 99 multiply table
#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            printf("%d*%d=%d",i,j,i*j);
            printf("\t");
            }
        printf("\n"); 
        }
    }
