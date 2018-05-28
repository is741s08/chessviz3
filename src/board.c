#include <stdio.h>

int coordinates(char i, int j, char i1, int j1) {
    int g = 0;
    char mass[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int k = 0; k <= 7; k++) {
        if (i == mass[k]) {
            g++;
        }
        if (i1 == mass[k]) {
            g++;
        }
        if (j == k + 1) {
            g++;
        }
        if (j1 == k + 1) {
            g++;
        }
    }

    if (g != 4) {
        printf("Ошибка ввода данных\n");
        return -1;
    }
    return 0;
}
