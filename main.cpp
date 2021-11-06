#include <iostream>


#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20,30};
  Coord3D pointQ = {-20, 21, -22};
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  double x=0.1,y=0.3,z=0.4;
  double a=1,b=2.3,c=10.4;
  std::cout << "length of pointP is "<< length(&pointP)<<"\n";
  std::cout << "Address of P: " << &pointP << "\n";
  std::cout << "Address of Q: " << &pointQ << "\n\n";
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "farthest from origin is = " << ans << "\n";
  move(&pos, &vel, 2.0); 
  std::cout << pos.x << " " << pos.y << " " << pos.z << "\n";
  Coord3D *ppos = createCoord3D(x,y,z);
  Coord3D *pvel = createCoord3D(a,b,c);
  move(ppos, pvel, 10.0);
  std::cout<< "Original point is 0.1, 0.3, 0.4\nVelocity is 1, 2.3, 10.4\nCoordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << "\n";
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
  return 0;
}
