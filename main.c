#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Funzione che calcola il logaritmo in base b di x
 * 
 * @param b Base del logaritmo
 * @param x Argomento del logaritmo
 * @return Valore del logaritmpo: logb(x)
 */
double logaritmo(double b, double x);

int main(int argc, char** argv) {
    double b = 2;
    double x = 8;
    
    double risultato = logaritmo(b,x);
    
    printf("Il logaritmo in base %g di %g e': %g",b,x,risultato);
    
    return (EXIT_SUCCESS);
}

double logaritmo(double b, double x){
    double result;
    
    result = (log(x)/log(b));   //formula del cambio di base
    
    return result;
}