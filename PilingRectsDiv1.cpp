#include <bits/stdc++.h>
using namespace std;

class PilingRectsDiv1
{
public:
	long long getmax(int N, vector <int> XS, vector <int> YS, int XA, int XB, int XC, int YA, int YB, int YC);
};

long long PilingRectsDiv1::getmax (int N, vector <int> XS, vector <int> YS, int XA, int XB, int XC, int YA, int YB, int YC)
{
	long long ret;
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, vector <int> p2, int p3, int p4, int p5, int p6, int p7, int p8, bool hasAnswer, long long p9) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}" << "," << p3 << "," << p4 << "," << p5 << "," << p6 << "," << p7 << "," << p8;
	cout << "]" << endl;
	PilingRectsDiv1 *obj;
	long long answer;
	obj = new PilingRectsDiv1();
	clock_t startTime = clock();
	answer = obj->getmax(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p9 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p9;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	int p0;
	vector <int> p1;
	vector <int> p2;
	int p3;
	int p4;
	int p5;
	int p6;
	int p7;
	int p8;
	long long p9;
	
	// ----- test 0 -----
	disabled = false;
	p0 = 2;
	p1 = {1,2,3,4};
	p2 = {10,5,3,5};
	p3 = 0;
	p4 = 0;
	p5 = 1;
	p6 = 0;
	p7 = 0;
	p8 = 1;
	p9 = 14ll;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, p2, p3, p4, p5, p6, p7, p8, true, p9) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = 2;
	p1 = {7,7};
	p2 = {4,4};
	p3 = 9;
	p4 = 0;
	p5 = 10;
	p6 = 2;
	p7 = 7;
	p8 = 9;
	p9 = 56ll;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, p2, p3, p4, p5, p6, p7, p8, true, p9) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = 3;
	p1 = {5,6,9,10,4,7};
	p2 = {9,5,8,6,8,7};
	p3 = 0;
	p4 = 0;
	p5 = 1;
	p6 = 0;
	p7 = 0;
	p8 = 1;
	p9 = 69ll;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, p2, p3, p4, p5, p6, p7, p8, true, p9) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = 10000;
	p1 = {1000000000};
	p2 = {1000000000};
	p3 = 93827162;
	p4 = 91238127;
	p5 = 98231267;
	p6 = 92138287;
	p7 = 98563732;
	p8 = 99381279;
	p9 = 1240119561532788ll;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, p2, p3, p4, p5, p6, p7, p8, true, p9) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = 5;
	p1 = {375,571,973,896,460,930,583,530,657,590};
	p2 = {284,37,994,699,941,745,166,884,270,708};
	p3 = 428;
	p4 = 1000;
	p5 = 788;
	p6 = 851;
	p7 = 125;
	p8 = 894;
	p9 = 420515ll;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, p2, p3, p4, p5, p6, p7, p8, true, p9) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 5 -----
	disabled = false;
	p0 = 34734;
	p1 = {898,579,465,665,875,391,583,901,326,133,656,562,701,707,492,617,455,441,382,952,689,656,334,877,120,318,497,25,569,962,845,562,632,898,882,498,595,889,382,507,791,548,810,606,105,869,569,970,322,974};
	p2 = {83,18,492,27,339,622,851,915,464,347,287,210,282,166,976,167,968,769,14,383,454,983,319,165,185,315,795,851,124,287,846,745,19,639,894,828,540,420,147,452,501,670,466,554,166,1,446,808,508,172};
	p3 = 569;
	p4 = 185;
	p5 = 285;
	p6 = 741;
	p7 = 304;
	p8 = 296;
	p9 = 10050ll;
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, p2, p3, p4, p5, p6, p7, p8, true, p9) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// Snake Snuke has 2N rectangles cut out of paper.
// The rectangles are labeled 0 through 2N-1.
// For each i, the side lengths of rectangle i will be denoted X[i] and Y[i].
// 
// The number N can be very large, therefore we will use a pseudorandom generator to define the values X[i] and Y[i].
// You are given the following input:
// 
// The int N.
// Two vector <int>s: XS and YS.
// Six ints: XA, XB, XC, YA, YB, YC.
// 
// 
// Use the following pseudocode to generate X and Y:
// 
// 
// for (i = 0; i < (length of XS); i++) {
//     X[i] = XS[i];
//     Y[i] = YS[i];
// }
// for (i = (length of XS); i < 2 * N; i++) {
//     X[i] = (X[i - 1] * XA + XB) % XC + 1;
//     Y[i] = (Y[i - 1] * YA + YB) % YC + 1;
// }
// 
// 
// Snake Snuke will divide his 2N rectangles into two bags, each bag containing exactly N rectangles.
// Then he will process each bag separately.
// 
// When processing a bag, he will take all the rectangles out of the bag and he will place them onto a table, one rectangle at a time.
// Each rectangle (except for the first one) must overlap the immediately previous one, so at the end Snuke will have a pile of N rectangles.
// Snuke may rotate the rectangles, but once placed, the sides of each rectangle must be parallel with the sides of the table.
// (I.e., he may only swap the width and height of some rectangles.)
// After placing all the rectangles, Snuke computes the area that is covered by all N rectangles.
// (Formally, the area of their intersection.)
// That area is called the outcome of that bag.
// 
// Snuke wants to maximize the sum of the outcomes of his two bags.
// That is, he must first divide the rectangles into bags in an optimal way, and then process each bag in an optimal way.
// Return the maximal possible sum of the two outcomes.
// 
// 
// DEFINITION
// Class:PilingRectsDiv1
// Method:getmax
// Parameters:int, vector <int>, vector <int>, int, int, int, int, int, int
// Returns:long long
// Method signature:long long getmax(int N, vector <int> XS, vector <int> YS, int XA, int XB, int XC, int YA, int YB, int YC)
// 
// 
// CONSTRAINTS
// -N will be between 1 and 100,000, inclusive.
// -XS will contain between 1 and min{50, 2*N} elements, inclusive.
// -XS and YS will be contain the same number of elements, inclusive.
// -Each element of XS and YS will be between 1 and 1,000,000,000 (109), inclusive.
// -XA, XB, YA and YB will be between 0 and 1,000,000,000 (109), inclusive.
// -XC and YC will be between 1 and 1,000,000,000 (109), inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 2
// {1,2,3,4}
// {10,5,3,5}
// 0
// 0
// 1
// 0
// 0
// 1
// 
// Returns: 14
// 
// Snuke should put rectangles 0 and 1 in one bag, and rectangles 2 and 3 into the other bag. He can then process the bags as shown in the picture below (where rectangle 0 is labeled as "first", and so on). The sum of the two areas is 14. There are other equally good solutions, but there is no better solution than 14.
// 
// 
// 
// 1)
// 2
// {7,7}
// {4,4}
// 9
// 0
// 10
// 2
// 7
// 9
// 
// Returns: 56
// 
// X is {7,7,4,7} and Y is {4,4,7,4}. Note that it is allowed to rotate the rectangles. Regardless of how Snuke divides the rectangles into bags, each bag will contain two 4x7 rectangles. When processing a bag, Snuke can align the two rectangles perfectly. Thus the answer is 28 + 28 = 56.
// 
// 2)
// 3
// {5,6,9,10,4,7}
// {9,5,8,6,8,7}
// 0
// 0
// 1
// 0
// 0
// 1
// 
// Returns: 69
// 
// 
// 
// 3)
// 10000
// {1000000000}
// {1000000000}
// 93827162
// 91238127
// 98231267
// 92138287
// 98563732
// 99381279
// 
// Returns: 1240119561532788
// 
// Use a 64-bit data type for generating the input data in order to avoid overflow. Also note that the return value is a long long.
// 
// 4)
// 5
// {375,571,973,896,460,930,583,530,657,590}
// {284,37,994,699,941,745,166,884,270,708}
// 428
// 1000
// 788
// 851
// 125
// 894
// 
// Returns: 420515
// 
// 
// 
// 5)
// 34734
// {898,579,465,665,875,391,583,901,326,133,656,562,701,707,492,617,455,441,382,952,689,656,334,877,120,318,497,25,569,962,845,562,632,898,882,498,595,889,382,507,791,548,810,606,105,869,569,970,322,974}
// {83,18,492,27,339,622,851,915,464,347,287,210,282,166,976,167,968,769,14,383,454,983,319,165,185,315,795,851,124,287,846,745,19,639,894,828,540,420,147,452,501,670,466,554,166,1,446,808,508,172}
// 569
// 185
// 285
// 741
// 304
// 296
// 
// Returns: 10050
// 
// 
// 
// END KAWIGIEDIT TESTING
