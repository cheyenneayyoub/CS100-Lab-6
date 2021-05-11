#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTest, Default){
	Rectangle r;
	EXPECT_EQ(r.get_width(), 0);
	EXPECT_EQ(r.get_height(), 0);
} 

TEST(ConstructorTest, Zeros){
	Rectangle r(0,0);
        EXPECT_EQ(r.get_width(), 0);
        EXPECT_EQ(r.get_height(), 0);
}

TEST(ConstructorTest, Negative){
	Rectangle r(-2,-3);
        EXPECT_EQ(r.get_width(), -2);
        EXPECT_EQ(r.get_height(), -3);
}

TEST(AreaTest, Positive){
	Rectangle r;
	r.set_width(2);
	r.set_height(3);
	EXPECT_EQ(6, r.area());
}

TEST(AreaTest, Negative){
        Rectangle r;
        r.set_width(-2);
        r.set_height(3);
        EXPECT_THROW(r.area(), invalid_argument);
}

TEST(AreaTest, Zero){
	Rectangle r;
	r.set_width(0);
	r.set_height(0);
	EXPECT_EQ(0, r.area());
}

TEST(PerimTest, Positive){
	Rectangle r;
	r.set_width(2);
	r.set_height(3);
	EXPECT_EQ(10, r.perimiter());
}

TEST(PerimTest, Negative){
	Rectangle r;
	r.set_width(2);
	r.set_height(-3);
	EXPECT_THROW(r.perimiter(), invalid_argument);
}

TEST(PerimTest, Zero){
	Rectangle r;
	r.set_width(0);
	r.set_height(0);
	EXPECT_EQ(0, r.perimiter());
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
