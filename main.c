/*
This program is created by me.
The API consist of using char userpick[1]; which uses only ONE piece of data.
That data will pass by conditionals.


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int uservsbot(char, char);
int robotchancelogic(char, int);

int main()
{
    //seeding
    srand(time(NULL));
    
    //Variables
    int robotpick = rand() %100;
    char userpick[1];

    char robotpickchar[1];
    
    //print and input
    printf("Pick Rock, Paper, or Sissors\n");
    scanf("%c", &userpick);
    
    //robot logic conditional
    if(robotpick >= 66){
        robotpickchar[0] = 's';
        printf("%c, %d", robotpickchar[0], robotpick);
    }
    else if(robotpick >= 33){
        robotpickchar[0] = 'p';
         printf("%c, %d", robotpickchar[0], robotpick);
    }
    else{
        robotpickchar[0] = 'r';
        printf("%c, %d", robotpickchar[0], robotpick);
    }
    
    //function that calls the user vs bot competition.

    
    return 0;
}

int uservsbot(char userpick, char robotpickchar)
{
    if(userpick[0]== 'p' && robotpickchar[0] == 'r') // USER uses Paper. ROBOT uses Rock user wins this one.
    {
        printf("User has WON!!!");
    }
    else if(userpick[0]== 'p' && robotpickchar[0] == 's')
    {
        printf("User lost because rock used scissors and you picked paper.");
    } 
    else if(userpick[0]== 's' && robotpickchar[0] == 'r')
    {
        printf("User lost because robot used rock and you picked scissors.");
    } 
    else if(userpick[0]== 's' && robotpickchar[0] == 'p')
    {
        printf("User won because robot used rock and you picked scissors.");
    } 
}