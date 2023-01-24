#include <stdio.h>
void main()
{
    char bellch, vtach, ch;
    bellch = '\x7';
    vtach = '\xb';
    ch = '\x41';
    printf("%c%c%c", bellch, vtach, ch);
}
