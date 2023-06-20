#ifndef _ATK_H
#define _ATK_H


typedef struct misselAtaque missel;


missel* criar(missel* mAtaque);

void ataqueCriar(missel* mAtaque);
void liberaAtaque(missel* misselAtaque);


#endif