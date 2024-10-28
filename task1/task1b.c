#include <stdio.h>

int main() {
    int N, i = 1, j;

    printf("Enter the integer N\n");
    scanf("%d", &N);

    while (i <= N) {
        j = 1;
        while (j <= N - i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

