#include <stdio.h>
#include <stdlib.h>

/*
 * Funzione che dato in ingresso un numero compresto tra 1 e 12 stampa il mese dell'anno corrispondente
 * 
 * @param number numero del mese
 */
void numberToMounth(int number);

int main(int argc, char** argv) {
    int number;
    
    printf("Inserisci un numero compreso tra 1 e 12\n");
    scanf("%d",&number);
    
    numberToMounth(number);
    
    return (EXIT_SUCCESS);
}

void numberToMounth(int number){
    switch(number){
        case 1:
            printf("Gennaio");
            break;
        case 2:
            printf("Febbraio");
            break;
        case 3:
            printf("Marzo");
            break;
        case 4:
            printf("Aprile");
            break;
        case 5:
            printf("Maggio");
            break;
        case 6:
            printf("Giugno");
            break;
        case 7:
            printf("Luglio");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Settembre");
            break;
        case 10:
            printf("Ottobre");
            break;
        case 11:
            printf("Novembre");
            break;
        case 12:
            printf("Dicembre");
            break;
        default:
            printf("Il numero deve essere compresto tra 1 e 12");
            break;
    }
    
    return;
}