#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N; 
    int a, b;

    
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Input tidak valid, masukkan bilangan bulat positif.\n");
        return 0;
    }
    for (a = 1; a <= N - 1; a++) {   
    for (b = 1; b <= N - 1 - a; b++) {
            printf(" ");
        }
        for (b = 1; b <= (2 * a - 1); b++) {
            printf("*");
        }
        printf("\n");
    }

   {
        for (b = 1; b <= N - 2; b++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}