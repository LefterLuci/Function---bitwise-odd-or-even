#include <stdio.h>
#include <stdlib.h>

void evod(int num)
{

    if((num&1)==1)
    {
        printf("%d is odd", num);
    }
    else
    {
        printf("%d is even", num);
    }

}


int main()
{
    int num1;

    printf("Enter a number to bit check if it is even or odd:\n");
    scanf("%d",&num1);

    evod(num1);

        return 0;
}
