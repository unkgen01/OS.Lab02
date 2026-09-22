#include <stdio.h>
#include <string.h>

int count(char *str, char c) {
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch == c) n++;
    }
    return n;
}

void countAll(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        int n = count(str, c);
        printf("%c:%d", c, n);
        if (i < len - 1) printf(", ");
    }
    printf("\n");
}

int main(void) {
    char str[256];
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    countAll(str);
    return 0;
}
