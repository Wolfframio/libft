#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c) {
    int count = 0;
    int i = 0;
    int j = 0;
    char **result = NULL;

    while (s[i] != '\0') {
        if (s[i] == c) {
            count++;
        }
        i++;
    }
    count++;

    result = (char **)malloc(sizeof(char *) * count);
    if (!result) {
        return NULL;
    }

    i = 0;
    while (i < count - 1) {
        int k = 0;
        result[i] = (char *)malloc(sizeof(char) * (strlen(s) + 1));
        if (!result[i]) {
            return NULL;
        }
        while (s[j] != c && s[j] != '\0') {
            result[i][k] = s[j];
            j++;
            k++;
        }
        result[i][k] = '\0';
        j++;
        i++;
    }
    //result[i] = NULL;

    return result;
}

int main() {
    char str[] = " ";
    char **tokens = ft_split(str, ',');
    int i = 0;
    while (tokens[i] != NULL) {
        printf("%s\n", tokens[i]);
        free(tokens[i]);
        i++;
    }
    free(tokens);
    return 0;
}