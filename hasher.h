#include <stdio.h>
#include <stdlib.h>

#include "uthash.h"

void add_user(double *coords, double *normals);
struct vnormal {
    double coords[3];
    double normals[3];
    UT_hash_handle hh;         /* makes this structure hashable */
};
