#include <stdio.h>
#include <string.h>
struct key {
    char *word;
    int count;
};
int binarySearch(struct key tab[], int n, char *word) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int cond = strcmp(word, tab[mid].word);

        // Check if word is present at mid
        if (cond == 0)
            return mid;
        // If word comes AFTER tab[mid].word alphabetically, ignore left half
        if (cond > 0)
            low = mid + 1;
        // If word comes BEFORE tab[mid].word alphabetically, ignore right half
        else
            high = mid - 1;
    }
    // If we reach here, then word was not present
    return -1;
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
    char *word = "if";
    int n = sizeof(keytab) / sizeof(keytab[0]);

    int result = binarySearch(keytab, n, word);

    if (result == -1)
        printf("Keyword is not present in the table\n");
    else
        printf("Keyword \"%s\" is present at index %d\n", word, result);

    return 0;
}
// Output: Keyword "if" is present at index 4