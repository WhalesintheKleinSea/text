#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int randomNumber, guess, attempts = 0;
    srand(time(0)); // 设置随机数种子
    // 生成随机数（1到100之间）
    randomNumber = rand() % 100 + 1;
    printf("欢迎来到猜数字游戏！\n");
    // 开始猜数字
    do {
        printf("请输入一个猜测的数字（1到100之间）: ");
        scanf("%d", &guess);
        attempts++;
        // 检查猜测的数字和随机数字的关系
        if (guess > randomNumber) {
            printf("太大了！\n");
        }
        else if (guess < randomNumber) {
            printf("太小了！\n");
        }
        else {
            printf("恭喜你，猜对了！\n");
            printf("你一共猜了 %d 次。\n", attempts);
            break;
        }
    } while (1);
    return 0;
}