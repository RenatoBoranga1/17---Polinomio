#include <iostream>
#define VET 100

double poli(double x, int gr, double a[]){
    int i;
    double p = 0.0, tx = 1.0;
    for (i = 0; i <= gr; i = i + 1){
        p = p + a[i] * tx;
        tx = tx * x;
    }
    return p;
}
int main(void){
    int i, g;
    double coef[VET], x;
    scanf("%d %lf", &g, &x);
    if (g < VET){
        for (i = g; i >= 0; i = i - 1) scanf("%lf", &coef[i]);
        printf("%.2lf\n", poli(x, g, coef));
    }
    return 0;
}
