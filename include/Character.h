#ifndef CHARACTER_H
#define CHARACTER_H

class Character{
    private:
    char start;
    char target;
    int offset;

    public: 
        //constructor
    Character(char start, int offset);
        //getter
    char getTarget();
        //Exception class 
    class invalidCharacterException{};
    class invalidRangeException{};
};
#endif