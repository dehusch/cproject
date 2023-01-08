/*
4.4 Encontre o erro em cada um dos segmentos de código a
seguir, e explique como corrigi-lo.
    a)  x = 1;
        while ( x <= 10 );
            x++;
        }

    //Faltou a { depois do while. Não tem ";" no while.


b)  for ( y = .1; y != 1.0; y += .1 )
        printf( “%f\n”, y );

    //Nunca usar um numero flutuante para um loop for.
    //Fazer o calculo para que o resultado seja flutuante dentro do loop.


c) switch ( n ) {
case 1:
printf( “O número é 1\n” );
case 2:
printf( “O número é 2\n” );
break;
default:
printf( “O número não é nem 1 nem
2\n” );
break;
}
    //Faltou o break depois do case1


d) O código a seguir deveria imprimir os valores de 1
a 10.

    n = 1;
    while ( n < 10 )
        printf( “%d “, n++ );

    //Usar sempre <= na condição while

*/