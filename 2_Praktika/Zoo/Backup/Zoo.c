#include <stdio.h>
#include <string.h>


enum viech{Mammal, Fish, Bird, Amphibian, Reptiles};

struct animal{
    enum viech species;
    char name [20];
    int age;
    float food_weight;

}animal;

struct animal Zoo[10] = {
        {Mammal,"Elephant",30,20.5},
        {Fish,"Clown Fish",2,0.5},
        {Bird,"Hawk",12,2.5},
        {Reptiles,"Allosaurus",34,35.3}
};


/*Global size Var that stands for all the Animals in the Array*/
int size;
/*Calculates the actuall number of Animals in the Zoo*/
int calculate_all_animals() {
    int i;
    for (i = 0; i <= sizeof Zoo; ++i) {
        if (Zoo[i].age == 0) {
            break;
        } else {
            size++;
        }
    }
}

/*Calculate the average age of all Animales in the Zoo*/
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

float more_food(){
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

    return animal.food_weight;
}



void print_animal(struct animal pickAnimal){
    int i;
    for(i = 0; i < size; i++){
        if(strcmp(pickAnimal.name, Zoo[i].name) == 0){
            pickAnimal = Zoo[i];
            break;
        }

    }
    printf("Name of the Animal: %s\nAge: %d\nfood weight: %.2f\n",
           pickAnimal.name, pickAnimal.age, pickAnimal.food_weight);
    switch (pickAnimal.species) {
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

void print_Zoo(){
    int i;
    for (i = 0; i < size; ++i) {
        print_animal(Zoo[i]);
    }
}


int main() {
    calculate_all_animals();
    more_food();
    struct animal animalName;
    printf("%.2f\n",calculate_average_age());
    printf("Enter the Name of the Animal: \n");
    scanf("%s",&animalName.name);
    print_animal(animalName);
    print_Zoo();
    return 0;
}

