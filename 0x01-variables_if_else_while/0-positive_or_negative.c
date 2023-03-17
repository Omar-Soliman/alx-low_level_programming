#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main-determines if a number is positive, negtive or zero
*
*Return:Alaways0(Success)
*
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negitive\n", n);
}
return (0);
}
