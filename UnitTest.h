#pragma once
#include "gtest\gtest.h"

namespace pldl
{
	class UnitTest
	{
	public:
		UnitTest()
		{
			testing::InitGoogleTest();
			RUN_ALL_TESTS();
		};
	};
}

TEST(UtilitiesTest, test1)
{
	EXPECT_EQ(10, 0);
	EXPECT_EQ(10, 10);
}

//TEST(UtilitiesTest, testGetValueCollectionUsingNormalDistribution)
//{
//
//	EXPECT_EQ((pldl::Utilities::getValueCollectionUsingNormalDistribution(10, 8, 2)).size(), 10);
//}
//
//TEST(UtilitiesTest, testToTimeMethod)
//{
//	EXPECT_EQ((pldl::Utilities::toTime(35)).hours, 0);
//	EXPECT_EQ((pldl::Utilities::toTime(90)).hours, 1);
//	EXPECT_EQ((pldl::Utilities::toTime(90)).minutes, 30);
//}
//
//
//
//TEST(UtilitiesTest, testRandomNumberGenaratorMethod)
//{
//	int number1 = 1, number2 = 3;
//	int randomNumber1 = pldl::Utilities::randomNumberGenarator(number1, number2);
//
//	EXPECT_LE(randomNumber1, number2);
//	EXPECT_GE(randomNumber1, number1);
//
//	int number3 = 2, number4 = 10;
//	int randomNumber2 = pldl::Utilities::randomNumberGenarator(number3, number4);
//
//	EXPECT_LE(randomNumber2, number4);
//	EXPECT_GE(randomNumber2, number3);
//
//}
