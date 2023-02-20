
#include<stdio.h>
 main()
{
    int i, n, a, b, ele;
   a = b = 0;
   i=1;
   scanf("%d", &n);
   printf("\n");
   while(i<=n)
   {
    scanf("%d", &ele);
    if (ele> a)
    {
    b = a;
    a = ele;
    }
    else if (ele > b)
    b = ele;
    i++;
   }
   printf(" %d   is the second highest among above 5 numbers",b);
}


