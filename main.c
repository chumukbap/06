#include <stdio.h>

// 함수 선언
int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    int a = 10, b = 5;

    printf("Sum = %d\n", sumTwo(a, b));
    printf("Square = %d\n", square(a));
    printf("Max = %d\n", get_max(a, b));

    return 0;
}

// 두 정수의 합
int sumTwo(int a, int b)
{
    return a + b;
}

// 정수의 제곱
int square(int n)
{
    return n * n;
}

// 두 정수 중 큰 수
int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
