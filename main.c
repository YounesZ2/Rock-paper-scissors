/*
This program is created by me.
The API consist of using char userpick[1]; which uses only ONE piece of data.
That data will pass by conditionals.


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //seeding
    srand(time(NULL));
    int robotpick = rand() %100;
    printf("%d", robotpick);
    //Variables
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
    
    //conditionals for comparation
    if(userpick[0]== 'p' && robotpickchar[0] == 'r') // USER uses Paper. ROBOT uses Rock user wins this one.
    {
        printf("User has WON!!!");
    }
    
    return 0;
}