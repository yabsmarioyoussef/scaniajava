///
// Created by Mario Youssef on 2018-08-21.
//
#include <stdio.h>
#include "animal.h"
#include <time.h>
#include <stdlib.h>
#include <memory.h>

int eat(char *foodType){
    if(strcmp(foodType, "fish") == 0) {
        return 25;
    }
    else if(strcmp(foodType, "sheep") == 0) {
        return 35;
    }
    else if(strcmp(foodType, "human") == 0) {
        return 50;
    }
    else {
        return 10;
    }
}

int poop() {
    return -10;
}

int hunt() {
    int effort = -25;

    srand(time(NULL));   // should only be called once
    int r = rand();
    if(r % 2 == 0) {
        effort +=15;
    }
    return effort;
}

static int calculateTTL(int age, int energy) {
    return ((2 * energy) / age);
}

int getTTL(int age, int energy) {
    int ttl = calculateTTL(age, energy);
    return ttl;
}

int sleep(){
    return 15;
}


