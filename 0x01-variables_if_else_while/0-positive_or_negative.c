#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
prinf("is positive\n");
}

else if (n < 0)
{
printf("is negative\n");
}
else
{
printf("is zero\n");
}
/* your code goes there */
return (0);
}

