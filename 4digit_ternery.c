#include <stdio.h>
int main()
{
    int a,b,c,d,r;
    printf ("enter the values");
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    r = (a>b) ? ((a>c)?a:c)?((a>d)?a:d) : ((b>c)?b:c)?((b>d)?b:d) : ((c>d)?c:d) : d;
    printf ("%d",r);
    return 0;
}