#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int r = rand() % 2;

    printf("%d\n", r);
    if (r == 0)
    {
        printf("Heads");
    }
    else
    {
        printf("Tails");
    }
    
    return 0;
}
