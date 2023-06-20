#include "def.h"

#define MAX_TIPO 2

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct defesaArea{
    
    int nome;
    float X;
    float Y;
    char tipo[MAX_TIPO];
    float tam;
    float poderNeutra;
    int misseis;

};

defArea* criar(defArea* def){
    def = malloc(sizeof(defArea));

    if (def = NULL){
        printf("Erro ao alocar memória");
        return 0;
    }
    return def;

}

void defesaCriar(defArea* def){
    printf("D-%i %f %f %s %f %f %i");
    scanf("%i %f %f %s %f %f %i", &def->nome, &def->X, &def->Y, def->tipo,
                                 &def->tam, &def->poderNeutra, &def->misseis);
}

void liberaDefesa(defArea* def){
    free(def);
}