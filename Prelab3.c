#include <stdio.h>

int main(void) 

{
    int i = 1;
    while (i <= 50)
    {    
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("Fizz Buzz");
            
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", i);
        }
        if (i < 50)
        {
            printf(", ");
        }
        i++;
    }

}
