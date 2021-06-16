/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include <stdio.h>

long long int num_ways(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", num_ways(n));

    return 0;
}

long long int num_ways(int n) {
    long long int fib1 = 1;
    long long int fib2 = 2;
    long long int temp;
    int i = 2;
    if(n == 1)
        return 1;
    if(n < 1)
        return 0;
    while(i < n)
    {
        temp = fib1 + fib2;
        fib1 = fib2;
        fib2 = temp;
        i++;
    }
    return fib2;
}
