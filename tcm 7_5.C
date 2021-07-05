#include <stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    scanf_s("%d", &n);
    int c = 1;
    for (i = 1; i <= n; i++)
    {
       c = c * i;
    }
    printf("%d\n", c);
       return 0;
}
  
