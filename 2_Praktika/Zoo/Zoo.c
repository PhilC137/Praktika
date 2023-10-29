#include <stdio.h>
#include <string.h>
#include "animal.h"

int main() {
    calculate_all_animals();
    more_food();
    printf("The average Age is: %.2f\n",calculate_average_age());
    printf("Enter the Name of the Animal: \n");
    print_animal(1);
    print_Zoo();
    return 0;
}

