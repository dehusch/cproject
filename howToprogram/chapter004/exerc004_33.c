#include <stdio.h>

void printRoman(int num) {
    while (num >= 1000) { printf("M"); num -= 1000; }
    while (num >= 900) { printf("CM"); num -= 900; }
    while (num >= 500) { printf("D"); num -= 500; }
    while (num >= 400) { printf("CD"); num -= 400; }
    while (num >= 100) { printf("C"); num -= 100; }
    while (num >= 90) { printf("XC"); num -= 90; }
    while (num >= 50) { printf("L"); num -= 50; }
    while (num >= 40) { printf("XL"); num -= 40; }
    while (num >= 10) { printf("X"); num -= 10; }
    while (num >= 9) { printf("IX"); num -= 9; }
    while (num >= 5) { printf("V"); num -= 5; }
    while (num >= 4) { printf("IV"); num -= 4; }
    while (num >= 1) { printf("I"); num -= 1; }
}

int main() {
    printf("Tabela de Numeros Romanos de 1 a 100:\n");
    printf("--------------------------------------\n");

    for (int i = 1; i <= 100; i++) {
        printf("%3d -> ", i);
        printRoman(i);
        printf("\n");
    }

    return 0;
}

