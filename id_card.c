#include <stdio.h>
struct id_card
{
    char name[20];
    int roll;
    char course[10];
    char derpartment[10];
    long int phone;
} id1;
struct id_card id1 = {"Tanish", 11, "BCA", "CCT", 7888352812};
int printline(void)
{
     for (int i=1;i<=30;i++)
    {
        printf("-");
    }
    return 0;
}
int main(void)
{
    printline();
    printf("\nname: %s\nroll no: %d\ncourse: %s\ndepartment: %s\nphone: %ld\n", id1.name, id1.roll, id1.course, id1.derpartment, id1.phone);
    printline();
    return 0;
}