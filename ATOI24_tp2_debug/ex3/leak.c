#include <stdio.h>
#include <stdlib.h>

#define NUM_SEGMENTS 5
#define SEGMENT_SIZE 100

int main() {
    int *segments[NUM_SEGMENTS];

    // Allocation de mémoire pour chaque segment
    for (int i = 0; i < NUM_SEGMENTS; i++) {
        segments[i] = (int *)malloc(SEGMENT_SIZE * sizeof(int));
        if (segments[i] == NULL) {
            printf("Erreur lors de l'allocation de mémoire pour le segment %d.\n", i);
            // Libération de la mémoire allouée jusqu'à présent
            for (int j = 0; j < i; j++) {
                free(segments[j]);
            }
            return -1;
        }
    }

    // Initialisation des segments avec des données
    for (int i = 0; i < NUM_SEGMENTS; i++) {
        for (int j = 0; j < SEGMENT_SIZE; j++) {
            segments[i][j] = i + j;
        }
    }

    // Libération de la mémoire allouée pour chaque segment
    for (int i = 0; i < NUM_SEGMENTS; i ++) {
        free(segments[i]);
        segments[i] = NULL; // Réinitialisation du pointeur pour éviter les références invalides
    }

    return 0;
}
