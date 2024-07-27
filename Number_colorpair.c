#include <stdio.h>
#include "color_coding.h"
#include "test_color_coding.h"

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.major = 
        (enum majorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minor =
        (enum minorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}
