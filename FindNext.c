#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* FindNext(char* input1) {
    char arr[] = "QWERTYUIOP[]";
    char arr1[] = "ASDFGHJKL;'";
    char arr2[] = "ZXCVBNM,./";
    int a = strlen(arr);
    int b = strlen(arr1);
    int c = strlen(arr2);
    int i, j;

    for (i = 0; input1[i] != '\0'; i++) {
        int flag = 0;

        for (j = 0; j < a; j++) {
            if (toupper(input1[i]) == arr[j]) {
                flag = 1;

                if (input1[i] >= 97 && input1[i] <= 122) {
                    input1[i] = tolower(arr[j + 2]);
                }
                else {
                    if (j - 2 < 0) {
                        input1[i] = arr[0];
                    }
                    else {
                        input1[i] = arr[j - 2];
                    }
                }

                break;
            }
        }

        if (flag != 1) {
            for (j = 0; j < b; j++) {
                if (toupper(input1[i]) == arr1[j]) {
                    flag = 1;

                    if (input1[i] >= 97 && input1[i] <= 122) {
                        input1[i] = tolower(arr1[j + 2]);
                    }
                    else {
                        if (j - 2 < 0) {
                            input1[i] = arr1[0];
                        }
                        else {
                            input1[i] = arr1[j - 2];
                        }
                    }

                    break;
                }
            }
        }

        if (flag != 1) {
            for (j = 0; j < c; j++) {
                if (toupper(input1[i]) == arr2[j]) {
                    flag = 1;

                    if (input1[i] >= 97 && input1[i] <= 122) {
                        input1[i] = tolower(arr2[j + 2]);
                    }
                    else {
                        if (j - 2 < 0) {
                            input1[i] = arr2[0];
                        }
                        else {
                            input1[i] = arr2[j - 2];
                        }
                    }

                    break;
                }
            }
        }
    }

    return input1;
}

int main() {
    char input[100];
    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the newline character

    char* output = FindNext(input);

    printf("Output: %s\n", output);

    return 0;
}
