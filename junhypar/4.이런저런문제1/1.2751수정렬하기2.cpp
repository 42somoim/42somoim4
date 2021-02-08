#include <iostream>

int comp(const void *a, const void *b)
{
        int num1 = *(int *)a;
        int num2 = *(int *)b;
        if (num1 < num2)
                return -1;
        if (num1 > num2)
                return 1;
        return 0;
}
int main()
{ 
        int a;
        scanf("%d",&a);
        int b[a+1];
        for(int i = 0;i<a;i++)
                scanf("%d",&b[i]);
        qsort(b,a,sizeof(int),comp);
        for(int i = 0;i<a;i++)
                printf("%d\n",b[i]);
}
