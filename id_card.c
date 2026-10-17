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
int main(void)
{
    printf("name: %s\nroll no: %d\ncourse: %s\ndepartment: %s\nphone: %ld\n\n", id1.name, id1.roll, id1.course, id1.derpartment, id1.phone);
    return 0;
}