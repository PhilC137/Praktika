#ifndef ANIMAL_H
#define ANIMAL_H

enum viech { Mammal, Fish, Bird, Amphibian, Reptiles };

struct animal {
    enum viech species;
    char name[20];
    int age;
    float food_weight;
};

int calculate_all_animals();

float calculate_average_age();

void more_food();

void print_animal(struct animal pickAnimal);

void print_Zoo();

#endif
