#include <stdio.h>
#include <stdlib.h>

int main()
{   int x;
    printf("Enter a number \n");
     scanf("%d",&x);
     if(x%2==0)
        printf("Number you entered is even");
     else
        printf("Number you entered is odd");

    return 0;
}
