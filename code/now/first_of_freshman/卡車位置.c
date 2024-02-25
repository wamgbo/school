#include <stdio.h>

int main() {
    int time, w = 10, time_difference, command, direction = 0, x = 0, y = 0, distance, current_time = 0;
    while (1) {
        scanf("%d %d", &time, &command);
        time_difference = time - current_time; // 計算相差時間 
        current_time = time;  // 紀錄目前時間 
        distance = time_difference * w;
        if (direction == 0) {
            y += distance;
        }
        else if (direction == 1) {
            x -= distance;
        }
        else if (direction == 2) {
            y -= distance;
        }
        else if (direction == 3) {
            x += distance;
        }

        if (command == 1) {
            direction = (direction + 1) % 4;
        }
        else if (command == 2) {
            direction = (direction + 3) % 4;
        }
        else if (command == 3) {
            break;
        }
    }
    printf("(%d,%d)\n", x, y);
    return 0;
}
