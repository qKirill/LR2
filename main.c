/* Лабораторна робота №2 */

#include <stdio.h>
#include <math.h>
#include <string.h>

/* Пункт 3: глобальні змінні */
int group_number = 79;
int variant_number = 3;

/* Пункт 4: константа кількості літер повного імені  */
#define NAME_NUMBER 6

/*  Пункт 5: функція check_sqrt */
void check_sqrt(int group_num) {
    double sq = sqrt((double) group_num);
    char name[] = "Кирило";
    size_t len = strlen(name); 

    if (sq > (double) len) {
        double sum = sq + (double) len;
        printf("Результат: %.2fs\n", sum);
    } else if (sq < (double) len) {
        double product = sq * (double) len;
        printf("Результат: %.2fn\n", product);
    } else {
        printf("Результат: сума = %.2f, добуток = %.2f\n",
               sq + (double) len, sq * (double) len);
    }
}

int main(void) {

    /* Пункт 2: синус або косинус */
    printf("Мій номер за журналом %d. Його Cos = %f\n",
           variant_number, cos(variant_number));

    /* Пункт 3a: локальна змінна-рядок name */
    char name[] = "Кирило";
    printf("Група: %d, Варіант: %d, Ім'я: %s\n",
           group_number, variant_number, name);

    /* Пункт 3b-3c: добуток і явне приведення типів */
    double product = variant_number * 3.14;
    int converted = (int) product;
    printf("Добуток = %.2f, Конвертований = %d\n", product, converted);

    /* Пункт 4: цикл із константою NAME_NUMBER */
    int counter = variant_number + NAME_NUMBER;
    long sum = 0;
    int c = counter;
    while (c >= 1) {
        sum += c;
        c--;
    }
    printf("Кількість літер у повному імені (NAME_NUMBER): %d\n", NAME_NUMBER);
    printf("Номер за журналом: %d\n", variant_number);
    printf("Сума усіх чисел від 1 до суми %d: %ld\n", counter, sum);

    /* Пункт 5: виклик check_sqrt */
    check_sqrt(group_number);

    /* Пункт 6: switch за номером групи */
    int input_group;
    printf("Введіть номер групи: ");
    scanf("%d", &input_group);

    switch (input_group) {
        case 92: case 93: case 94: case 95:
        case 96: case 97: case 98: case 99:
            printf("Група %d навчається на I курсі.\n", input_group);
            break;
        case 87: case 88: case 89: case 90: case 91:
            printf("Група %d навчається на II курсі.\n", input_group);
            break;
        case 81: case 82: case 83: case 84: case 85: case 86:
            printf("Група %d навчається на III курсі.\n", input_group);
            break;
        case 75: case 76: case 77: case 78: case 79: case 80:
            printf("Група %d навчається на IV курсі.\n", input_group);
            break;
        default:
            printf("Такої групи не знайдено серед 25 груп коледжу.\n");
            break;
    }

    return 0;
}