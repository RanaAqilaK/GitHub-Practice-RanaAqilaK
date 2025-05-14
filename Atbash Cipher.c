#include <stdio.h>
#include <string.h>
#include <ctype.h>

void atbash(char text[], char result[]) 
{
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            result[i] = 'Z' - (text[i] - 'A');
        } 
        else if (text[i] >= 'a' && text[i] <= 'z') {
            result[i] = 'z' - (text[i] - 'a');
        } 
        else if (text[i] >= '0' && text[i] <= '9') {
            result[i] = '9' - (text[i] - '0');
        }
        else {
            result[i] = text[i];
        }
    }
    result[i] = '\0';
}

int main() {
    char text[8192] = {'\0'};
    char result[8192] = {'\0'};

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    atbash(text, result);
    printf("Output: %s\n", result);

    return 0;
}
