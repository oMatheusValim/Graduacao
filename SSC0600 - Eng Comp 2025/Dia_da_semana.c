/*EXIBIR NA TELA O DIA DA SEMANA PARA UM DADO DIA DO ANO DE 2025 

Considerando o ano de 2025: 
Ler como entrada o dia do mês e o mês atual (números inteiros) 
Exibir na tela o dia da semana (Segunda, Terca, Quarta, Quinta, Sexta, Sabado ou Domingo)
Sem acentos ou caracteres especiais, exatamente assim, como indicado acima. 

DICAS:
Considerando o Domingo, como dia 0 da semana; Segunda, como dia 1; ... Sábado como dia 6.
A cada 7 dias, o Domingo seria novamente o dia 0 da semana (resto da divisão por 7).
Sabendo que: 
- Em 2025, o dia 1 do mês 1 foi uma Quarta (Dia 3 da semana, para semana começando no Domingo)
- Em 2025 então temos um "deslocamento" de +2 no Domingo, pois domingo foi dia 5 e (5+2)%7 == 0 
- No mês de janeiro, o dia da semana (numerado a partir de 0 para Domingo) seria (DIA+2)%7
- Para cada mês completo que já passou, devemos somar o total de dias do mês...
  Por exemplo: Janeiro soma Zero (não passou nenhum mês), Fevereiro soma 31 dias de Janeiro;
         Março soma 31 de Janeiro mais 28 de fevereiro; Abril soma 31 (jan), 28 (fev), 31 (mar)
          sem esquecer de somar o deslocamento +2 e de dividir por 7.
Assim podemos obter o dia da semana sabendo o dia e mês atual! */
#include <stdio.h>

int main(){
    int dia, mes;
    
    scanf("%d %d", &dia, &mes);

    int diasDOmes[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int diasAcumulados = 0;

    for (int i = 0; i < mes -1; i++){
        diasAcumulados += diasDOmes[i];
    }

    int diaDAsemana = (diasAcumulados + dia + 2) % 7;
    char *diaSemana[7] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};

    printf("%s\n", diaSemana[diaDAsemana]);
    return 0;
}