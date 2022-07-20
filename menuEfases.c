// bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
// funções chamadas
#include "prototipos.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct jogador
{
  char nome[255];
  int pontos;
};

/* Nome da função: creditos
  parâmetro de entrada: void
  objetivo:Exibir a tela de creditos ao jogador
  Retorno:void
*/
void creditos()
{
  int opcaoc;
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█  Autores: Hellen Cristina, Joao Vitor Botrel e Quezia Adla Freitas          █\n");
  printf("█  Aperte 1 para voltar para o menu.                                          █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  printf("\n");
  scanf(" %d", &opcaoc);
  switch (opcaoc)
  {
  case 1:
    system("cls");
    menudojogo();
    break;
  default:
    printf("Opcao invalida");
  }
}

/* Nome da função: fase5
  parâmetro de entrada: não tem parâmetro
  objetivo:Exibir a fase 5 ao jogador
  Retorno: não tem retorno
*/
int fase5(struct jogador *jogador)
{

  // declaração de variáveis e vetores
  int t, temp, c;
  int v[5], w[5], i = 0, x, z;
  printf("\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                    Aperte 'ENTER' para iniciar a proxima fase!              █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  getch();
  system("cls");
  srand(time(NULL));
  // loop para randozirar os valores do vetor
  for (i = 0; i < 10; i++)
  {
    w[i] = rand() % 10;
  }
  // loop para randorizar os 14 valores separadamente e printar para o jogador
  for (x = 0; x < 5; x++)
  {
    printf("\n\n\n Voce tem 15 segundos para memorizar estes numeros.Boa Sorte!");
    printf("\n\n\n                          Memorize:");
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d \n", w[i]);

      // segunda linha
      w[i] = rand() % 10;
      printf("                                     %d", w[i]);
      w[i] = rand() % 10;
      printf("  %d", w[i]);
      w[i] = rand() % 10;
      printf("  %d \n", w[i]);

      // terceira linha
      w[i] = rand() % 10;
      printf("                                      %d", w[i]);
      w[i] = rand() % 10;
      printf("   %d \n", w[i]);

      // quarta linha
      w[i] = rand() % 10;
      printf("                                    %d", w[i]);
      w[i] = rand() % 10;
      printf("      %d \n", w[i]);

      // quinta linha
      w[i] = rand() % 10;
      printf("                                      %d", w[i]);
      w[i] = rand() % 10;
      printf("   %d \n", w[i]);

      // ajusta o tempo e limpa a tela
      sleep(15);
      system("cls");
    }

    printf("\n\n\n\n\n\n\n                           Resposta: ");
    // loop para indentificar o valor inserido pelo jogador
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // segunda linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // terceira linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // quarta linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // quinta linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
    } // loop para verificar se o jogador acertou
    for (i = 0; i <= x; i++)
    {
      if (v[i] != w[i])
      {
        z = 100;
      }
    }
    if (z == 100)
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta errada, tente novamente!                      █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
      break;
    }
    else
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta correta, parabens!                            █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

      (*jogador).pontos += 1;
    }
    break;
  }
}
/* Nome da função: fase4
  parâmetro de entrada: não tem parâmetro
  objetivo:Exibir a fase 4 ao jogador
  Retorno: não tem retorno
*/
int fase4(struct jogador *jogador)
{
  // declaração de variáveis e vetores
  int t, temp, c;
  int v[5], w[5], i = 0, x, z;

  printf("\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                    Aperte 'ENTER' para iniciar a proxima fase!              █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  getch();
  system("cls");
  srand(time(NULL));

  // loop para randozirar os valores do vetor
  for (i = 0; i < 10; i++)
  {
    w[i] = rand() % 10;
  }
  // loop para randorizar os 12 valores separadamente e printar para o jogador
  for (x = 0; x < 5; x++)
  {
    printf("\n\n\n Voce tem 12 segundos para memorizar estes numeros.Boa Sorte!");
    printf("\n\n\n                          Memorize:");
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d \n", w[i]);

      // segunda linha
      w[i] = rand() % 10;
      printf("                                     %d", w[i]);
      w[i] = rand() % 10;
      printf("  %d", w[i]);
      w[i] = rand() % 10;
      printf("  %d \n", w[i]);

      // terceira linha
      w[i] = rand() % 10;
      printf("                                      %d", w[i]);
      w[i] = rand() % 10;
      printf("   %d \n", w[i]);

      // quarta linha
      w[i] = rand() % 10;
      printf("                                    %d", w[i]);
      w[i] = rand() % 10;
      printf("      %d", w[i]);

      // ajusta o tempo e limpa a tela
      sleep(12);
      system("cls");
    }

    printf("\n\n\n\n\n\n\n                           Resposta: ");
    // loop para indentificar o valor inserido pelo jogador
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // segunda linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // terceira linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // quarta linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
    }
    // loop para verificar se o jogador acertou
    for (i = 0; i <= x; i++)
    {
      if (v[i] != w[i])
      {
        z = 100;
      }
    }
    if (z == 100)
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta errada, tente novamente!                      █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
      break;
    }

    else
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta correta, parabens!                            █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

      (*jogador).pontos += 1;
    }

    fase5(jogador);
    break;
  }

  printf("\n\n\n                     Aperte 'ENTER' para finalizar");
  getch();

  printf("\n\n\n");
}
/* Nome da função: fase3
  parâmetro de entrada: não tem parâmetro
  objetivo:Exibir a fase 3 ao jogador
  Retorno: não tem retorno
*/
int fase3(struct jogador *jogador)
{

  // declaração de variáveis e vetores
  int t, temp, c;
  int v[5], w[5], i = 0, x, z;

  printf("\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                    Aperte 'ENTER' para iniciar a proxima fase!              █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  getch();
  system("cls");
  srand(time(NULL));

  // loop para randozirar os valores do vetor
  for (i = 0; i < 10; i++)
  {
    w[i] = rand() % 10;
  }
  // loop para randorizar os 10 valores separadamente e printar para o jogador
  for (x = 0; x < 5; x++)
  {
    printf("\n\n\n Voce tem 10 segundos para memorizar estes numeros.Boa Sorte!");
    printf("\n\n\n                          Memorize:");
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d \n", w[i]);

      // segunda linha
      w[i] = rand() % 10;
      printf("                                     %d", w[i]);
      w[i] = rand() % 10;
      printf("  %d", w[i]);
      w[i] = rand() % 10;
      printf("  %d \n", w[i]);

      // terceira linha
      w[i] = rand() % 10;
      printf("                                      %d", w[i]);
      w[i] = rand() % 10;
      printf("   %d", w[i]);

      // ajusta o tempo e limpa a tela
      sleep(10);
      system("cls");
    }

    printf("\n\n\n\n\n\n\n                           Resposta: ");
    // loop para indentificar o valor inserido pelo jogador
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // segunda linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      // terceira linha
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
    }
    // loop para verificar se o jogador acertou
    for (i = 0; i <= x; i++)
    {
      if (v[i] != w[i])
      {
        z = 100;
      }
    }
    if (z == 100)
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta errada, tente novamente!                      █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

      break;
    }

    else
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta correta, parabens!                            █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

      (*jogador).pontos += 1;
    }
    fase4(jogador);
    break;
  }
}
/* Nome da função: fase2
  parâmetro de entrada: não tem parâmetro
  objetivo:Exibir a fase 2 ao jogador
  Retorno: não tem retorno
*/

int fase2(struct jogador *jogador)
{

  // declaração de variáveis e vetores
  int t, temp, c;
  int v[5], w[5], i = 0, x, z;

  printf("\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                    Aperte 'ENTER' para iniciar a proxima fase!              █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  getch();
  system("cls");
  srand(time(NULL));

  // loop para randozirar os valores do vetor
  for (i = 0; i < 10; i++)
  {
    w[i] = rand() % 10;
  }

  // loop para randorizar os 7 valores separadamente e printar para o jogador
  for (x = 0; x < 5; x++)
  {
    printf("\n\n\n Voce tem 8 segundos para memorizar estes numeros.Boa Sorte!");
    printf("\n\n\n                          Memorize:");
    for (i = 0; i <= x; i++)
    {
      // primeira linha
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d \n", w[i]);
      // segunda linha
      w[i] = rand() % 10;
      printf("                                     %d", w[i]);
      w[i] = rand() % 10;
      printf("     %d", w[i]);
      sleep(8);
      system("cls");
    }

    printf("\n\n\n\n\n\n\n                           Resposta: ");

    // loop para indentificar o valor inserido pelo jogador
    for (i = 0; i <= x; i++)
    {
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
    } // loop para verificar se o jogador acertou

    for (i = 0; i <= x; i++)
    {
      if (v[i] != w[i])
      {
        z = 100;
      }
    }
    if (z == 100)
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta errada, tente novamente!                      █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
      break;
    }

    else
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta correta, parabens!                            █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

      (*jogador).pontos += 1;
    }
    fase3(jogador);
    break;
  }
}
/* Nome da função: fase1
  parâmetro de entrada: não tem parâmetro
  objetivo:Exibir a fase 1 ao jogador
  Retorno: não tem retorno
*/
int fase1(struct jogador *jogador)
{

  // declaração de variáveis e vetores
  int t, temp, c;
  int v[5], w[5], i = 0, x, z;

  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                      Aperte 'ENTER' para comecar!                           █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  getch();
  system("cls");
  srand(time(NULL));

  // loop para randozirar os valores do vetor
  for (i = 0; i < 10; i++)
  {
    w[i] = rand() % 10;
  }
  // loop para randorizar os 5 valores separadamente e printar para o jogador
  for (x = 0; x < 5; x++)
  {
    printf("\n\n\n Voce tem 5 segundos para memorizar estes numeros.Boa Sorte!");
    printf("\n\n\n                          Memorize:");
    for (i = 0; i <= x; i++)
    {
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      w[i] = rand() % 10;
      printf(" %d", w[i]);
      sleep(5);
      system("cls");
    }

    printf("\n\n\n\n\n\n\n                           Resposta: ");
    // loop para indentificar o valor inserido pelo jogador
    for (i = 0; i <= x; i++)
    {
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
      scanf("%d", &v[i]);
    }
    // loop para verificar se o jogador acertou
    for (i = 0; i <= x; i++)
    {
      if (v[i] != w[i])
      {
        z = 100;
      }
    }
    if (z == 100)
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta errada, tente novamente!                      █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
      break;
    }

    else
    {
      printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█                      Resposta correta, parabens!                            █\n");
      printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

      (*jogador).pontos += 1;
    }

    fase2(jogador);
    break;
  }

  coletaNome(jogador);

  printf("\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                         Aperte 'ENTER' para finalizar                       █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

  getch();


  printf("\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█                                Sua pontuação                                █\n");
  printf("█       Nome: %s                                                          █\n", (*jogador).nome);
  printf("█       Pontos: %d                                                            █\n", (*jogador).pontos);
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");

  getch();

  printf("\n\n\n");
}

/* Nome da função: jogar
  parâmetro de entrada: não tem parâmetro
  objetivo:Ordenar que a primeira fase seja exibida quando escolhido jogar no menu
  Retorno:void
*/

void jogar(struct jogador *jogador)
{
  fase1(jogador);

  
  //atualizaRanking(rankingJogadores, jogador);
}


/* Nome da função: ranking
  parâmetro de entrada: não tem parâmetro
  objetivo:Ordenar que a primeira fase seja exibida quando escolhido jogar no menu
  Retorno:void
*/
/*
void ranking(struct jogador* rankingJogadores){
  printf("\n\nRanking\n\n");
  for (int i=0; i<5; i++){
    if (rankingJogadores[i].nome[0] != '\0' || rankingJogadores[i].pontos != 0){
      printf("%d - %s - %d\n", i+1, rankingJogadores[i].nome, rankingJogadores[i].pontos);
    }
  }
}*/

/* Nome da função: atualizaRanking
  parâmetro de entrada: não tem parâmetro
  objetivo:Ordenar que a primeira fase seja exibida quando escolhido jogar no menu
  Retorno:void
*/
/*
void atualizaRanking(struct jogador* rankingJogadores, struct jogador* jogador){
  int i=0, verifica = 0;

  for (i; i<5; i++){
    if (rankingJogadores[i].pontos < (*jogador).pontos){
      for (int j=i; j<5; j++){
        rankingJogadores[j+1] = rankingJogadores[j];
      }

      rankingJogadores[i].pontos = (*jogador).pontos;
      strcpy(rankingJogadores[i].nome, (*jogador).nome);
      break;
    }
  }
}


void coletarRanking(struct jogador* rankingJogadores){
  FILE *arquivo;
  arquivo = fopen("ranking.txt", "r");
  if (arquivo == NULL){
    printf("Erro ao abrir o arquivo");
    exit(1);
  }
  for (int i=0; i<5; i++){
    fscanf(arquivo, "%s %d", rankingJogadores[i].nome, &rankingJogadores[i].pontos);
  }

  fclose(arquivo);
}


void guardaRanking(struct jogador* rankingJogadores){
  FILE *arquivo;
  arquivo = fopen("ranking.txt", "w");
  if (arquivo == NULL){
    printf("Erro ao abrir o arquivo");
    exit(1);
  }
  for (int i=0; i<5; i++){
    fprintf(arquivo, "%s %d\n", rankingJogadores[i].nome, rankingJogadores[i].pontos);
  }

  fclose(arquivo);
}*/


void coletaNome(struct jogador* jogador){
  printf("\n\nDigite seu nome: ");
  scanf("%s", (*jogador).nome);
}



/* Nome da função: menu
  parâmetro de entrada: não tem parâmetro
  objetivo:Mostrar a tela de menu ao jogador e permitir que ele escolha alguma das opções
  Retorno:void
*/
void menudojogo()
{
  int opcao;
  int sair = 1;
  struct jogador jogador, *ponteiro;
  //struct rankingJogadores[5];

  ponteiro = &jogador;
  (*ponteiro).pontos = 0;

  /*
  for (int i=0; i<5; i++)
  {
    rankingJogadores[i].pontos = 0;
    rankingJogadores[i].nome[0] = '\0';
  }*/

  //coletarRanking(rankingJogadores);

  while (sair == 1)
  {
    system("cls");
    printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("█                                                                             █\n");
    printf("█           █▀▄▄▄▀█ █▀▀▀ █▀▄▄▄▀█ █▀▀█ █▀▀▀▄ █   █                             █\n");
    printf("█           █  █  █ █▀▀  █  █  █ █  █ █▀█▀   ▀█▀                              █\n");
    printf("█           █     █ █▄▄▄ █     █ ▀▀▀▀ █  █    █                               █\n");
    printf("█                           █▀▀█ █   █▀▀█ █▀▀ █ █                             █\n");
    printf("█                           █▀▀▄ █   █  █ █   █▀▄                             █\n");
    printf("█                           █▄▄█ ▀▀▀ ▀▀▀▀ ▀▀▀ ▀ ▀                             █\n");
    printf("█                                                                             █\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("█                                                                             █\n");
    printf("█                                                                             █\n");
    printf("█                                1 - Jogar                                    █\n");
    printf("█                                2 - Sair                                     █\n");
    printf("█                                3 - Creditos                                 █\n");
    printf("█                                                                             █\n");
    printf("█                                                                             █\n");
    printf("█                                                                             █\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("\nOPCAO: ");

    scanf(" %d", &opcao);
    switch (opcao)
    {
    case 1:
      system("cls");
      jogar(ponteiro);
      break;
    case 2:
      system("cls");
      sair = 0;
      //guardaRanking(rankingJogadores);
      break;
    case 3:
      system("cls");
      creditos();
      break;
    case 4:
      system("cls");
      //ranking(rankingJogadores);
      break;
    default:
      system("cls");
      printf("Opcao invalida");
    }
  }
}
