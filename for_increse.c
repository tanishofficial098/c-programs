#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
    printf("\n");
    for (j=1;j<=n;j++){
    printf("*");}
}
    printf("\n");
    return 0;
}