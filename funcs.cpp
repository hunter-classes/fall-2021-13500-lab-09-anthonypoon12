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
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x=ppos->x+pvel->x * dt;
    ppos->y=ppos->y+pvel->y * dt;
    ppos->z=ppos->z+pvel->z * dt;
}
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D* output = new Coord3D;
    output->x=x;
    output->y=y;
    output->z=z;
    return output;
}