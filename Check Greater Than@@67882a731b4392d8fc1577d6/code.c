#include <stdio.h>
int main() {
    int a,b;
    scanf("&d&d",&a,&b);
    c=a>b;
    if(c){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}