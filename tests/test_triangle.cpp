#include "../lib/triangle.cpp"
#include <cmath>
#include <iostream>
#include <typeinfo>
#include "gtest/gtest.h"

void check_triangle_area(){
    try{
        triangle_area(1.5f,2.3f);
        if(typeid(triangle_area(1.5f,2.3f))==typeid(float)){
        std::cout<<"TEST_TRIANGLE_AREA_19 OK\n";
        }
        else{
            std::cout<<"TEST_TRIANGLE_AREA_19 Failed(WA)\n";
        }
    }
    catch(...){
        std::cout<<"TEST_TRIANGLE_AREA_19 Failed(RE)\n";
    }

    try{
        if(triangle_area(5.0,10.0)==5.0*10.0/2){
        std::cout<<"TEST_TRIANGLE_AREA_20 OK\n";
        }
        else{
            std::cout<<"TEST_TRIANGLE_AREA_20 Failed(WA)\n";
        }
    }
    catch(...){
        std::cout<<"TEST_TRIANGLE_AREA_20 Failed(RE)\n";
    }

    try{
        triangle_area(5.f);
        std::cout<<"TEST_TRIANGLE_AREA_21 Failed(RE)\n";
    }
    catch(...){
        std::cout<<"TEST_TRIANGLE_AREA_21 OK\n";
    }

    return;
}

void check_triangle_perimeter(){
    try{
        triangle_perimeter(1,2,3);
        if(typeid(triangle_perimeter(1,2,3))==typeid(double)){
        std::cout<<"TEST_TRIANGLE_PERIMETER_22 OK\n";
        }
        else{
            std::cout<<"TEST_TRIANGLE_PERIMETER_22 Failed(WA)\n";
        }
    }
    catch(...){
        std::cout<<"TEST_TRIANGLE_PERIMETER_22 Failed(RE)\n";
    }

    try{
        if(triangle_perimeter(1,4,5)==1+4+5){
        std::cout<<"TEST_TRIANGLE_PERIMETER_23 OK\n";
        }
        else{
            std::cout<<"TEST_TRIANGLE_PERIMETER_23 Failed(WA)\n";
        }
    }
    catch(...){
        std::cout<<"TEST_TRIANGLE_PERIMETER_23 Failed(RE)\n";
    }

    try{
        triangle_perimeter(999,1000.f,993);
        std::cout<<"TEST_TRIANGLE_PERIMETER_24 Failed(RE)\n";
    }
    catch(...){
        std::cout<<"TEST_TRIANGLE_PERIMETER_24 OK\n";
    }

    return;
}

TEST(TriangleTestSuite, Area1){
    ASSERT_DOUBLE_EQ(triangle_area(1,2), 1);
    
}

TEST(TriangleTestSuite, Area2){
    ASSERT_ANY_THROW(triangle_area(5.f));
}

TEST(TriangleTestSuite, Perimeter1){
    ASSERT_EQ(triangle_perimeter(1,4,5), 10);
    ASSERT_ANY_THROW(triangle_perimeter(999,1000.f,993));
}

TEST(TriangleTestSuite, Perimeter2){
    ASSERT_DOUBLE_EQ(triangle_perimeter(5,5,5), 15.);
}