#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
Coord3D pointP = {10, 20, 30};
TEST_CASE("lengths"){
    CHECK(length(&pointP)-37.4166<0.00001);
}