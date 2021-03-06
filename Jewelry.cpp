#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
#include <cstring>
using namespace std;

typedef long long  int64;
typedef vector<int> vi;
typedef string ST;
typedef stringstream SS;
typedef vector< vector <int> > vvi;
typedef pair<int,int> ii;
typedef vector <string> vs;

#define Pf	printf
#define	Sf	scanf

#define	ep	1e-9
#define PI M_PI
#define E M_E

#define	CL(a, b)	memset(a, b, sizeof(a))
#define	mp	make_pair

#define	pb	push_back

#define	all(c)	(c).begin(), (c).end()
#define	tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int) b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i>=loop_ends_here; i--)

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

class Jewelry
{
public:
	long long howMany(vector <int> values);
};


long long Jewelry::howMany (vector <int> values) 
{
	
	long long ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	Jewelry *obj;
	long long answer;
	obj = new Jewelry();
	clock_t startTime = clock();
	answer = obj->howMany(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	all_right = true;
	
	vector <int> p0;
	long long p1;
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,5,3,4,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 9ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 18252025766940ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,2,3,4,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {7,7,8,9,10,11,1,2,2,3,4,5,6};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 607ll;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {123,217,661,678,796,964,54,111,417,526,917,923};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0ll;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// You have been given a list of jewelry items that must be split amongst two people: Frank and Bob.  Frank likes very expensive jewelry.  Bob doesn't care how expensive the jewelry is, as long as he gets a lot of jewelry.  Based on these criteria you have devised the following policy:
// 
// 1) Each piece of jewelry given to Frank must be valued greater than or equal to each piece of jewelry given to Bob.  In other words, Frank's least expensive piece of jewelry must be valued greater than or equal to Bob's most expensive piece of jewelry.
// 2) The total value of the jewelry given to Frank must exactly equal the total value of the jewelry given to Bob.
// 3) There can be pieces of jewelry given to neither Bob nor Frank.
// 4) Frank and Bob must each get at least 1 piece of jewelry.
// 
// Given the value of each piece, you will determine the number of different ways you can allocate the jewelry to Bob and Frank following the above policy.  For example:
// 	values = {1,2,5,3,4,5}
// Valid allocations are:
//   Bob       		Frank
//   1,2		         3
//   1,3        		 4
//   1,4		         5  (first 5)
//   1,4         		 5  (second 5)
//   2,3 		         5  (first 5)
//   2,3         		 5  (second 5)
//    5  (first 5)		 5  (second 5)
//    5  (second 5)	 5  (first 5)
// 1,2,3,4       		5,5
// Note that each '5' is a different piece of jewelry and needs to be accounted for separately.  There are 9 legal ways of allocating the jewelry to Bob and Frank given the policy, so your method would return 9.
// 
// DEFINITION
// Class:Jewelry
// Method:howMany
// Parameters:vector <int>
// Returns:long long
// Method signature:long long howMany(vector <int> values)
// 
// 
// CONSTRAINTS
// -values will contain between 2 and 30 elements inclusive.
// -Each element of values will be between 1 and 1000 inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,5,3,4,5}
// 
// Returns: 9
// 
// From above.
// 
// 1)
// {1000,1000,1000,1000,1000,
//  1000,1000,1000,1000,1000,
//  1000,1000,1000,1000,1000,
//  1000,1000,1000,1000,1000,
//  1000,1000,1000,1000,1000,
//  1000,1000,1000,1000,1000}
// 
// Returns: 18252025766940
// 
// 2)
// {1,2,3,4,5}
// 
// Returns: 4
// 
// Valid allocations:
// Bob               Frank
// 1,2                 3
// 2,3                 5
// 1,3                 4
// 1,4                 5
// 
// 3)
// {7,7,8,9,10,11,1,2,2,3,4,5,6}
// 
// Returns: 607
// 
// 4)
// {123,217,661,678,796,964,54,111,417,526,917,923}
// 
// Returns: 0
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
