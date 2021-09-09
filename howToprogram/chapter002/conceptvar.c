#include <stdio.h>
//Is allowed to use var in printf
//It's allowes to use var outside a printf
int main()
{
    int myAge = 37;
    int momAge = 60;
    int dadAge = 60;
    int year = 2021;

    printf ("My age is %i\nDaddy age is %i\nMom age is %i\nI've born in %i\n"
            , myAge, dadAge, momAge, year - myAge);
    printf ("My dad born in %i\nMy mom born in %i\n"
            , year - dadAge, year - momAge);

    return 0;
}
