#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int N; 
    long long total_pengeluaran = 0;
    long long max_pengeluaran = 0; 
    int count = 0; 
    
    
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1; 
    }

    
    long long pengeluaran[N];
    for (int i = 0; i < N; i++) {
        if (scanf("%lld", &pengeluaran[i]) != 1) {
            return 1; 
        }
        
        total_pengeluaran += pengeluaran[i];
        if (pengeluaran[i] > max_pengeluaran) {
            max_pengeluaran = pengeluaran[i];
        }
    }

    long long total_max_pengeluaran = 0;
    for (int i = 0; i < N; i++) {
        if (pengeluaran[i] == max_pengeluaran) {
            count++;
            total_max_pengeluaran += pengeluaran[i];
        }
    }
     double percentage = 0.0;
    if (total_pengeluaran > 0) {
    percentage = ((double)total_max_pengeluaran / total_pengeluaran) * 100.0;
    }

    printf("Max : %lld\n", max_pengeluaran);
    printf("Count : %d\n", count);
    printf("days : ");
    int first_day = 1; 
    for (int i = 0; i < N; i++) {
        if (pengeluaran[i] == max_pengeluaran) {
            if (!first_day) {
                printf(" ");
            }
            printf("%d", i + 1); 
            first_day = 0;
        }
    }
    printf("\n");
    printf("Percentage : %.3f%%\n", percentage);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}