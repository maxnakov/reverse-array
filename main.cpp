#include <stdio.h>
int reverse(int* a, int b)
{
    for(int i=0;i<b;i++)
    {
        printf("%d\n", a[0-i]);
    }
}
int main()
{
    int a[10] = {24, 7, 54, 5, 36, 5, 56, 6, 89,10 };
    reverse(&a[9], 10);
    return 0;
}
