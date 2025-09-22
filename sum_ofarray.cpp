
// #include <stdio.h>
// int main()
// {
//     int a[5] = {-4, -1, -2, -7, -3};
//     int sum_a[3];
//     for (int i = 0, j = 1, k = 2; i < 3, j < 4, k < 5; i++, j++, k++)
//     {

//         sum_a[i] = a[i] + a[j] + a[k];
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n", sum_a[i]);
//     }
//     int great = sum_a[0];
//     for (int i = 1; i < 3; i++)
//     {
//         if (great < sum_a[i])
//             great = sum_a[i];
//     }  
//     printf("%d", great);
//     return 0;
// }


#include<stdio.h>
int bsearch (){
    int arr[7]={1,2,3,4,5,6,7}
  int target =4;
  int s=0;
  int e=7;
while (s<=e)
{
    int mid =(s+e)/2;
    if( arr[mid]=target){
        return mid;
    }
else if (arr[mid]<target)
{
    s=mid+1;
}
else {
    end=mid-1;
}
}
 }  
 
