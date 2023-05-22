#include<stdio.h>

int main()
{
    int n, i, c = 0;
    int arr[2000];
    scanf("%d", &n);

    while (n > 0)
    {
        arr[c++] = 'A' + (n - 1) % 26;
        n = (n - 1) / 26;
    }

    for (c = c - 1; c >= 0; c--)
    {
        printf("%c", arr[c]);
    }

    return 0;
}
