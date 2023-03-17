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
printf("%dis positive\n", n);
}
else if (n == 0)
{
printf("%dis zero\n", n);
}
else
{
printf("%dis negitive\n", n);
}
return (0);
}
