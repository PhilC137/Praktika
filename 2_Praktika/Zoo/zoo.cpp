#include <iostream>

enum viech{Mammal, Fish, Bird, Amphibian, Reptiles}viech;

struct animal{
    enum viech species;
    char name [20];
    int age;
    int food_weight;

}animal;


int main() {

    return 0;
}

