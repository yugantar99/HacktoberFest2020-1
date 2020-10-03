#include<stdio.h>
int main()
{
    int N,a;
    printf("enter the size of array");
    scanf("%d",&N);
    int arr[N];
    for(a=0;a<N;a++)
    {
        printf("enter the number");
        scanf("%d",&arr[a]);
    }printf("\nArray in reverse order: ");
    for(a=N-1; a>=0; a--)
    {
        printf("%d\t", arr[a]);
    }

    return 0;
}
