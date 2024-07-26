#include <stdio.h>
#include "color_coding.h"

void printColorCodingManual() {
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[16];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", i, colorPairNames);
    }
}

int main() {
    printColorCodingManual();
    return 0;
}
