#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
Coord3D pointP = {10, 20, 30};  
Coord3D pointP1 = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};
TEST_CASE("lengths"){
    CHECK(length(&pointP)-37.4166<0.00001);
}
TEST_CASE("farthest"){
    CHECK(fartherFromOrigin(&pointP1, &pointQ)==&pointP1);
}