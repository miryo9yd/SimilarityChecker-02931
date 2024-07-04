#include "pch.h"
#include "../SimilarityCheck/similarity.cpp"

class SimilarityFixture :public testing::Test {
public :
	Similarity sim; 

	void checkStrLengthPoint(const string& input1, const string& input2,int expectvalue) {
		int ret = sim.checklength(input1, input2);
		EXPECT_EQ(expectvalue, ret);
	}
};

TEST_F(SimilarityFixture, LengthCheck) {
	checkStrLengthPoint("AAA", "BBB", 60);
	checkStrLengthPoint("AAA", "BBBBBBB",0);
	checkStrLengthPoint("AAA", "BBBBB", 20);
	checkStrLengthPoint("AA", "ABA", 30);

}