#include<stdio.h>
/**
 *  main - Aprogram that prints the size of various computer types
 *Return 0 (Succes)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(b));
rintf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(c));
rintf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
rintf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
