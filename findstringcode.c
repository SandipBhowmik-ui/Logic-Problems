#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main() {
    char input1[100];
    scanf("%[^\n]%*c", input1);

    int i, j, sum;
    int len = strlen(input1);
    char s[100][100];
    int count = 0;

    for (i = 0; i < len; i++) {
        input1[i] = toupper(input1[i]);
    }

    char *token = strtok(input1, " ");
    while (token != NULL) {
        strcpy(s[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    for (i = 0; i < count; i++) {
        sum = 0;
        if (strlen(s[i]) % 2 == 0) {
            for (j = 0; j < strlen(s[i]) / 2; j++) {
                sum += abs((int)s[i][j] - (int)s[i][strlen(s[i]) - j - 1]);
            }
        } else {
            for (j = 0; j < strlen(s[i]) / 2; j++) {
                sum += abs((int)s[i][j] - (int)s[i][strlen(s[i]) - j - 1]);
            }
            sum += (int)s[i][strlen(s[i]) / 2] - 64;
        }
        printf("%d", sum);
    }
    printf("\n");

    return 0;
}
