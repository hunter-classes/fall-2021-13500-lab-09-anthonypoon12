/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 9 Main
main file for lab 9
*/
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
  std::cout<<"\n\n\n";
  Coord3D pointA = {20, 110,30};
  Coord3D pointB = {-1, -2, -3};
  Coord3D pos1 = {0, 3, 17.2};
  Coord3D vel1 = {14, -52, 301};
  double xx=1.1,yy=3.1,zz=0.02;
  double aa=101,bb=2423,cc=18;
  std::cout << "length of pointA is "<< length(&pointA)<<"\n";
  std::cout << "Address of A: " << &pointA << "\n";
  std::cout << "Address of B: " << &pointB << "\n\n";
  Coord3D * ans1 = fartherFromOrigin(&pointA, &pointB);
  std::cout << "farthest from origin is = " << ans1 << "\n";
  move(&pos1, &vel1, 10.0); 
  std::cout << pos1.x << " " << pos1.y << " " << pos1.z << "\n";
  Coord3D *ppos1 = createCoord3D(xx,yy,zz);
  Coord3D *pvel1 = createCoord3D(aa,bb,cc);
  move(ppos1, pvel1, 10.0);
  std::cout<< "Original point is 1.1, 3.1, 0.02\nVelocity is 101, 2423, 18\nCoordinates after 10 seconds: " << (*ppos1).x << " " << (*ppos1).y << " " << (*ppos1).z << "\n";
  deleteCoord3D(ppos1);
  deleteCoord3D(pvel1);
  return 0;
}
