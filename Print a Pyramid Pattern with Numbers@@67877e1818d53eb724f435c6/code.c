#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=1
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-1;j++){
            printf(" ");   
        }
        for(int k=1;k<=n;k++){
            printf("%d ",k);
        } 
        n+=2;
        printf("\n");
    }
}