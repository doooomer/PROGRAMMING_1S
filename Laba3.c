#include <stdio.h>
 
int main() {
    int oct1;
    printf("Введите число в 10-ой системе счисления: ");
    scanf("%d", &oct1);
 
    int dec1 = oct1;
    printf("Введённое число, переведённое в 10-ую систему счисления: %d \n", dec1);
 
    int bitwise_left1 = oct1 << 1;
    printf("Введённое число, переведённое в 10-ую систему счисления, сдвинутое влево на 1 бит: %d \n", bitwise_left1);
 
    int not_oct1 = ~oct1;
    printf("Введённое число после применения к нему битовой операции отрицания: %d \n", not_oct1);
 
    int oct2;
    printf("Введите число в 8-ой системе счисления: ");
    scanf("%o", &oct2);
 
    int bitwise_or = (oct2 | dec1);
    printf("Результат применения операции побитового ИЛИ: %d", bitwise_or);
 
    return 0;
}