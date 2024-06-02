/*Triplas de Pitágoras. Um triângulo retângulo pode
ter lados que são valores inteiros. O conjunto de três va-
lores inteiros para os lados de um triângulo retângulo é
chamado de tripla de Pitágoras. Esses três lados precisam
satisfazer o relacionamento de que a soma dos quadra-
dos de dois catetos é igual ao quadrado da hipotenusa.
Ache todas as triplas de Pitágoras não superiores a 500
para cateto1, cateto2 e hipotenusa. Use um loop for tri-
plamente aninhado que simplesmente teste todas as pos-
sibilidades. Este é um exemplo de computação por ‘força
bruta’. Isso não é esteticamente atraente para muitas
pessoas. Mas existem muitos motivos para essas técni-
cas serem importantes. Em primeiro lugar, com o poder
da computação aumentando em um ritmo tão fenome-
nal, soluções que levariam anos, ou mesmo séculos,
para serem produzidas com a tecnologia de alguns anos
atrás agora podem ser produzidas em horas, minutos ou
mesmo segundos. Os chips microprocessadores recentes
podem processar um bilhão de instruções por segundo!
Em segundo lugar, como você descobrirá em cursos de ciên-
cia da computação mais avançados, existem inúmeros
problemas interessantes para os quais não existe uma
técnica algorítmica conhecida além da simples força bru-
ta. Investigamos muitos tipos de metodologias de solução
de problemas neste livro. Consideraremos muitas técni-
cas de força bruta para diversos problemas interessantes.

Nao utilizar a funcao pow() da biblioteca math.h.*/

#include <stdio.h>

int main(void)
{
    int cateto1, cateto2, hipotenusa, count = 0;

    for (cateto1 = 1; cateto1 <= 500; cateto1++)
    {
	for (cateto2 = 1; cateto2 <= 500; cateto2++)
	{
	    for (hipotenusa = 1; hipotenusa <= 500; hipotenusa++)
	    {
		if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa)
		{
		    printf("Cateto1: %d, Cateto2: %d, Hipotenusa: %d\n", cateto1, cateto2, hipotenusa);
		++count;
		}
	    }
	}
    }
    printf("Total de triplas de Pitágoras: %d\n", count);

    return 0;
}
