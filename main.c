/*
This program is created by me.
The API consist of using char userpick[1]; which uses only ONE piece of data.
That data will pass by conditionals.


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uservsbot(char userpick, char robotpickchar);
char robotchancelogic(int robotrng);

int main()
{
    //seeding
    srand(time(NULL));
    
    //Variables
    int robotpick = rand() %100;
    char userpick;
    char robotpickchar;
    
    //print and input
    printf("Pick Rock, Paper, or Sissors\n");
    scanf(" %c", &userpick);
    
    //function that calls the user vs bot competition and robot RNG.
    robotpickchar = robotchancelogic(robotpick);
    uservsbot(userpick, robotpickchar);
    
    return 0;
}

char robotchancelogic(int robotrng)
{

    if(robotrng >= 66){
        return 's';
    }
    else if(robotrng >= 33){
        return 'r';
    }
    else{
        return 'p';
    }

}

void uservsbot(char userpick, char robotpickchar)
{
    if(userpick == 'p' && robotpickchar == 'r') // USER uses Paper. ROBOT uses Rock user wins this one.
    {
        printf("User won because robot used rock and you picked paper");
    }
    else if(userpick == 'p' && robotpickchar  == 's')
    {
        printf("User lost because robot used scissors and you picked paper.");
    } 
    else if(userpick == 's' && robotpickchar  == 'r')
    {
        printf("User lost because robot used rock and you picked scissors.");
    } 
    else if(userpick == 's' && robotpickchar  == 'p')
    {
        printf("User won because robot used paper and you picked scissors.");
    }
    else if(userpick == 'r' && robotpickchar  == 's')
    {
        printf("User won because robot used scissors and you picked rock.");
    }
    else if(userpick == 'r' && robotpickchar  == 'p')
    {
        printf("User lost because robot used paper and you picked rock.");
    }
    else{
        printf("It's a tie!");
    }
}
