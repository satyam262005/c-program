#include<stdio.h>
int main(){
for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (3 - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
       printf("\n");
    }
    for (int i = 0; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
           printf("*");
        }
        for (int j = 1; j <= 2 * (0 - i); j++) {
          printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
       printf("\n");
    }
};
