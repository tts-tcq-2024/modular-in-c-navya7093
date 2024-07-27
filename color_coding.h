#ifndef COLOR_CODING_H
#define COLOR_CODING_H

enum majorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum minorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* majorColorNames[];
extern const char* minorColorNames[];
extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum majorColor major;
    enum minorColor minor;
} ColorPair;

#endif // COLOR_CODING_H
