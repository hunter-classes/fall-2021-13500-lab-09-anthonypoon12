#include <iostream>
#include "funcs.h"
#include <math.h>
double length(Coord3D *p){
    return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1)>length(p2))
        return p1;
    return p2;
}