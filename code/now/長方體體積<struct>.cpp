#include <stdio.h>

typedef struct rectangle
{
    int h;
    int w;
    int l;
} hwl;
int volume(hwl *data)
{
    int sum = data->h * data->l * data->w;
    return sum;
}
int main()
{
    hwl data = {10, 5, 2};
    printf("%d\n", volume(&data));
}