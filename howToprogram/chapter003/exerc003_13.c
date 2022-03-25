#include<stdio.h>

int x = 1, total = 0, y;
int main(){
    while (x <= 10) {
        y = x * x;
        printf("%d\n", y);
        total += y;
        ++x;
    }

    printf("Total = %d\n", total);
    return 0;
}