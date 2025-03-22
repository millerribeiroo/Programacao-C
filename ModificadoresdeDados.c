#include <stdio.h>

int main() {
    int numeroSinal = 3000000000; // 
    unsigned int numeroSemSinal = 3000000000;
    int numeroNormal = 2147483647;
    long int numeroLongo = 2147483648;


    printf("int normal: %d\n", numeroSinal);
    printf("int unsigned: %u\n\n", numeroSemSinal);
    printf("int normal: %d\n", numeroNormal);
    printf("long int: %ld\n\n", numeroLongo);

    return 0;
}