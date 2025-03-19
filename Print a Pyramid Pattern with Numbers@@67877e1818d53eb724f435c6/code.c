#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2!=0){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("%d ",j);
        }
        }
    else{
        printf("nil");
    }
        printf("\n");
    }
}