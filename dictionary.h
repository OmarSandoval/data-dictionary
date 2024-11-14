#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAIN_ENTITY_POINTER
#define EMPTY_POINTER -1
#define DATA_BLOCK_SIZE 50

typedef struct Entity
{
    char name[DATA_BLOCK_SIZE];
    long dataPointer;
    long attributesPointer;
    long nextEntity;
}ENTITY;

FILE* initializeDataDictionary(const char *dictionaryName);

int appendEntity(FILE* dataDictionary, ENTITY newEntity);
void reorderEntities(FILE* dataDictionary, ENTITY newEntity, long newEntityDirection);

#endif