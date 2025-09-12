#include <stdio.h>
#include <stdlib.h>

int main() {
    SetCurrentDirectoryA("C:\\");
    int a;
    printf("");
    scanf("%d", &a);
    char b;
    printf("+, -, *, / >>> ");
    scanf(" %c", &b);
    int c;
    printf("");
    scanf("%d", &c);
    printf("%d %c %d\n", a, b, c);
    int result;
    if (b == '+') {
        result = a + c;
    } else if (b == '-') {
        result = a - c;
    } else if (b == '*') {
        result = a * c;
    } else if (b == '/') {
        if (c != 0) {
            result = a / c;
        } else {
            printf("Error: Division by zero\n");
            system("pause");
            return 1;
        }
    } else {
        printf("Error: Unknown operation\n");
        system("pause");
        return 1;
    }
    printf("Result: %d\n", result);
    system("pause");
    return 0;
}