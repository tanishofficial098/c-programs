#include <stdio.h>
int n;
struct class
{
    char name[20];
    int roll;
    char email[35];
    long int phone;
    int age;
};
int printline(void)
{
    int x;
    for (x = 0; x < 10; x++)
    {
        printf("-----");
    }
    printf("\n");
    return 0;
}
int main(void)
{
    int printline(void);
    struct class student[n];
    printf("enter the number of student in your class:\n");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("\nentr the value for student %d: ", i);
        printf("\n");
        printf("name: ");
        scanf("%s", student[i].name);
        printf("\nroll number: ");
        scanf("%d", &student[i].roll);
        printf("\nemail: ");
        scanf("%s", student[i].email);
        printf("\nphone number: ");
        scanf("%ld", &student[i].phone);
        printf("\nage: ");
        scanf("%d", &student[i].age);
    }
    printf("\n\n\n");
    printline();
    for (int i = 1; i <= n; i++)
    {
        printf("details of student %d are:\n", i);
        printf("name: %s\nroll number: %d\nemail: %s\nphone number: %ld\nage: %d\n",
               student[i].name, student[i].roll, student[i].email, student[i].phone, student[i].age);
        printline();
    }
    printline();
    printf("\n\n");
    return 0;
}