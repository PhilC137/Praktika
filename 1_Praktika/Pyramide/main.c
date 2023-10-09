#include <stdio.h>

//Function to build a line out of stars
void starsRow(){

    printf("enter a number for how many stars you want in row\n");
    int x = 0;
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        printf("*");
    };
}

//Function to build a triangle out of stars
void pyramid(){

    printf("\nenter a second number to build a triangle\n");
    int x = 0;
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    };
}

//Function to build a Pyramid out of stars *
void egyptStyle(){

    printf("\nenter a third number which is uneven to build a triangle in the Egypt way\n");
    int x = 0;
    scanf("%d", &x);

    //if the given Number is even ask again
    while (x%2 == 0){
        printf("\nplease enter a uneven number!\n");
        scanf("%d", &x);
    }
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= 2*x -1 ; ++j) {
            if(j >= x-(i-1) && j <= x+(i-1)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    starsRow();
    pyramid();
    egyptStyle();
    return 0;
}
