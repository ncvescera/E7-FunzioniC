#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Funzione che risolve un'equazione di secondo grado
 * 
 * @param a Coefficiente di x^2
 * @param b Coefficiente di x
 * @param c Termine noto
 */
void equazione(double a, double b, double c);

int main(int argc, char** argv) {
    double a,b,c ;
    
    printf("Inserisci i coefficienti dell'equazione di secondo grado: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    equazione(a,b,c);
    
    return (EXIT_SUCCESS);
}

void equazione(double a, double b, double c){
    double delta;
    double x1, x2;
    
    delta = (pow(b,2)-(4*a*c)); //calcolo del delta
    
    if(delta < 0)
        printf("Soluzioni NON Reali");
    else if(delta == 0)
        x1 = x2 = (-b/2*a);
    else{
        x1 = ((-b+sqrt(delta))/2*a);
        x2 = ((-b-sqrt(delta))/2*a);
        
        printf("Soluzioni x1 = %g ; x2 = %g\n",x1, x2);
    }
    
    return;
}

