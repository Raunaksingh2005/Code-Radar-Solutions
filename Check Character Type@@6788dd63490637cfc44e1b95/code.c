#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c==a&&c==e&&c==i&&c==o&&c==u){
        printf("Vowel");
    }else if(c>=0){
        printf("Digit");
    }else{
        printf("Special Charecter");
    }
    return 0;
}