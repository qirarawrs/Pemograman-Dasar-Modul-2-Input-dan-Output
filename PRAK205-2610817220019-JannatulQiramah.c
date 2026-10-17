#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    
    if (scanf("%lf %lf", &a, &b) != 2) {
        return 0;
    }
    
    double alas = sqrt((b * b) - (a * a));
    double tinggi = a;
    double keliling = alas + tinggi + b;
    double luas = 0.5 * alas * tinggi;
    
    printf("Alas = %.0lf cm\n", alas);
    printf("Tinggi = %.0lf cm\n", tinggi);
    printf("Keliling = %.0lf cm\n", keliling);
    printf("Luas = %.0lf cm^2\n", luas);
    
    return 0;
}