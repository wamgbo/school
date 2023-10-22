#include <stdio.h>

int main() {
    double a, b, c;

    // 假设 a、b 和 c 为三个浮点数

    // 使用条件运算符找出最大值
    double max_value = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("最大值是: %lf\n", max_value);

    return 0;
}
