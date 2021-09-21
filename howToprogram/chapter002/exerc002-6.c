/*
2.6 Identifique e corrija os erros em cada uma das seguintes
instruções:
a) printf( “O valor é %d\n”, &número );
b) scanf( “%d%d”, &número1, número2 );
c) if ( c < 7 );{
printf( “C é menor que 7\n” );
}
d) if ( c => 7 ) {
printf( “C é igual ou menor que
7\n” );
}
*/

//RESPOSTAS

/*
2.6 a) Erro: &número. Correção: elimine o (&). Discutiremos
as exceções mais à frente.
b) Erro: número2 não tem um (&). Correção: número2
deveria ser &número2. Adiante no texto, discutiremos as
exceções.
c) Erro: o ponto e vírgula após o parêntese direito da condição
na instrução if. Correção: remova o ponto e vírgula
após o parêntese direito. [Nota: o resultado desse erro
é que a instrução printf será executada, sendo ou não
verdadeira a condição na instrução if. O ponto e vírgula
após o parêntese direito é considerado uma instrução vazia,
uma instrução que não faz nada.]
d) Erro: o operador relacional => deve ser mudado
para >= (maior ou igual a).
*/
