#include <stdio.h>
int main() {
    int n, m;
    printf("Enter length of array 1: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter length of array 2: ");
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int max = (n > m) ? n : m;
    int c[max];
    for (int i = 0; i < max; i++) {
        if (i < n && i < m)
            c[i] = a[i] + b[i];
        else if (i < n)
            c[i] = a[i];
        else
            c[i] = b[i];
    }
    printf("Result array:\n");
    for (int i = 0; i < max; i++)
        printf("%d ", c[i]);
}
