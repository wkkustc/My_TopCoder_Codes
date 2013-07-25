#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cassert>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iterator>
#include <fstream>
using namespace std;

typedef long long 		int64;
typedef vector<int> 		vi;
typedef string 			ST;
typedef stringstream 		SS;
typedef vector< vector<int> > 	vvi;
typedef pair<int,int> 		ii;
typedef vector<string> 		vs;
/*
#if __cplusplus > 199711L	// for g++0x, value of __cplusplus must be greater thana 199711L.
	#define tr(i, c)	for(auto i = begin(c); i != end(c); i++)
#else
	#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#endif
*/
#define endl		("\n")
#define tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define PI		M_PI
#define E 		M_E
#define	eps		1e-9

#define	Sf		scanf
#define	Pf		printf

#define forn(i, n)	for(int i = 0, lets_stop_here = (int)n; i <  lets_stop_here; i++)
#define forab(i, a, b)	for(int i = a, lets_stop_here = (int)b; i <= lets_stop_here; i++)
#define rep(i, a, b)	for(int i = a, lets_stop_here = (int)b; i >= lets_stop_here; i--)

#define	all(c)		(c).begin(), (c).end()
#define	cl(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

#if (0)
	#define debug 
#else 
	#define debug(x)	cout << #x << " = " << x << "\n"
#endif

class PerfectPermutation
{
public:
	int reorder(vector <int> P);
};

int PerfectPermutation::reorder (vector <int> P) 
{
	int ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	PerfectPermutation *obj;
	int answer;
	obj = new PerfectPermutation();
	clock_t startTime = clock();
	answer = obj->reorder(p0);
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
	int p1;
	
	{
	// ----- test 0 -----
	int t0[] = {2,0,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {2,0,1,4,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {2,3,0,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {0,5,3,2,1,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {4,2,6,0,3,5,9,7,8,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
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
// A permutation A[0], A[1], ..., A[N-1] is a sequence containing each integer between 0 and N-1, inclusive, exactly once.  Each permutation A of length N has a corresponding child array B of the same length, where B is defined as follows:
// 
// 
// B[0] = 0
// B[i] = A[B[i-1]], for every i between 1 and N-1, inclusive.
// 
// 
// A permutation is considered perfect if its child array is also a permutation.
// 
// Below are given all permutations for N=3 with their child arrays. Note that for two of these permutations ({1, 2, 0} and {2, 0, 1}) the child array is also a permutation, so these two permutations are perfect.
// 
// 
// Permutation		Child array
// {0, 1, 2}		{0, 0, 0}
// {0, 2, 1}		{0, 0, 0}
// {1, 0, 2}		{0, 1, 0}
// {1, 2, 0}		{0, 1, 2}
// {2, 0, 1}		{0, 2, 1}
// {2, 1, 0}		{0, 2, 0}
// 
// 
// You are given a vector <int> P containing a permutation of length N.  Find a perfect permutation Q of the same length such that the difference between P and Q is as small as possible, and return this difference.  The difference between P and Q is the number of indices i for which P[i] and Q[i] are different.
// 
// DEFINITION
// Class:PerfectPermutation
// Method:reorder
// Parameters:vector <int>
// Returns:int
// Method signature:int reorder(vector <int> P)
// 
// 
// CONSTRAINTS
// -P will contain between 1 and 50 elements, inclusive.
// -P will contain each integer between 0 and N-1, inclusive, exactly once, where N is the number of elements in P.
// 
// 
// EXAMPLES
// 
// 0)
// {2, 0, 1}
// 
// Returns: 0
// 
// P is a perfect permutation, so we can use the same permutation for Q.  The difference is then 0 because P and Q are the same.
// 
// 1)
// {2, 0, 1, 4, 3}
// 
// Returns: 2
// 
// Q might be {2, 0, 3, 4, 1}.
// 
// 2)
// {2, 3, 0, 1}
// 
// Returns: 2
// 
// Q might be {1, 3, 0, 2}.
// 
// 3)
// {0, 5, 3, 2, 1, 4}
// 
// Returns: 3
// 
// 
// 
// 4)
// {4, 2, 6, 0, 3, 5, 9, 7, 8, 1}
// 
// Returns: 5
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!