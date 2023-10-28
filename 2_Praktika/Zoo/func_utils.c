#include <stdio.h>
#include <string.h>
#include "animal.h"

struct animal Zoo[10] = {
        {Mammal,"Elephant",30,20.5},
        {Fish,"Clown Fish",2,0.5},
        {Bird,"Hawk",12,2.5},
        {Reptiles,"Allosaurus",34,35.3}
};

/*Global size Var that stands for all the Animals in the Array*/
int size;

/*Calculates the actual number of Animals in the Zoo*/
int calculate_all_animals() {
    int i;
    for (i = 0; i <= sizeof Zoo; ++i) {
        if (Zoo[i].age == 0) {
            break;
        } else {
            size++;
        }
    }
    return size;
}

/*Calculate the average age of all Animals in the Zoo*/
float calculate_average_age(){
    int i;
    float result = 0;

/*for loop to count all ages together*/
    for (i = 0; i < size; ++i) {
        if(Zoo[i].age == 0){
            break;
        } else {
            result += Zoo[i].age;
        }
    }
    return result/size;
}

/*Calculates the new food_weight*/
void more_food(){
    int i;
    for(i = 0; i <  size; i++){
        switch (Zoo[i].species) {
            case Mammal:
                Zoo[i].food_weight += Zoo[i].food_weight*0.10;
                break;
            case Bird:
                Zoo[i].food_weight += Zoo[i].food_weight*0.01;
                break;
            case Fish:
                Zoo[i].food_weight += Zoo[i].food_weight*0.04;
                break;
            case Amphibian:
                Zoo[i].food_weight += Zoo[i].food_weight*0.02;
                break;
        }
        printf("The %s gets %.2f food weight\n",Zoo[i].name,Zoo[i].food_weight);
    }
}

/*Prints one specific animal stats*/
void print_animal(int number){

    printf("Name of the Animal: %s\nAge: %d\nfood weight: %.2f\n",
           Zoo[number].name, Zoo[number].age, Zoo[number].food_weight);
    switch (Zoo[number].species) {
        case 0:
            printf("Species: Mammal\n\n");
            break;
        case 1:
            printf("Species: Fish\n\n");
            break;
        case 2:
            printf("Species: Bird\n\n");
            break;
        case 3:
            printf("Species: Amphibian\n\n");
            break;
        case 4:
            printf("Species: Reptiles\n\n");
            break;
    }

}

/*Prints the hole Zoo*/
void print_Zoo(){
    int i;
    for (i = 0; i < size; ++i) {
        print_animal(i);
    }
}
