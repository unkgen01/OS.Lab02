#include <stdio.h>
#include <string.h>

void convert(long long x, int s, int t) {
    if (s < 2 || s > 10 || t < 2 || t > 10){
        printf("cannot convert!\n");
        return;
    }
    char xStr[64];
    sprintf(xStr, "%lld", x);
    long long dec = 0;
    for (int i = 0; xStr[i] != '\0'; i++){
        int digit;
        sscanf(&xStr[i], "%1d", &digit);
        if (digit >= s) {
            printf("cannot convert!\n");
            return;
        }
        dec = dec * s + digit;
    }
    if (dec == 0){
        printf("0\n");
        return;
    }
    char res[64] = "", temp[8];
    while (dec > 0) {
        int digit = dec % t;
        sprintf(temp, "%d", digit);
        char n_res[64];
        sprintf(n_res, "%s%s", temp, res);
        strcpy(res, n_res);
        dec /= t;
    }
    printf("%s\n", res);
}

int main(void) {
    long long x;
    int s, t;
    scanf("%lld %d %d", &x, &s, &t);
    convert(x, s, t);
    return 0;
}
