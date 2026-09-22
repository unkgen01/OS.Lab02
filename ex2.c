#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256], c;
    int i = 0;
    while (i < 255) {
        c = getchar();
        if (c == '.' || c == '\n' || c == EOF)
            break;
        str[i++] = c;
    }
    str[i] = '\0';
    printf("\"");
    for (int j = i - 1; j >= 0; j--) {
        putchar(str[j]);
    }
    printf("\"\n");
    return 0;
}
