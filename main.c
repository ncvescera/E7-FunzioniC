#include <stdio.h>
#include <stdlib.h>

/*
 * Funzione che stampa un triangolo di stessa base e altezza
 * 
 * @param base Valore della base e altezza del triangolo
 */
void printTriangle(int base);

int main(int argc, char** argv) {
    int base;
    
    printf("Inserisci la base del triangolo: ");
    scanf("%d",&base);
    
    printTriangle(base);
    
    return (EXIT_SUCCESS);
}

void printTriangle(int base){
    int spazi = (base-1);   //escludo il primo output di soli spazi
    
    for(int i = 0; i<base; i++){
        //stampo gli spazi
        for(int j = 0; j<spazi; j++)
            printf(" ");
        
        //stampo gli asterischi
        for(int k = 0; k<(base-spazi); k++)
            printf("*");
        
        spazi --;
        printf("\n");
    }
    
    return;
}

