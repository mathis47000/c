#ifndef TYPE_H
#define TYPE_H

#include <string.h>

typedef struct{
    int id;
    char name[20];
    int damage[18];
}Type;

extern Type type[18];

Type getType(int id);

Type getTypeByName(char *name);

#endif

