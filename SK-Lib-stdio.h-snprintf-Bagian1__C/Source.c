#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char buffer[100];
    int cx;

    cx = snprintf(buffer, 100, "The half of %d is %d", 60, 60 / 2);

    if (cx >= 0 && cx < 100) {
        snprintf(buffer + cx, 100 - cx, ", and the half of that is %d.", 60 / 2 / 2);
    }

    puts(buffer);

    _getch();
    return 0;
}