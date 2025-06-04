#include <stdio.h>

int encodestring(const char* input) {
    int sum = 0;
    int referenceTable[26] = {1, 0, 3, 4, 5, 6, 7, 8, 9, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 15, 0, 0, 0};
    // Reference table mapping characters to numbers

    for (int i = 0; input[i] != '\0'; i++) {
        char currentChar = input[i];
        if (currentChar >= 'a' && currentChar <= 'z') {
            int index = currentChar - 'a';
            sum += referenceTable[index];
        }
        else if (currentChar >= 'A' && currentChar <= 'Z') {
            sum += 0;
        }
    }

    return sum;
}

int main() {
    char input[100];
    printf("Enter the string: ");
    scanf("%s", input);

    int result = encodestring(input);
    printf("Output: %d\n", result);

    return 0;
}
