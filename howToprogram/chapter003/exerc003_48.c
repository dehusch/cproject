/*
Calculadora da frequência cardíaca. Ao se
exercitar, você pode usar um monitor de batimentos
cardíacos para ver se seus batimentos estão dentro
de uma faixa segura sugerida por seus instrutores
e médicos. De acordo com a American Heart Asso-
ciation (AHA) (<www.americanheart.org/presenter.
jhtml?identifier=4736>), a fórmula para calcular sua
frequência cardíaca máxima em batimentos por mi-
nuto é 220 menos sua idade em anos. Sua frequência
cardíaca está em uma faixa que é 50 a 85 por cento da
máxima. [Nota: essas fórmulas são estimativas forne-
cidas pela AHA. As frequências cardíacas normal e má-
xima podem variar com base na saúde, condição física
e sexo do indivíduo. Sempre consulte um médico ou
profissional qualificado antes de iniciar ou modificar
um programa de exercícios.] Crie um programa que
leia a data de nascimento do usuário e o dia atual (con-
sistindo cada um em dia, mês e ano). Seu programa
deverá calcular e exibir a idade da pessoa (em anos),
sua frequência cardíaca máxima e sua frequência car-
díaca normal.
*/
#include<stdio.h>
#include<time.h>

int main()
{
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}