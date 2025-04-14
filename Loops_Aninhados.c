#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        i++;
    }

    i = 1;

    do
    {
        int j = 1;
        do
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10);
        i++;
    
    } while (i <= 10);

    for (i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    
    return 0; 
}