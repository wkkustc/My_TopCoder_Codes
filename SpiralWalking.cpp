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

//#define debug(x)
#define debug(x)	cout << #x << " = " << x << "\n"

class SpiralWalking
{
public:
	int totalPoints(vector <string> levelMap);
};

int SpiralWalking::totalPoints (vector <string> levelMap) 
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
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	SpiralWalking *obj;
	int answer;
	obj = new SpiralWalking();
	clock_t startTime = clock();
	answer = obj->totalPoints(p0);
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
	
	vector <string> p0;
	int p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"111","111","111"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"101","110"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"00","10"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"86850","76439","15863","24568","45679","71452","05483"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 142;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// You are playing a game where you must traverse a rectangular grid of cells using a spiral path. The map is given in a vector <string> levelMap, where the j-th character of the i-th element is the number of points associated with the cell in row i, column j. Rows are numbered from top to bottom, starting at 0, and columns are numbered from left to right, starting at 0. All coordinates in this problem will be given as (row, column).
// 
// You start at cell (0,0), the top left corner of the grid. You are facing right. You move by repeating the following strategy until you have visited every single cell on the grid exactly once. If there is an adjacent cell in front of you that you haven't visited yet, move forward to that cell. Otherwise, if there are still unvisited cells on the grid, turn 90 degrees clockwise.
// 
// To calculate your final score, add up all the points for the cells that you visited, but don't include the cells in which you changed direction. The first and last cells in your path will always be included in your final score.
// 
// See examples for further clarification.
// 
// 
// DEFINITION
// Class:SpiralWalking
// Method:totalPoints
// Parameters:vector <string>
// Returns:int
// Method signature:int totalPoints(vector <string> levelMap)
// 
// 
// CONSTRAINTS
// -levelMap will contain between 2 and 50 elements, inclusive.
// -All elements of levelMap will contain the same number of characters.
// -Each element of levelMap will contain between 2 and 50 digits ('0'-'9'), inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {"111",
//  "111",
//  "111"}
// 
// Returns: 5
// 
// This is the spiral path you must follow: (0,0) -> (0,1) -> (0,2) -> (1,2) -> (2,2) -> (2,1) -> (2,0) -> (1,0) -> (1,1).
// 
// 1)
// {"101",
//  "110"}
// 
// Returns: 3
// 
// The grid is not always a square.
// 
// 2)
// {"00",
//  "10"}
// 
// Returns: 1
// 
// 
// 
// 3)
// {"86850",
//  "76439",
//  "15863",
//  "24568",
//  "45679",
//  "71452",
//  "05483"}
// 
// Returns: 142
// 
// The following image shows your path.  The yellow cell is the last cell you visit.  You receive points for all the cells except the red ones.
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
