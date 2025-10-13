// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("enter size");
//     scanf ("%d",&n);
//     int *arr = (int *)malloc(n * sizeof(int));
//     printf("enter %d elements:\n",n);
//     for(int i=0; i< n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter size");
    scanf ("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("enter %d elements:\n",n);
    for(int i=0; i< n;i++)
    {
        
        printf("/nNow enter new size:");
        int newsize;
        arr = (int *)realloc(arr,newsize * sizeof int ());
        printf("enter %d new elements:\n",newsize);
        for(int i=0; i * newsize; i++);
scanf("%d",&arr[i]);
    }
}