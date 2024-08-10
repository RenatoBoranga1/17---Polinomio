#include <stdio.h>
#include <math.h>
#define TAM 10

main() {
      float coef[TAM+1];
      float x[TAM+1];
      int grau, i, j;
      
  
      do {
          printf("Difite o grau do polinomio (o grau maximo eh %d): ", TAM);
          scanf("%d", &grau);

          if (grau < 0 || grau > TAM) {
            printf("Grau = %d eh invalido\n", grau);
          }
    } while (grau < 0 || grau > TAM);
     
      for (i = grau; i >= 0; i--) {
        printf("coeficiente de x^%d: ", i);
        scanf("%f", &coef[i]);
      }
      
      printf("\n\nPolinomio:\n");
    
    printf("%.1fx^%d", coef[grau], grau); 
    for (i = grau-1; i >= 0; i--) {
        if (coef[i] != 0) {
            if (coef[i] > 0) {
                if (i == 0)
                    printf(" + %.1f", coef[i]);
                else if (i == 1)
                    printf(" + %.1fx", coef[i]);
                else 
                    printf(" + %.1fx^%d", coef[i], i);
            }
            else {
                if (i == 0)
                    printf(" - %.1f", -coef[i]);
                else if (i == 1)
                    printf(" - %.1fx", -coef[i]);
                else
                    printf(" - %.1fx^%d", -coef[i], i);
            }
        }
                           
    }


printf("\n\n");
}
