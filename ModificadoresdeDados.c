#include <stdio.h>

int main() {
    int numeroSinal = 3000000000; // numero fora do alcance do int;
    unsigned int numeroSemSinal = 3000000000;
    int numeroNormal = 2147483647;
    long int numeroLongo = 2147483648;
    double numeroPreciso = 3.1234567890123456789;
    long double numeroMaiorPrecisao = 3.123456789012345678901234567890123456789;
    short int numeroCurto = 32767;

    printf("int normal: %d\n", numeroSinal);
    printf("int unsigned: %u\n\n", numeroSemSinal);
    printf("int normal: %d\n", numeroNormal);
    printf("long int: %ld\n\n", numeroLongo);
    printf("double: %15.f\n", numeroPreciso);
    printf("long double: %.21Lf\n\n", numeroMaiorPrecisao);

    return 0;
}