#include <stdio.h>

void starsRow(){
    printf("enter a number for how many stars you want in row\n");
    int x = 0;
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        printf("*");
    };
}

void pyramid(){
    printf("\nenter a second number to build a trieangel\n");
    int x = 0;
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    };
}

int main() {
    starsRow();
    pyramid();
    return 0;
}
