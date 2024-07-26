#include <stdio.h>
#include <assert.h>
#include "color_coding.h"

#define MAX_COLORPAIR_NAME_CHARS 16

void checkColorPair(const ColorPair* colorPair, enum MajorColor expectedMajor, enum MinorColor expectedMinor) {
    assert(colorPair->majorColor == expectedMajor);
    assert(colorPair->minorColor == expectedMinor);
}

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    checkColorPair(&colorPair, expectedMajor, expectedMinor);
}

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair = {major, minor};
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void runTests() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
}

int main() {
    runTests();
    return 0;
}
