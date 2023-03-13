#include <stdio.h>
#include <stdlib.h>

int comparer_entiers_decroissant(const void* a, const void* b) {
    const int* pa = (const int*)a;
    const int* pb = (const int*)b;
    return (*pb - *pa);
}
int comparer_entiers_croissant(const void* a, const void* b) {
    const int* pa = (const int*)a;
    const int* pb = (const int*)b;
    return (*pa - *pb);
}
int main() {
    int tableau[] = { 5, 3, 7, 1, 9, 2, 8, 4, 6, 0 };
    int n = sizeof(tableau) / sizeof(tableau[0]);

    
    qsort(tableau, n, sizeof(int), comparer_entiers_croissant);
    printf("Tableau tri� : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

  
    int element = 7;
    int* result = bsearch(&element, tableau, n, sizeof(int), comparer_entiers_croissant);
    if (result == NULL) {
        printf("L'�l�ment %d n'a pas �t� trouv�.\n", element);
    }
    else {
        printf("L'�l�ment %d a �t� trouv� � l'indice %d.\n", element, result - tableau);
    }

    return 0;
}
