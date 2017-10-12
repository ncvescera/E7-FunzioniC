#include <stdio.h>
#include <stdlib.h>

/*
 * Funzione che stampa un triangolo di stessa base e altezza
 * 
 * @param base Valore della base e altezza del triangolo
 * @param body Carattere da stampare per visualizzare il triangolo
 */
void printTriangle(int base, char body);

int main(int argc, char** argv) {
    int base;
    char body;
    
    printf("Inserisci la base del triangolo: ");
    scanf("%d",&base);
    
    printf("Inserisci il carattere da utilizzare: ");
    scanf(" %c",&body);
    
    printTriangle(base,body);
    
    return (EXIT_SUCCESS);
}

void printTriangle(int base, char body){
    int spazi = (base-1);   //escludo il primo output di soli spazi
    
    for(int i = 0; i<base; i++){
        //stampo gli spazi
        for(int j = 0; j<spazi; j++)
            printf(" ");
        
        //stampo gli asterischi
        for(int k = 0; k<(base-spazi); k++)
            printf("%c",body);
        
        spazi --;
        printf("\n");
    }
    
    return;
}