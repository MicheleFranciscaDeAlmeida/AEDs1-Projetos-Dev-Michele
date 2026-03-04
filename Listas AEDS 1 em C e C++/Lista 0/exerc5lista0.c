#include <stdio.h>
#include <math.h>

/// @brief 
/// @return 
int main() {
    double cateto1, cateto2, hipotenusa;

    scanf("%lf %lf", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("Hipotenusa: %.2lf\n", hipotenusa);

    return 0;
}