#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
Coord3D pointP = {10, 20, 30};  
Coord3D pointP1 = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};    
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};
TEST_CASE("lengths"){
    CHECK(length(&pointP)-37.4166<0.00001);
}
TEST_CASE("farthest"){
    CHECK(fartherFromOrigin(&pointP1, &pointQ)==&pointP1);
}
TEST_CASE("move"){
    move(&pos, &vel, 2.0);
    CHECK(pos.x==2);
    CHECK(pos.y==-10);
    CHECK(pos.z==100.4);
}