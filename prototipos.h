#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED


struct jogador;

int fase1(struct jogador *jogador);
int fase2(struct jogador *jogador);
int fase3(struct jogador *jogador);
int fase4(struct jogador *jogador);
int fase5(struct jogador *jogador);
void creditos();
void jogar(struct jogador *jogador);
//void jogar(struct jogador rankingJogadores, struct jogador *jogador);
void menudojogo();
//void ranking(struct jogador rankingJogadores);
//void guardaRanking(struct jogador rankingJogadores);
//void coletarRanking(struct jogador rankingJogadores);
//void verificaRanking();
//void atualizaRanking(struct jogador rankingJogadores, struct jogador* jogador);
void coletaNome(struct jogador *jogador);


#endif // PROTOTIPOS_H_INCLUDED
