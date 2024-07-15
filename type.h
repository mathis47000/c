#ifndef TYPE_H
#define TYPE_H

#include <string.h>

struct Type {
    int id;
    char name[20];
    int damage[18];
};

extern struct Type type[18];

struct Type getType(int id);

struct Type getTypeByName(char *name);

#endif

