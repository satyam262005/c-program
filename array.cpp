// #include <stdio.h>
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }

//     int sum = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum = sum + arr[i][j];
//         }
    
//     }
//     printf("sum=%d", sum);
//     int max = arr [0][0];
//     return 0;
// }

// C program to illustrate how to create an array,
// initialize it, update and access elements
// #include<stdio.h>
// int main(){
// int arr1[4]={1,2,3,4};
// int arr2[4]={1,2,3,4};
//  int *p1=arr1;
//  int *p2=arr2;
//  int flag=1;
// for( int i=0;i<4;i++){
//     if(*( p1+i)=*(p2+i)){
//         flag=0;
//         break;
//     }
// }( flag==0)?printf("not equal"):printf("equal");
// }
// #include<stdio.h>
// int main (){
//     int arr[3][3] = {{1, 2, 3},  {4,5,6}, {7,8,9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main (){
    int arr[3][3] = {{1, 2, 3},  {4,5,6}, {7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >=0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}