/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/

class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, nearestToZero)
{
	Rando rando;
	ASSERT_EQ(1, rando.nearestToZero(1,2) );
}
TEST(RandoTest, firstZero)
{
	Rando rando;
	ASSERT_EQ(1, rando.nearestToZero(0,1) );
}
TEST(RandoTest, secondZero)
{
	Rando rando;
	ASSERT_EQ(1, rando.nearestToZero(1,0) );
}
TEST(RandoTest, bothZero)
{
	Rando rando;
	ASSERT_EQ(0, rando.nearestToZero(0,0) );
}
TEST(RandoTest, negativeGreater)
{
	Rando rando;
	ASSERT_EQ(1, rando.nearestToZero(-2,1) );
}
TEST(RandoTest, negativeSmaller)
{
	Rando rando;
	ASSERT_EQ(-2, rando.nearestToZero(-2,3) );
}
TEST(RandoTest, equal)
{
	Rando rando;
	ASSERT_EQ(1000, rando.nearestToZero(1000,1000) );
}
