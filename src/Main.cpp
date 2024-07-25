//Cameron Murphy
//CIS 1202
#include<iostream>
#include<../include/Character.h>
#include<iostream>
using namespace std;

char characterDriver(char start, int offset);

int main(){
    char start;
    int offset;
    char returnChar;
        //prompt user
    printf("Enter a starting character\n>>");
    cin >> start;
    printf("Enter an offset\n>>");
    cin >> offset;
        //get character using driver function
    returnChar = characterDriver(start, offset);
    cout << returnChar;

    return 0;
}

    //driver handles Character class constrcutor that throws exceptions on bad input
char characterDriver(char start, int offset){
    try{
        Character testCharacter(start,offset);
        return testCharacter.getTarget();
    }catch(Character::invalidCharacterException ic){
        printf("This is an invalid character");
    }catch(Character::invalidRangeException ir){
        printf("That range is invalid");
    }
    return -1;
}