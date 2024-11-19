#include <stdio.h>

// Déclaration de la fonction printtab
void printtab(int tab[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    // Initialisation du tableau
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(tab) / sizeof(tab[0]); // Taille du tableau

    // Appel de la fonction printtab
    printtab(tab, size);

    return 0;
}
