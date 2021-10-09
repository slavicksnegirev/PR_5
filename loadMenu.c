#include <stdio.h>
#include <stdlib.h>
#include "loadLib.h"
#include "func_prototype.h"

int main(void)
{
    int a = 0, b = 1;
    
    puts("Выберите библиотеку для работы с ОС Windows:");
    puts("--------------------------------");
    puts("|1.| Библиотека с массивом.    |");
    puts("|2.| Библиотека с матрицей.    |");
    puts("|3.| Выход.                    |");
    puts("--------------------------------");
    printf("Введите номер нужного пункта: ");
    while (b)
    {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("/Users/slavick.snegirevicloud.com/Desktop/ПР5/lab_5/funcArray.dll");
            //funcA();
        if (a == 2)
            LoadRun("/Users/slavick.snegirevicloud.com/Desktop/ПР5/lab_5/funcMatrix.dll");
            //funcM();
        if (a == 3)
            b = 0;
        else
            printf("\nВведите число в диапазоне от 1 до 3: ");
    }
    return 0;
}
