#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Calculer la somme des éléments du tableau
    for (int i = 0; i < 5; i++) { // Correction: Utilisation de <
        sum += array[i];
    }

    printf("La somme des éléments du tableau est : %d\n", sum);

    return 0;
}
