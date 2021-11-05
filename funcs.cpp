#include <iostream>
#include "funcs.h"
#include <math.h>
double length(Coord3D *p){
    return sqrt(pow(*p->x,2)+pow(*p->y,2)+pow(*p->z,2));
}
