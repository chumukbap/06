#include <stdio.h>

// 함수 선언
int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n, r, result;

    printf("Enter n: ");
    n = get_integer();

    printf("Enter r: ");
    r = get_integer();

    result = combination(n, r);

    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

// 정수 입력 함수
int get_integer(void)
{
    int num;
    scanf("%d", &num);
    return num;
}

// 팩토리얼 계산 함수
int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}

// 조합 계산 함수
int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
