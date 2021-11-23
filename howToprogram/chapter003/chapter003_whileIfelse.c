/* Figura 3.10: fig03_10.c
Análise de resultados de exame 
Uma escola oferece um curso que prepara alunos para o exame 
estadual de licenciamento de corretores de imó-
veis. No último ano, dez dos alunos que completaram esse curso 
fizeram o exame de licenciamento. Naturalmente, a escola quer 
saber como os alunos se saíram no exame. Você recebeu a missão 
de escrever um programa que resuma os resultados. Você recebeu 
uma lista com os nomes dos dez alunos. Ao lado de cada nome, 
lê-se 1 se o aluno passou no exame, ou 2, se o aluno foi reprovado.

Seu programa deve analisar os resultados do exame da seguinte forma:

1.	Forneça como entrada cada resultado do teste (isto é, 1 ou 2). 
Exiba a mensagem ‘Digite o resultado’ na tela cada vez que o programa 
pedir outro resultado do teste.

2. Conte o número de resultados de teste de cada tipo.

3.	Exiba um resumo dos resultados de teste que indique o número de 
alunos que passaram e o número de alunos que foram reprovados.

4. Se mais de oito alunos tiverem passado no exame, imprima a mensagem 
‘Bônus para o instrutor!’
*/
#include <stdio.h>
    /* função main inicia execução do programa */
int main( void )
    {
    /* inicializa variáveis nas declarações */
    int aprovados = 0; /* número de aprovações */
    int reprovados = 0; /* número de reprovações */
    int aluno = 1; /* contador de alunos */
    int resultado; /* um resultado de exame */
    /* processa 10 alunos usando loop controlado por contador */
    while ( aluno <= 10 ) {
		 /* pede entrada do usuário e lê o valor digitado */
		printf( "Forneça resultado ( 1=aprovado,2=reprovado): " );
		scanf( "%d", &resultado );
		 /* se resultado 1, incrementa aprovados */
		if ( resultado == 1 ) {
		    aprovados = aprovados + 1;
		} /* fim do if */
		else {/* senão, incrementa reprovados */
		    reprovados = reprovados + 1;
		} /* fim do else */
		aluno = aluno + 1; /* incrementa contador de alunos */
    } /* fim do while */
    /* fase de finalização; exibe número de aprovados e reprovados */
    printf( "Aprovados %d\n", aprovados );
    printf( "Reprovados %d\n", reprovados );
    /* se mais de oito aprovados, imprime 'Bônus ao instrutor!' */
    if ( aprovados > 8 ) {
    printf( "Bônus ao instrutor!\n" );
    } /* fim do if */
    return 0;
} /* fim da função main */
