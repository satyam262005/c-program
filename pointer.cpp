//  #include<stdio.h>
//  int sum (int x,int y){
// return x+y;
//  }
//  int main(){
//     int x=26;
//     int y=1;
//     int data=sum (26,1);
//     printf("%d", data);
//  }

//  int sum (int *x,int *y){
//     *x=12;
//     *y=13;
//     int s=(*x)+(*y);
// return s;
//  }
//  int main (){
//     int x=1;
//     int y=26;
//     int data=sum (&x,&y);
//     printf("%d",data);
//     printf("%d",x+y);
//  }


// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p=arr;
//     printf("%d",*(p));
//      printf("%d",*(p+1));
//       printf("%d",*(p+2));
// }


//  #include<stdio.h>

//  int swape (int *x,int *y){
//     int temp =*x;
//   *x=*y;
//   *y=temp;
//  }
//  int main (){
//     int x=12;
//     int y=13;
//     printf("x=%d, y=%d\n",x,y);
//         printf("x=%d, y=%d",y,x);
//  }

#include<stdio.h>
int main(){
int arr1[4]={1,2,3,4};
int arr2[4]={1,2,3,4};
 int *p1=arr1;
 int *p2=arr2;
 int flag=1;
for( int i=0;i<4;i++){
    if(*( p1+i)=*(p2+i)){
        flag=0;
        break;
    }
}( flag==0)?printf("not equal"):printf("equal");
}