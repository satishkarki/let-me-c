#include <stdio.h>
#include <string.h>

struct key {
    char *word;
    int count;
};

struct key *binsearch(char *word, struct key *tab, int n) {
    int cond;
    struct key *low = tab;
    struct key *high = tab + n - 1;
    struct key *mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        cond = strcmp(word, mid->word);
        if (cond < 0)
            high = mid - 1;
        else if (cond > 0)
            low = mid + 1;
        else
            return mid;      // return pointer to the matching struct
    }
    return NULL;   // not found - NULL pointer signals failure
}

int main(void) {
    struct key keytab[] = {
        {"auto", 0},
        {"break", 0},
        {"case", 0},
        {"char", 0},
        {"if", 0},
        {"while", 0}
    };
    int n = sizeof(keytab) / sizeof(keytab[0]);
    char *target = "if";

    struct key *result = binsearch(target, keytab, n);

    if (result == NULL)
        printf("Keyword \"%s\" not found\n", target);
    else
        printf("Keyword \"%s\" found, count = %d\n", result->word, result->count);

    return 0;
}