#include <stdio.h>
#include <assert.h>
#include "color_coding.h"
#include "test_color_coding.h"

const char* majorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* minorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(majorColorNames) / sizeof(majorColorNames[0]);
int numberOfMinorColors = sizeof(minorColorNames) / sizeof(minorColorNames[0]);

int getPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->major * numberOfMinorColors +
            colorPair->minor + 1;
}

void colorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        majorColorNames[colorPair->major],
        minorColorNames[colorPair->minor]);
}
