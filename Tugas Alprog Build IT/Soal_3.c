#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 10005
#define MAX_WORDS 1000

int is_word_present(char *word, char **unique_words, int unique_count) {
    for (int i = 0; i < unique_count; i++) {
        
        if (strcmp(word, unique_words[i]) == 0) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    
    char input_string[MAX_LEN];
    char *unique_words[MAX_WORDS];
    int unique_count = 0; 
    char *token;
    
   
    if (fgets(input_string, MAX_LEN, stdin) == NULL) {
        return 1; 
    }

    input_string[strcspn(input_string, "\n")] = 0;
    if (input_string[0] == '\0') {
        return 0;
    }
    
    token = strtok(input_string, " ");

    while (token != NULL) {
        
        if (!is_word_present(token, unique_words, unique_count)) {
            
            if (unique_count > 0) {
                printf(" "); 
            }
            printf("%s", token);

            
            if (unique_count < MAX_WORDS) {
                 unique_words[unique_count] = token;
                 unique_count++;
            }
        }
        
        token = strtok(NULL, " ");
    }
    
    printf("\n"); 
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}