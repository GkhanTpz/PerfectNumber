#include <stdio.h>
#include <stdlib.h>


void PerfectNumber(int num);

int main()
{
    int num;
    printf("Please enter a integer: ");
    scanf("%d",&num);
    perfectNumber(num);

    return 0;
}

void PerfectNumber(int num)
{
    int result = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            result += i;
        }
        else
            continue;
    }
    if(num == result)
        printf("%d is Perfect Number.",num);
    else
        printf("%d is not Perfect Number.",num);
}
