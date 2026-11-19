#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    d.i = 15;

    printf("my name is Nikunj Rathore solve question 25\n ");
    printf("Integer: %d", d.i);

    return 0;
}
