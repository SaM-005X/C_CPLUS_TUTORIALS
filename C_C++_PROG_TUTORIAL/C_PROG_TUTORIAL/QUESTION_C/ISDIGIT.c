#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isDigitString(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a value: ");
    scanf("%s", str);

    if (isDigitString(str)) {
        printf("'%s' is a digit.\n", str);
    } else {
        printf("'%s' is not a digit.\n", str);
    }

    return 0;
}
