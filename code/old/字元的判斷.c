#include <stdio.h>

int main() {
    char input, word[100];
    int i = 0;
    printf("請輸入一個字元:");
    while (scanf("%c", &input) != EOF) {
        getchar();
        printf("請輸入一個字元:");
        word[i] = input;
        i += 1;
    }
    for (int j = 0; j < i; j++) {
        if (word[j] >= 'a' && word[j] <= 'z') {
            printf("小寫英文字母\n");
        }
        else if (word[j] >= '0' && word[j] <= '9') {
            printf("阿拉伯數字\n");
        }
        else if (word[j] >= 'A' && word[j] <= 'Z') {
            printf("大寫英文字母\n");
        }
        else {
            printf("其他符號\n");
        }
    }

    return 0;
}
