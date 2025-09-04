#include<stdio.h> 
int main(){
int n;
printf( "enter the number:");
scanf ( "%d", &n);;
int pro=1;
while (n>0)
{ 
    int digit=n % 10;
    pro *=digit;
    n=n/10;
}
printf ("\n%d",pro);
return 0;
}