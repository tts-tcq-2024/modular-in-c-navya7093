#include <stdio.h>
#include "color_coding.h"
#include <assert.h>
#include "test_color_coding.h"

void testNumberToPair(int pairNumber, enum majorColor expectedMajor, enum minorColor expectedMinor) {
    ColorPair colorPair = getColorFromPairNumber(pairNumber);
    char colorPairNames[16];
    colorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.major == expectedMajor);
    assert(colorPair.minor == expectedMinor);
}

void testPairToNumber(enum majorColor major, enum minorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.major = major;
    colorPair.minor = minor;
    int pairNumber = getPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("\nColor Coding Reference Manual:\n");
    printColorCodingReferenceManual();

    return 0;
}
