#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Time.h"

/**
 * Converte il Record tempo in secondi
 * @param tempo Record tempo
 * @return Secondi 
 */
int timeToSeconds(time tempo);
/**
 * Calcola la differenza in secondi tra due ore
 * @param tempo1 Prima ora
 * @param tempo2 Seconda ora
 * @return Differenza di tempo in secondi
 */
int timeFromTime(time tempo1, time tempo2);

int main(int argc, char** argv) {
    int result;
    time tempo1 = {12,30,0};
    time tempo2 = {13,40,30};
    
    result = timeFromTime(tempo1, tempo2);
    
    printf("%d",result);
    
    return (EXIT_SUCCESS);
}

int timeToSeconds(time tempo){
    int result;
    int hToS, mToS, sToS;
    
    //conversione dell'ora in secondi
    hToS = tempo.h*60*60;
    mToS = tempo.m*60;
    sToS = tempo.s;
    
    result = hToS + mToS + sToS;
    
    return result;
}

int timeFromTime(time tempo1, time tempo2){
    int result;
    
    int tempoT, tempoMid;
    
    tempoT = timeToSeconds(tempo1);
    tempoMid = timeToSeconds(tempo2);
    
    result = abs(tempoT-tempoMid);  //calcola la differenza tra i due orari
    
    return result;
}