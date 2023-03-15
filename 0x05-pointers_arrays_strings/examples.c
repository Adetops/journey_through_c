#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   printf("a: %p\np: %p\np2: %p\n", a, p, p2);
   printf("&a: %p\n&p: %p\n&p2: %p\n", &a, &p, &p2);
   p = a + 1;
   *p = 98;
   printf("a: %p\np: %p\np2: %p\n", a, p, p2);
   printf("&a: %p\n&p: %p\n&p2: %p\n", &a, &p, &p2);
   p2 = a + 3;
   *p2 = *p + 1337;
   printf("a: %p\np: %p\np2: %p\n", a, p, p2);
   printf("&a: %p\n&p: %p\n&p2: %p\n", &a, &p, &p2);
   return (0);
}
