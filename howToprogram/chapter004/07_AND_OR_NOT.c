/*

C oferece operadores lógicos, que podem ser usados para formar condições mais complexas ao combinar condições simples. Os
operadores lógicos são && (AND lógico), || (OR lógico) e ! (NOT lógico, também chamado de negação lógica). Vejamos alguns
exemplos de cada um desses operadores.

if ( sexo == 1 && idade >= 65 )
++idosoFeminino;

Essa condição é verdadeira se, e somente se, as duas condições simples forem verdadeiras. Por fim, se essa condição combinada
for realmente verdadeira, então a contagem de idosoFeminino será incrementada em 1. Se uma ou ambas as condições simples
forem falsas, então o programa saltará o incremento e prosseguirá com a instrução seguinte ao if.




if ( médiaSemestre >= 90 || exameFinal >= 90 )
printf( “Nota do aluno é A\n” );

Essa instrução também contém duas condições simples. A condição médiaSemestre >= 90 é avaliada para determinar se o aluno
merece uma nota ‘A’, devido a um desempenho sólido durante o semestre. A condição exameFinal >= 90 é avaliada para determinar
se o aluno merece uma nota ‘A’ por um desempenho excelente no exame final. A estrutura if, então, considera a condição combinada

    médiaSemestre >= 90 || exameFinal >= 90

e concede um ‘A’ ao aluno se uma ou ambas as condições simples forem verdadeiras. A mensagem ‘A nota do aluno é A’ não é
impressa somente se as duas condições simples forem falsas (zero).

*/