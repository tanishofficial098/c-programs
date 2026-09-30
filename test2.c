#include<stdio.h>
int main(){
    int i,n=3;
    for(i=1;i<=n;i++){
        printf("\n");
        for(int j=0;j<=(n-i);j++){
        printf(" ");
    }
        for(int k=1;k<=(2*i-1);k++){
        printf("❤️");}
        printf("\t");
        for(int k=1;k<=(2*i-1);k++){
        printf("❤️");}
        int base=10,j;
    for(int lower_base =1;base>=i;i++){
        printf("\n");
        for(int k=10;k<i;k--){
            printf(" ");
        }
        for(int lower_base =10;j>=i;j--){
            printf("❤️");
        }}
        printf("\n");
    }
    return 0;
}
