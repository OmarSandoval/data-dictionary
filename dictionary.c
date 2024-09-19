#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryName) {
    long mainheader = EMPTY_POINTER;

    printf("Initializing Data Dictionary...\n");
    
    FILE *dictionary = fopen(dictionaryName, "w+");
    fwrite(&mainheader, sizeof(mainheader), 1, dictionary);
    return EXIT_SUCCESS;
}