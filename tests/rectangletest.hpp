#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

//perm tests
TEST(PerimeterTest,NormalVal) {
    Rectangle r;
    r.set_width(10);
    r.set_height(10);
    EXPECT_EQ(40,r.perimeter());
}

TEST(PerimeterTest,Zero) {
    Rectangle r;
    r.set_width(0);
    r.set_height(0);
    EXPECT_EQ(0,r.perimeter());
}

TEST(PerimeterTest,Negative) {
    Rectangle r;
    r.set_width(-4);
    r.set_height(-4);
    EXPECT_EQ(-16,r.perimeter());
}
//area tests
TEST(AreaTest,Positive) {
    Rectangle r;
    r.set_width(5);
    r.set_height(5);
    EXPECT_EQ(25,r.area());
}

TEST(AreaTest,Zero) {
    Rectangle r;
    r.set_width(0);
    r.set_height(0);
    EXPECT_EQ(0,r.area());
}

TEST(AreaTest,Negative) {
    Rectangle r;
    r.set_width(-4);
    r.set_height(20);
    EXPECT_EQ(-80,r.area());
}
//constructor tests
TEST(RCTest, DefaultVals) {
	Rectangle r;
	EXPECT_EQ(r.get_width(), 0);
	EXPECT_EQ(r.get_height(), 0);
}

TEST(RCTest, PositiveVals) {
        Rectangle r(4,4);
        EXPECT_EQ(r.get_width(), 4);
        EXPECT_EQ(r.get_height(), 4);
}

TEST(RCTest, ZeroVal) {
        Rectangle r(0,10);
        EXPECT_EQ(r.get_width(), 0);
        EXPECT_EQ(r.get_height(), 10);
}

TEST(RCTest, NegativeVals) {
        Rectangle r(-4,-4);
        EXPECT_EQ(r.get_width(), -4);
        EXPECT_EQ(r.get_height(), -4);
}

