 #include<stdio.h>
//  int sum (int x,int y){
// return x+y;
//  }
//  int main(){
//     int x=26;
//     int y=1;
//     int data=sum (26,1);
//     printf("%d", data);
//  }

 int sum (int *x,int *y){
    *x=12;
    *y=13;
    int s=(*x)+(*y);
return s;
 }
 int main (){
    int x=1;
    int y=26;
    int data=sum (&x,&y);
    printf("%d",data);
    printf("%d",x+y);
 }


