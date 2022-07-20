/*******************************************************************************************************
O jogo da memória Memory Bloc, tem como objetivo desenvolver a capacidade de memória e
concentração do jogador através da memorização de numeros com um certo limite de tempo que serão
exibidos na tela. O jogador será desafiado a memorizar o máximo de numeros para que assim consiga
avançar de nível e chegue até o final.
O jogo possui cinco fases, à medida que o jogador for avançando, o nível de dificuldade é elevado,
levando assim o jogador a ser desafiado a cada fase.
Autores: Hellen Cristina Andrade, Joao Vitor Botrel, Quezia Adla Freitas
Data da ultima atualização: 19.07.22

*******************************************************************************************************/

//bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
//funções do menu
//funções para chamada das fases
#include "prototipos.h"
/* Nome da função: main
  parâmetro de entrada: não tem parâmetro
  objetivo:estrutura do jogo 
  Retorno: não tem retorno
*/

int main() {
  system("cls");
  menudojogo();
  return 0;
}
