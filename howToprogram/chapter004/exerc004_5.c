/*
4.5 Ache o erro em cada um dos seguintes trechos de códigos.
(Nota: pode haver mais de um erro.)
a) For ( x = 100, x >= 1, x++ )
printf( “%d\n”, x );

R: Faltou {} e loop infinito. F do for deve ser minusculo.



b) O código a seguir deveria imprimir se determinado
inteiro é ímpar ou par:
switch ( valor % 2 ) {
case 0:
printf( “Inteiro par\n” );
case 1:
printf( “Inteiro ímpar\n” );
}

R: Faltou o break em cada operaçao.


c) O código a seguir deveria ler um inteiro e um caractere
e imprimi-los. Suponha que o usuário digite 100 A.
scanf( “%d”, &intVal );
charVal = getchar();
printf( “Inteiro: %d\nCaractere: %c\n”, intVal, charVal );

R: Tem que usar um scanf também para pedir uma letra


d) for ( x = .000001; x == .0001; x += .000001)
{
printf( “%.7f\n”, x );
}

R: Não pode usar floatings não for.


e) O código a seguir deveria exibir os inteiros ímpares
de 999 a 1:
for ( x = 999; x >= 1; x += 2 ) {
printf( “%d\n”, x );
}

R: x = 1; x <= 999; x += 2)


f) O código a seguir deveria exibir os inteiros pares de 2 a 100:

contador = 2;
    Do {
        if ( contador % 2 == 0 ) {
        printf( “%d\n”, contador );
    }
    contador += 2;
    } While ( contador < 100 );

R: Do e While em minusculo e } antes do while. contador <= 100. O IF não é necessário


g) O código a seguir deveria somar os inteiros de 100 a
150 (supondo que total seja inicializado com 0):
    for ( x = 100; x <= 150; x++ ); {
        total += x;
    }

R: O ";" não deveria existir.
teste
*/