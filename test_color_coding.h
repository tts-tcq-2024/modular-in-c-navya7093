#ifndef TEST_COLOR_CODING_H
#define TEST_COLOR_CODING_H
#include "ColorPair.h"

void colorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair getColorFromPairNumber(int pairNumber);
int getPairNumberFromColor(const ColorPair* colorPair);
void printColorCodingReferenceManual();

#endif // TEST_COLOR_CODING_H
