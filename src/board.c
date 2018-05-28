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

int convert(char i, int j, char i1, int j1) {
    int index_i, index_i1;
    static int index[4];
    char mass[8] = {'A','B','C','D','E','F','G','H'};
    for (int k = 0; k <= 7; k++) {
    if (i == mass[k]) {
        index_i = k;
        }
    if (i1 == mass[k]) {
        index_i1 = k;
        }
    }
    index[0] = index_i;
    index[1] = j - 1;
    index[2] = index_i1;
    index[3] = j1 - 1;
    return index;
}
