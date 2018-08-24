//
// Created by Mario Youssef on 2018-08-21.
//

#ifndef YABSJAVATEST_ANIMAL_H
#define YABSJAVATEST_ANIMAL_H

struct animal;

typedef struct Animal{
	char name[50];
	int age;
	int energy;
	int (*eatfunc)(char*);
	int (*poopfunc)();
	int (*huntfunc)();
	int (*getTTLfunc)(int, int);
	int (*sleepfunc)();
} animal;

void init(animal* ani);
int eat(char *foodType);
int poop();
int hunt();
int getTTL(int age, int energy);
int sleep();

#endif //YABSJAVATEST_ANIMAL_H
