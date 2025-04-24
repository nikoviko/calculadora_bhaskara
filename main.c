#include <stdio.h>
#include <math.h>
float a, b, c, delta, x1, x2, x;
int main () {
    printf("insira o valor de a\n");
    scanf("%f", &a);
    printf("insira o valor de b\n");
    scanf("%f", &b);
    printf("insira o valor de c\n");
    scanf("%f", &c);
    
    delta = pow(b, 2) - (4 * a * c);
    
    if (delta > 0) {
     x1 = (((-b) + sqrt(delta)) / (2*a));
     x2 = (((-b) - sqrt(delta)) / (2*a));
     printf("x1 eh igual a %.2f e x2 eh igual a %.2f", x1, x2);
    }
    else if (delta < 0) {
        printf("raiz inexistente nos numeros reais");
    }
    else if (delta == 0) {
    x = -b / (2 *a);
    printf("possui apenas uma raiz %.2f", x);
        
        
    }
    return 0;
}