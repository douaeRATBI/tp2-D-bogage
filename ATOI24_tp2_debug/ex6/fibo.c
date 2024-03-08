#include <stdio.h>

unsigned long long fibonacci(unsigned long long n) {
    unsigned long long a = 0, b = 1, temp;
    if (n == 0)
        return a;
    for (unsigned long long i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    unsigned long long n = 50;

    printf("Calcul du nombre de Fibonacci pour n = %llu\n", n);
    printf("Le résultat est : %llu\n", fibonacci(n));

    return 0;
}
