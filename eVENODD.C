#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (num%2 ==0)
    {printf("%d num is even \n",num);

    }
    else 
    {
        printf("%d num is odd \n",num);
    }
    return 0;
}

