///
// Created by Mario Youssef on 2018-08-21.
//
#include "Animal.h"
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>

#ifndef WOLF_C_
#define WOLF_C_

typedef struct Wolf {
	AnimalT *animal;
	void (*huntfunc)(AnimalT*);
} WolfT;

static void hunt(AnimalT *animal);

static void eat(AnimalT *animal){
	printf("EErgy before eat %d \n", animal->energy);
    	animal->energy += 25;
	printf("EErgy after eat %d \n", animal->energy);
}

void wolf_eat(WolfT *wolf) {
	wolf->animal->eatfunc(wolf->animal);
}

static void poop(AnimalT *animal) {
    animal->energy += (-10);
}

void wolf_poop(WolfT *wolf) {
	wolf->animal->poopfunc(wolf->animal);
}

static void hunt(AnimalT *animal) {
    int effort = -25;

    int r = rand();
    if(r % 2 == 0) {
        effort +=15;
    }
    animal->energy += effort;
}

void wolf_hunt(WolfT *wolf) {
	wolf->huntfunc(wolf->animal);
}

static int calculateTTL(int age, int energy) {
    return ((2 * energy) / age);
}

int getTTL(int age, int energy) {
    int ttl = calculateTTL(age, energy);
    return ttl;
}

static void sleep(AnimalT *animal) {
    animal->energy += 15;
}

void wolf_sleep(WolfT *wolf) {
	wolf->animal->sleepfunc(wolf->animal);
}

static char * getName(AnimalT *animal) {
	return animal->name;
}

char * wolf_name(WolfT *wolf) {
	return wolf->animal->namefunc(wolf->animal);
}

static int getEnergy(AnimalT *animal) {
	return animal->energy;
}

int wolf_energy(WolfT *wolf) {
	return wolf->animal->energyfunc(wolf->animal);
}

static int getAge(AnimalT *animal) {
	return animal->age;
}

int wolf_age(WolfT *wolf) {
	return wolf->animal->agefunc(wolf->animal);
}

void init(WolfT *wolf, char *name, int age) {
	wolf->animal = (AnimalT *)malloc(sizeof(AnimalT));
	strcpy(wolf->animal->name, name);
	wolf->animal->age = age;
	wolf->animal->energy = 20;
	wolf->animal->eatfunc = &eat;
	wolf->animal->poopfunc = &poop;
	wolf->animal->getTTLfunc = &getTTL;
	wolf->animal->sleepfunc = &sleep;
	wolf->animal->namefunc = &getName;
	wolf->animal->energyfunc = &getEnergy;
	wolf->animal->agefunc = &getAge;
	wolf->huntfunc = &hunt;
}
/*
deinit(struct Wolf *wolf) {

}
*/

#endif
