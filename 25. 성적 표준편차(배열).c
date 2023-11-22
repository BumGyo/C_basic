#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10

// ��� ������ ���������� ����
double average = 0;

// ����� ���ϴ� �Լ� ����
double get_average(int score[]) {
    // �� ������ �����ϴ� ���� ����
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += score[i];
    }
    // ���������� ����� ���� �ٲ��ְ�
    average = sum / SIZE;
    // �������ش�.
    return average;
}

// ǥ�������� ���ϴ� �Լ� ����
double get_stdev(int score[]) {
    // �л��� �����ϴ� ���� ����
    double var = 0;
    // �� �ε����� ������ ������� ���� �� ����
    for (int i = 0; i < SIZE; i++) {
        var += ((score[i] - average) * (score[i] - average));
    }
    // �� ��ü ���� �ε��� ���� ������
    var = var / SIZE;
    // ��Ʈ�� ����� ǥ�������� �ǹǷ� �� �� ����
    return sqrt(var);
}

int main() {
    int score[SIZE] = { 0, };

    // ���� �Է� �ޱ�
    for (int i = 0; i < SIZE; i++) {
        printf("%d��° �����͸� �Է��Ͻÿ� : ", i + 1);
        scanf("%d", &score[i]);
    }

    printf("��հ��� %lf\n", get_average(score));
    printf("ǥ���������� %lf\n", get_stdev(score));

    return 0;
}
