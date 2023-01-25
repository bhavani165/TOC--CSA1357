#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LEN 100

// Function to simulate the NFA
int simulateNFA(char* input) {
    int state = 0;
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        char c = input[i];
        if (state == 0) {
            if (c == 'b') {
                state = 1;
            } else {
                return 0;
            }
        } else {
            if (c == 'a' && i == len - 1) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    char input[MAX_STRING_LEN];
    printf("Enter a string: ");
    scanf("%s", input);
    if (simulateNFA(input)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}
