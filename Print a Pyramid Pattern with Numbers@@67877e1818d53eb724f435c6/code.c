#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int n=1;
        for(int j=1;j<=a;j++){
            printf("%d ",n);
            n=n+2;
        }
        printf("\n");
    }
}