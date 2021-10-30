    /*
    ****************************************************************
    3.9	Formulando algoritmos com refinamentos sucessivos top-down:
        Estudo de caso 2 (repetição controlada por sentinela)
    ****************************************************************
    Valor de Sentinela é também chamado de valor sinalizador, valor 
    artificial ou valor de flag
    */

    /*
    Figura 3.8 no Programa em C e exemplo de sua execução para o problema da média
    da turma com repetição controlada por sentinela. (Parte 1 de 2.)
    */
    #include <stdio.h>

    int main(){
        
    int contador; /* número de notas digitadas */
    int nota; /* valor da nota */
    int total; /* soma das notas */
    float média; /* número em ponto flutuante para a média */
    
    /* fase de inicialização */
    total = 0; /* inicializa total */
    contador = 0; /* inicializa contador do loop */
    /* fase de processamento */
    /* recebe primeira nota do usuário */
    printf( "Digite a nota, -1 no fim: " ); /* prompt para entrada */
    scanf( "%d", &nota ); /* lê nota do usuário */
    /* loop enquanto valor da sentinela não foi lido */
    
    
    while ( nota != -1 ) {
		total = total + nota;
        /* soma nota ao total */
		contador = contador + 1; /* incrementa contador */
		/* recebe próxima nota do usuário */
		printf( "Digite a nota, -1 para finalizar: " ); /* prompt para entrada */
		scanf("%d", &nota); /* lê próxima nota */
    } /* fim do while */


    /* fase de finalização */
    /* se o usuário digitou pelo menos uma nota */
    
    
    if ( contador != 0 ) {
		/* calcula média de todas as notas lidas */
		média = ( float ) total / contador; /* evita truncar */
		/* exibir média com dois dígitos de precisão */
		printf( "Média da turma é %.2f\n", média );
    } /* fim do if */
    
    
    else { /* se nenhuma nota foi informada, envia mensagem */
		printf( "Nenhuma nota foi informada\n" );
    } /* fim do else */

    //teste
    return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */


