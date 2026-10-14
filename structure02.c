#include <stdio.h>
struct class
{
    char name[20];
    int roll;
    int pc_no;
    char gender[7];
    int age;
} c1, c2;
struct class c1 = {"tanish", 11, 23, "male", 19};
int main(void)
{
    printf("name : %s\nroll : %d\npc : %d\ngender : %s\nage : %d\n\n", c1.name, c1.roll, c1.pc_no, c1.gender, c1.age);
    return 0;
}