#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HASHSIZE 101

struct nlist {
    struct nlist *next;   // next entry in same bucket's chain
    char *name;
    char *defn;
};

static struct nlist *hashtab[HASHSIZE];   // array of "shelves"

unsigned hash(char *s) {
    unsigned hashval;
    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 * hashval;
    return hashval % HASHSIZE;
}

struct nlist *lookup(char *s) {
    struct nlist *np;
    for (np = hashtab[hash(s)]; np != NULL; np = np->next)
        if (strcmp(s, np->name) == 0)
            return np;
    return NULL;
}

struct nlist *install(char *name, char *defn) {
    struct nlist *np;
    unsigned hashval;

    if ((np = lookup(name)) == NULL) {
        np = (struct nlist *) malloc(sizeof(*np));
        if (np == NULL || (np->name = strdup(name)) == NULL)
            return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    } else {
        free((void *) np->defn);
    }
    if ((np->defn = strdup(defn)) == NULL)
        return NULL;
    return np;
}

int main(void) {
    install("PI", "3.14159");
    install("E", "2.71828");
    install("MAX", "100");

    struct nlist *found = lookup("PI");
    if (found != NULL)
        printf("PI is defined as %s\n", found->defn);

    found = lookup("MISSING");
    if (found == NULL)
        printf("MISSING is not defined\n");

    install("PI", "3.14159265");   // updates existing entry
    found = lookup("PI");
    printf("PI is now defined as %s\n", found->defn);

    return 0;
}
