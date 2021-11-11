#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
Coord3D pointP = {10, 20, 30};  
Coord3D pointQ = {-20, 21, -22};    
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};
Coord3D pos1 = {10, 2, 3};
Coord3D vel1 = {0, -3, 2};
TEST_CASE("lengths"){
    CHECK(length(&pointP)-37.4166<0.00001);
    CHECK(length(&pointQ)-36.4006<0.00001);
    CHECK(length(&pos)-100<0.00001);
    CHECK(length(&vel)-5.10294<0.00001);
}
TEST_CASE("farthest"){
    CHECK(fartherFromOrigin(&pointP, &pointQ)==&pointP);
    CHECK(fartherFromOrigin(&pointP, &pos)==&pos);
    CHECK(fartherFromOrigin(&pointP, &vel)==&pointP);
    CHECK(fartherFromOrigin(&pointQ, &pointP)==&pointP);
}
TEST_CASE("move"){
    move(&pos, &vel, 2.0);
    CHECK(pos.x==2);
    CHECK(pos.y==-10);
    CHECK(pos.z==100.4);
    move(&pos1, &vel1, 10.0);
    CHECK(pos1.x==10);
    CHECK(pos1.y==-28);
    CHECK(pos1.z==23);
}
TEST_CASE("create and delete"){
    Coord3D *temp = createCoord3D(0.1,0.2,0.3);
    CHECK(temp!=nullptr);
    CHECK(temp->x==0.1);
    CHECK(temp->y==0.2);
    CHECK(temp->z==0.3);
    Coord3D *temp1 = createCoord3D(3,222.2,0);
    CHECK(temp1!=nullptr);
    CHECK(temp1->x==3);
    CHECK(temp1->y==222.2);
    CHECK(temp1->z==0);
    deleteCoord3D(temp);
    deleteCoord3D(temp1);
}