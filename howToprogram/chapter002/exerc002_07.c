/*
2.7 Identifique e corrija os erros cometidos em cada uma
das instruções. (Nota: pode haver mais de um erro por
instrução.)
a) scanf( “d”, valor );
b) printf( “O produto de %d e %d é %d”\n,
x, y );
c) primeiroNúmero + segundoNúmero =
somaDosNúmeros
d) if ( número => maior )
maior == número;
/*
e)  Programa para determinar o maior
dentre três inteiros /*
f) Scanf( “%d”, umInteiro );
g) printf( “Módulo de %d dividido por %d
é\n”, x, y, x % y );
h) if ( x = y );
printf( %d é igual a %d\n”, x, y );
i) print( “A soma é %d\n,” x + y );
j) Printf( “O valor que você digitou é:
%d\n, &valor );

//RESPOSTAS

/*
SOLUTIONS:
2.7 Identify and correct the errors in each of the following statements (Note: there may be more than one error per statement):
a) scanf( "d", value );
ANS: scanf( “%d”, &value );
b) printf( "The product of %d and %d is %d"\n, x, y );
ANS: printf( “The product of %d and %d is %d\n”, x, y, z );
c) firstNumber + secondNumber = sumOfNumbers
ANS: sumOfNumbers = firstNumber + secondNumber;
d) if ( number => largest )
largest == number;
ANS:
if ( number >= largerst )
largest = number;
/*
e)  Program to determine the largest of three integers
/*
ANS: /* Program to determine the largest of three integers */
/*
f) Scanf( "%d", anInteger );
ANS: scanf( “%d”, &anInteger );
g) printf( "Remainder of %d divided by %d is\n", x, y, x % y );
ANS: printf( “Remainder of %f divided by %d is %d\n”, x, y, x % y );
h) if ( x = y );
printf( %d is equal to %d\n", x, y );
ANS:
if ( x == y )
printf( “%d is equal to %d\n”, x, y );
i) print( "The sum is %d\n," x + y );
ANS: printf( “The sum is %d\n”, x + y );
j) Printf( "The value you entered is: %d\n, &value );
ANS: printf( “The value you entered is: %d\n”, value );
*/