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

int main(){
    int nasc = 0;
    int atual = 0;
    float idade = 0;

    printf("Digite a data de nascimento (AAAAMMDD): ");
    scanf("%d", &nasc);

    printf("Digite a data de hoje (AAAAMMDD): ");
    scanf("%d", &atual);

    idade = atual - nasc;

    printf("\nVocê tem %4.0f anos\n\n", idade);

}