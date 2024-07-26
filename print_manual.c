#include <stdio.h>
#include "color_coding.h"
#include "test_color_coding.h"

void printColorCodingReferenceManual() {
    char buffer[16];
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = getColorFromPairNumber(pairNumber);
        colorPairToString(&colorPair, buffer);
        printf("%2d: %s\n", pairNumber, buffer);
    }
}
