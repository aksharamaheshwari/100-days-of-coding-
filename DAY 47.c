#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i, j, count = 0;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagram");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++) {
        for (j = 0; b[j] != '\0'; j++) {
            if (a[i] == b[j]) {
                count++;
                break;
            }
        }
    }

    if (count == strlen(a))
        printf("Anagram");
    else
        printf("Not anagram");

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (strlen(word) > strlen(longest))
                strcpy(longest, word);

            j = 0;
        }
        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}
