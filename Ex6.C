#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("%d e multiplo de 5.\n", n);
    } else {
        printf("%d nao e multiplo de 5.\n", n);
    }

    return 0;
}
