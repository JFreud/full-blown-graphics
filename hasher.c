#include "hasher.h"



void add_user(double *coords, double *normals) {
    struct vnormal *v;

    v = malloc(sizeof(struct vnormal));
    v->coords = coords;
    v->normals = normals;
    HASH_ADD_KEYPTR(hh, );  /* id: name of key field */
}
