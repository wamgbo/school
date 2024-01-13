#include <stdio.h>
#include <string.h>
#include <math.h>

void fun(char words[]) {
    int i = 0, sum1 = 0, sum2 = 0;

    while (words[i] != '\0') {
        int value = words[i] - '0';
        if (i % 2 == 0) {
            sum1 += value; // Sum of digits at even positions
        } else {
            sum2 += value; // Sum of digits at odd positions
        }
        i++;
    }
    printf("%d",abs(sum1-sum2));
}

int main() {
    char words[1001] = {0};

    while (strcmp(fgets(words, sizeof(words), stdin), "0\n") != 0) {
        words[strlen(words)-1]='\0';
        fun(words); // Call the function to calculate and print the sum at odd positions
    }
    
    return 0;
}
