/*
4.5 Ache o erro em cada um dos seguintes trechos de códigos.
(Nota: pode haver mais de um erro.)
a) For ( x = 100, x >= 1, x++ )
printf( “%d\n”, x );


b) O código a seguir deveria imprimir se determinado
inteiro é ímpar ou par:
switch ( valor % 2 ) {
case 0:
printf( “Inteiro par\n” );
case 1:
printf( “Inteiro ímpar\n” );
}


c) O código a seguir deveria ler um inteiro e um caractere
e imprimi-los. Suponha que o usuário digite
100 A.
scanf( “%d”, &intVal );
charVal = getchar();
printf( “Inteiro: %d\nCaractere: %c\n”,
intVal, charVal );


d) for ( x = .000001; x == .0001; x += .000001
) {
printf( “%.7f\n”, x );
}


e) O código a seguir deveria exibir os inteiros ímpares
de 999 a 1:
for ( x = 999; x >= 1; x += 2 ) {
printf( “%d\n”, x );
}


f) O código a seguir deveria exibir os inteiros pares de
2 a 100:
contador = 2;
Do {
if ( contador % 2 == 0 ) {
printf( “%d\n”, contador );
}
contador += 2;
} While ( contador < 100 );


g) O código a seguir deveria somar os inteiros de 100 a
150 (supondo que total seja inicializado com 0):
for ( x = 100; x <= 150; x++ ); {
total += x;
}
*/