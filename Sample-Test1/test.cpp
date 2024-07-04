#include "pch.h"
#include "../SimilarityCheck/similarity.cpp"


TEST(TestCaseName, SameLengthCheck) {
	Similarity sim;
	int ret = sim.checklength("AAA","BBB");
	EXPECT_EQ(60, ret);
}

TEST(TestCaseName, DoubleLengthCheck) {
	Similarity sim;
	int ret = sim.checklength("AAA", "BBBBBBB");
	EXPECT_EQ(0, ret);
}

TEST(TestCaseName, PartialPoint) {
	Similarity sim;
	int ret = sim.checklength("AAA", "BBBBB");
	EXPECT_EQ(20, ret);
}