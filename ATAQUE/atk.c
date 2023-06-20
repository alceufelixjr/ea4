#include "atk.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct misselAtaque{
    int nome;
    float X;
    float Y;
    float poderAtaque;

};


missel* criar(missel* mAtaque){
    mAtaque = malloc(sizeof(missel));

    if (mAtaque = NULL){
        printf("Erro ao alocar memória");
        return 0;
    }
    return mAtaque;

}


void ataqueCriar(missel* mAtaque){
    printf("M-%i %f %f %f");
    scanf("%i %f %f %f", &mAtaque->nome, &mAtaque->X, &mAtaque->Y, &mAtaque->poderAtaque);
}

void liberaAtaque(missel* misselAtaque){
    free(misselAtaque);
}