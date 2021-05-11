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



int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
