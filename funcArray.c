#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "func_prototype.h"

void outArray(int *, int);

void func(void)
{
    int arraySize = 35;
    int *array = (int *) malloc(arraySize * sizeof(int));
    
    for (int i = 0; i < arraySize; ++i)
    {
        array[i] = rand() % 101 - 50;
    }
    
    puts("Заполнение массива случайными числами:");
    outArray(array, arraySize);
    
    puts("\nВыполнение условия:");
    for (int i = 1; i < arraySize-1; ++i)
    {
        if (array[i] > array[i-1] && array[i] > array[i+1])
            printf("Экстремум (max) с индексом [%d] равен = %d\n",i, array[i]);
        if (array[i] < array[i-1] && array[i] < array[i+1])
            printf("Экстремум (min) с индексом [%d] равен = %d\n",i, array[i]);
    }
}

void outArray(int *ptrArray, int array_size)
{
    for (int i = 0; i < array_size; ++i)
        printf("%4d;", ptrArray[i]);
    puts(" ");
}
