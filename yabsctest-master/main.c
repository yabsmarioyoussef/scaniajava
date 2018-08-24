//
// Created by Mario Youssef on 2018-08-21.
//

#include "animal.h"
#include <stdio.h>
#include <string.h>

int main(void) {
	
    Wolf wolf;

    strcpy(wolf.name, "Mario");
    wolf.age = 23;
    wolf.energy = 20;

    wolf.energy+= eat("fish");
    printf("Wolf eats fish and now have %d energy \n", wolf.energy);
    wolf.energy+= poop();
    wolf.energy+= sleep();
    wolf.energy+= sleep();
    wolf.energy+= hunt();

    printf("Wolf have now 40 och 55 energy depending on the hunt, Answer: %d \n", wolf.energy);
    printf("wolfs time to live is %d years \n", getTTL(wolf.age, wolf.energy));

}

