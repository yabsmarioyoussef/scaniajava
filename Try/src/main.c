// Created by Mario Youssef on 2018-08-21.
//

#include "Animal.h"
#include <stdio.h>
#include <string.h>

int main(void) {

	animal wolf;
	
	init(&wolf);

    strcpy(wolf.name, "Mario");
    wolf.age = 23;
    wolf.energy = 20;

    printf("wolf has %d energy", wolf.energy);
    wolf.energy+= wolf.eatfunc("fish");
    printf("Wolf eats fish and now have %d energy \n", wolf.energy);
    wolf.energy+= wolf.poopfunc();
    wolf.energy+= wolf.sleepfunc();
    wolf.energy+= wolf.sleepfunc();
    wolf.energy+= wolf.huntfunc();

    int age = wolf.age;
    int energy = wolf.energy;
    printf("Wolf have now 40 och 55 energy depending on the hunt, Answer: %d \n", wolf.energy);
    printf("wolfs time to live is %d years \n", wolf.getTTLfunc(age, energy));

}

