//
// ������������ ������ �1 "�������� ���������".
// ������� ������ �30: "����� ������� ������������ �� ������ ��� ������. ������������ ������� ������."
// ������������ 10.12.2023
// plunkzy education (by Voppor41)
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float a, b, c, p, s;

    printf("������� ����� ������ ������������.\n");
    printf("����� ������ �������: ");
    scanf("%f", &a);
    printf("����� ������ �������: ");
    scanf("%f", &b);
    printf("����� ������� �������: ");
    scanf("%f", &c);

    p = (a + b + c) / 2;
    s = powf(p * (p - a) * (p - b) * (p - c), 1.0 / 2.0);

    printf("������� ������������ = %f", s);

    return 0;
}