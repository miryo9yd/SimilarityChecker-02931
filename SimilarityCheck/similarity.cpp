#include <string>
#include <iostream>
#include<algorithm>
using namespace std;

class Similarity {
public :
	int checklength(const string& input1, const string& input2) {

		int LongLength = getLongStrLenth(input1, input2);
		int ShortLength = getShortStrLenth(input1, input2);


		if (isSameStrLength(LongLength, ShortLength)) return  MAX_POINT;
		if (isDoubleLength(LongLength, ShortLength)) return  0;
		return getStrDiffPoint(LongLength, ShortLength);


	}
	int getStrDiffPoint(int LongLength, int ShortLength)
	{
		return MAX_POINT - MAX_POINT * (LongLength - ShortLength) / ShortLength;
	}
	bool isDoubleLength(int LongLength, int ShortLength)
	{
		return LongLength >= ShortLength * 2;
	}
	bool isSameStrLength(int LongLength, int ShortLength)
	{
		return LongLength == ShortLength;
	}
	int getLongStrLenth(const string& input1, const string& input2) {

		if (input1 > input2) return input1.length();
		return input2.length();
	}

	int getShortStrLenth(const string& input1, const string& input2) {

		if (input1 < input2) return input1.length();
		return input2.length();
	}
private : 
	const int MAX_POINT = 60; 
};