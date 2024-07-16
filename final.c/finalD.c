#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char words[100][101];
    for(int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(strcmp(words[j], words[j + 1]) > 0) {
                char temp[101];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
