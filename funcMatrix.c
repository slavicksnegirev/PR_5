#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "func_prototype.h"

void outMatrix(int **, int, int);

void func(void)
{
    int matrixRow = 8, matrixColumn = 5;
    int **ptrMatrix = (int **) malloc(matrixRow * sizeof(int *));
    
    for (int i = 0; i < matrixRow; ++i)
    {
        ptrMatrix[i] = (int *) malloc(matrixColumn * sizeof(int));
    }
    
    for (int i = 0; i < matrixRow; ++i)
    {
        for (int j = 0; j < matrixColumn; ++j)
        {
            ptrMatrix[i][j] = rand() % 101 - 50;
        }
    }
    
    puts("Заполнение матрицы случайными числами:");
    outMatrix(ptrMatrix, matrixRow, matrixColumn);
    
    puts("Выполнение условия:");
    for (int i = 1; i < matrixRow-1; ++i)
    {
        for (int j = 1; j < matrixColumn-1; ++j)
        {
            if (ptrMatrix[i][j] > ptrMatrix[i-1][j] && ptrMatrix[i][j] > ptrMatrix[i+1][j] && ptrMatrix[i][j] > ptrMatrix[i][j-1] && ptrMatrix[i][j] > ptrMatrix[i][j+1])
                printf("Экстремум (max) с индексом [%d][%d] равен = %d\n", i, j, ptrMatrix[i][j]);
            if (ptrMatrix[i][j] < ptrMatrix[i-1][j] && ptrMatrix[i][j] < ptrMatrix[i+1][j] && ptrMatrix[i][j] < ptrMatrix[i][j-1] && ptrMatrix[i][j] < ptrMatrix[i][j+1])
                printf("Экстремум (min) с индексом [%d][%d] равен = %d\n", i, j, ptrMatrix[i][j]);
        }
    }
    
}

void outMatrix(int **matrix, int matrix_row, int matrix_column)
{
    for (int i = 0; i < matrix_row; ++i)
    {
        for (int j = 0; j < matrix_column; ++j)
        {
            printf("%4d", matrix[i][j]);
            if (j == matrix_column - 1)
                printf("\n");
        }
    }
}

