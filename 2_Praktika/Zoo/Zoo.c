#include <stdio.h>
#include "animal.h"

int main() {
    calculate_all_animals();
    more_food();
    struct animal animalName;
    printf("The average Age is: %.2f\n",calculate_average_age());
    printf("Enter the Name of the Animal: \n");
    scanf("%s",&animalName.name);
    print_animal(animalName);
    print_Zoo();
    return 0;
}

