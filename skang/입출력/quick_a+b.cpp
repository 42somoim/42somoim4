#include <stdio.h>

int main()
{
    int a;
    int b;
    int count;

    scanf("%d", &count);
    for (int i=0;i <count;i++)
    {
        scanf("%d %d",&a, &b);
        printf("%d\n", a+b);
    }
}