#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

int main() {

    // TODO 1: Instanciar uma lista

    printf("ADT List Program\n----------------\n");

    int val;
    int pos = 0;
    do {
        printf("Enter number (0 to stop): ");
        readInteger(&val);

        if(val != 0) {
            // TODO 3: adicionar 'val' à lista na posição/rank 'pos'; incrementar pos.
        }
    } while(val != 0);

    int size = 0;
    // TODO 4: obter o tamanho da lista e guardar em 'size'
    printf("List size = %d \n", size);

    printf("List contents: \n");
    // TODO 5: imprimir o conteúdo da lista (imprimir o número em cada posição)
    printf("-------------- \n");

    //
    // TODO #: teste das restantes funções solicitadas
    //

    // TODO 2: destruir a lista

    return EXIT_SUCCESS;
}
