#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int randomNumber, guess, attempts = 0;
    srand(time(0)); // �������������
    // �����������1��100֮�䣩
    randomNumber = rand() % 100 + 1;
    printf("��ӭ������������Ϸ��\n");
    // ��ʼ������
    do {
        printf("������һ���²�����֣�1��100֮�䣩: ");
        scanf("%d", &guess);
        attempts++;
        // ���²�����ֺ�������ֵĹ�ϵ
        if (guess > randomNumber) {
            printf("̫���ˣ�\n");
        }
        else if (guess < randomNumber) {
            printf("̫С�ˣ�\n");
        }
        else {
            printf("��ϲ�㣬�¶��ˣ�\n");
            printf("��һ������ %d �Ρ�\n", attempts);
            break;
        }
    } while (1);
    return 0;
}