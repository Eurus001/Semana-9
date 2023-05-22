#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    
    int x, y, z;

    //Ingreso de dimensiones

    printf("Ingresa el numero de columnas ");
    scanf("%d", &x);

    printf("Ingresa el numero de filas ");
    scanf("%d", &y);

    printf("Ingresa la profundidad ");
    scanf("%d", &z);

    printf("Matriz: \n");

    //Asignacion de memoria dinamica de matriz A

    int*** A = (int***)malloc(x * sizeof(int**));
    if (A == NULL) {
        printf("No se pudo asignar memoria");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        A[i] = (int**)malloc(y * sizeof(int*));
        if (A[i] == NULL) {
            printf("No se pudo asignar memoria");
            return 1;
        }

        for (int j = 0; j < y; j++) {
            A[i][j] = (int*)malloc(z * sizeof(int));
            if (A[i][j] == NULL) {
                printf("No se pudo asignar memoria");
                return 1;
            }
        }
    }

    //Asignacion de memoria dinamica de matriz A

    int*** B = (int***)malloc(x * sizeof(int**));
    if (B == NULL) {
        printf("No se pudo asignar memoria");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        B[i] = (int**)malloc(y * sizeof(int*));
        if (A[i] == NULL) {
            printf("No se pudo asignar memoria");
            return 1;
        }

        for (int j = 0; j < y; j++) {
            B[i][j] = (int*)malloc(z * sizeof(int));
            if (B[i][j] == NULL) {
                printf("No se pudo asignar memoria");
                return 1;
            }
        }
    }

    srand(time(NULL));

    //Asignacion e impreso de matriz normal

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                A[i][j][k] = rand()%100+1;
                printf("%d\t", A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    //Asignacion e impreso de matriz transpuesta

    printf("Matriz transpuesta:\n");
    for (int i = 0; i < z; i++) 
    {
        for (int j = 0; j < y; j++) 
        {
            for (int k = 0; k < x; k++) 
            {
                B[i][j][k] = A[k][j][i];
                printf("%d\t", B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;

    }


   

