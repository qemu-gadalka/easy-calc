#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, c;
    char op;

    printf(" » ");
    if (scanf("%d %c %d", &a, &op, &c) != 3) {
        printf("! Invalid input\n");
        return 1;
    }

    int result;
    if (op == '+') {
        result = a + c;
    } else if (op == '-') {
        result = a - c;
    } else if (op == '*') {
        result = a * c;
    } else if (op == '/') {
        if (c != 0) {
            result = a / c;
        } else {
            printf("! Division by zero\n");
            return 1;
        }
    } else {
        printf("! Unknown Operation\n");
        return 1;
    }

    printf("! Result → %d\n", result);
    return 0;
}