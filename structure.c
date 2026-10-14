#include <stdio.h>
struct cls
{
    char name[20];
    int roll_no;
} c1;
int main(void)
{
    struct cls c1 = {"tanish", 11};
    printf("name: %s\nroll: %d\n\n", c1.name, c1.roll_no);
    return 0;
}