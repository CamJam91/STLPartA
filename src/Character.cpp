#include "../include/Character.h"
#include<iostream>
using namespace std;

Character::Character(char start, int offset){
        //if start is a alpha char assign, else throw exception
    if (isalpha(start))
        this->start = start;
    else
        throw invalidCharacterException();
        //if offset position is valid, assigne else throw exception
    if (isalpha(start + offset))
        this->offset = offset;
    else
        throw invalidRangeException();
}

    //return target character 
char Character::getTarget(){
    return start + offset;
}