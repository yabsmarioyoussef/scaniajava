// Created by Mario Youssef on 2018-08-21.
//

#include <stdio.h>
#include <string.h>
#include "wolf.c"

int main(void) {
	
	WolfT *wolf = malloc(sizeof(*wolf));

	init(wolf, "Mario", 23);

    printf("wolf has %d energy \n", wolf_energy(wolf));
    wolf_eat(wolf);
    printf("Wolf eats and now have %d energy \n", wolf_energy(wolf));
    wolf_poop(wolf);
    wolf_sleep(wolf);
    wolf_sleep(wolf);
    wolf_hunt(wolf);

    int age = wolf_age(wolf);
    int energy = wolf_energy(wolf);
    printf("Wolf have now 40 och 55 energy depending on the hunt, Answer: %d \n", wolf_energy(wolf));
    printf("wolfs time to live is %d years \n", getTTL(age, energy));

}

