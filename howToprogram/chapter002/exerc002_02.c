/*2.2 Indique se cada uma das sentenças a seguir é verdadeira
ou falsa. Explique sua resposta no caso de alternativas
falsas.
a) A função printf sempre começa a imprimir no
início de uma nova linha.
b) Comentários fazem com que o computador imprima
na tela o texto delimitado por /* e */ /* 
quando o programa é executado.
c) A sequência de escape \n, quando usada em uma
string de controle de formato de printf, faz com
que o cursor se posicione no início da próxima linha
na tela.
d) Todas as variáveis precisam ser declaradas antes de
serem usadas.
e) Todas as variáveis precisam receber um tipo ao serem
declaradas.
f) C considera as variáveis número e NúMeRo idênticas.
Introdução à programação em C 39
g) Declarações podem aparecer em qualquer parte do
corpo de uma função.
h) Todos os argumentos após a string de controle de
formato em uma função printf precisam ser precedidos
por (&).
i) O operador módulo (%) só pode ser usado com operandos
inteiros.
j) Os operadores aritméticos *, /, %, + e – têm o mesmo
nível de precedência.
k) Os nomes das variáveis a seguir são idênticos em
todos os sistemas C padrão.
esteéumnúmerosuperhiperlongo1234567
esteéumnúmerosuperhiperlongo1234568
l) Um programa que exibe três linhas de saída precisa
conter três instruções printf.*/

//RESPOSTAS

/*a) Falso. A função printf sempre começa a imprimir
onde o cursor estiver posicionado, e isso pode ser em
qualquer lugar de uma linha na tela.
b) Falso. Os comentários não causam qualquer ação
quando o programa é executado. Eles são usados para
documentar programas e melhorar sua legibilidade.
c) Verdadeiro.
d) Verdadeiro.
e) Verdadeiro.
f) Falso. C diferencia maiúsculas de minúsculas, de
modo que essas variáveis são diferentes.
g) Falso. As definições precisam aparecer após a chave à
esquerda do corpo de uma função e antes de quaisquer
instruções executáveis.
h) Falso. Os argumentos em uma função printf normalmente
não devem ser precedidos por um (&). Os argumentos
após a string de controle de formato em uma
função scanf normalmente devem ser precedidos por
um (&). Discutiremos as exceções a essas regras nos capítulos
6 e 7.
i) Verdadeiro.
j) Falso. Os operadores *, / e % estão no mesmo nível
de precedência, e os operadores + e – estão em um
nível de precedência mais baixo.
k) Falso. Alguns sistemas podem distinguir os identificadores
com mais de 31 caracteres.
l) Falso. Uma instrução printf com várias sequências
de escape \n pode exibir várias linhas.
*/