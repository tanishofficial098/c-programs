#include<stdio.h>
int main(){
    int i,j,k,n=10;
    for(i=1;n>=i;i++){
        printf("\n");
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=10;j>=(i*2);j--){
            printf("*");
        }}
        printf("\n");
    return 0;
}