#include <stdio.h>
#include "deposit.h"

int Chek(int v, int s) {
    if (v < 10000) {
        printf("\n ne verno ukazan deposit \n");
        return 1;
    }
    if (s <= 0 || s > 365) {
        printf("\n ne verno ukazan period \n");
        return 1;
    }
    return 0;
};

double Dohod(int v, int s) {
    if (v > 100000) {
        if (s <= 30)
            v = v - v / 10;
        if (s > 30 && s <= 120)
            v = 1.03 * v;
        if (s > 120 && s <= 240)
            v = 1.08 * v;
        if (s > 240 && s <= 365)
            v = 1.15 * v;
    }

    if (v <= 100000) {
        if (s <= 30)
            v = v - v / 10;
        if (s > 30 && s <= 120)
            v = 1.02 * v;
        if (s > 120 && s <= 240)
            v = 1.06 * v;
        if (s > 240 && s <= 365)
            v = 1.12 * v;
    }

    printf("\ndohod=%d\n", v);
    return v;
};
