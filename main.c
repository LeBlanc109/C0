#include <stdio.h>
#include <time.h>

int main(){

    /*Calculate your age based off the current year
    1.First we need to get the users age
    2. Now we need to get the year
        what header file? isn't it time.h
        

    */

    int user_age = 0;
    printf("Enter your age: ");
    scanf("%d", &user_age);

    //Use Struct to find the local time
    time_t now = time(NULL);
    struct tm now_t = *localtime(&now);

    //Once we have the current time stored in a variable,,, let's get the year: tm_year
    int currentYear = now_t.tm_year + 1900;

    //calculate year born 
    int yearborn = currentYear - user_age;

    //print out the current year
    printf("It is currently: %d\n", currentYear);
    printf("You were born in: %d\n ", yearborn);


   return 0;
}