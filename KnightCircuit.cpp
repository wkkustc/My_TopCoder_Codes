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

#define endl 		("\n")
#define DEBUG(x)	cout << #x << " = " << x << "\n"
#define Pf		printf
#define	Sf		scanf

#define	ep		1e-9
#define PI		M_PI
#define E 		M_E

#define	CL(a, b)	memset(a, b, sizeof(a))
#define	mp		make_pair
#define	pb		push_back

#define	all(c)		(c).begin(), (c).end()
#define	tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())		//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here ; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int)b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i >= loop_ends_here; i--)

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

class KnightCircuit
{
public:
	long long maxSize(int w, int h, int a, int b);
};


long long KnightCircuit::maxSize (int w, int h, int a, int b) 
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
bool KawigiEdit_RunTest(int testNum, int p0, int p1, int p2, int p3, bool hasAnswer, long long p4) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << p2 << "," << p3;
	cout << "]" << endl;
	KnightCircuit *obj;
	long long answer;
	obj = new KnightCircuit();
	clock_t startTime = clock();
	answer = obj->maxSize(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p4 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p4;
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
	
	int p0;
	int p1;
	int p2;
	int p3;
	long long p4;
	
	{
	// ----- test 0 -----
	p0 = 1;
	p1 = 1;
	p2 = 2;
	p3 = 1;
	p4 = 1ll;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 3;
	p1 = 20;
	p2 = 1;
	p3 = 3;
	p4 = 11ll;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 100000;
	p1 = 100000;
	p2 = 1;
	p3 = 2;
	p4 = 10000000000ll;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 3;
	p1 = 3;
	p2 = 1;
	p3 = 2;
	p4 = 8ll;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 30;
	p1 = 30;
	p2 = 8;
	p3 = 4;
	p4 = 64ll;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 32;
	p1 = 34;
	p2 = 6;
	p3 = 2;
	p4 = 136ll;
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, p3, true, p4) && all_right;
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
// The (a,b)-knight is a chess piece that moves by jumping, just as a regular knight, but the jump is a cells in one direction, b in the other. Formally, an (a,b)-knight standing on the cell (x,y) can move to any of the following eight cells:
// (x+a,y+b), (x+a,y-b), (x-a,y+b), (x-a,y-b), (x+b,y+a), (x+b,y-a), (x-b,y+a), and (x-b,y-a).
// Of course, if the (a,b)-knight is close to the edge of the board, some of these cells might not be on the board.
// It is not allowed to jump to a cell that is not on the board.
// 
// A knight circuit is a sequence of cells on a chess board that starts and ends with the same cell.
// Each consecutive pair of cells in the knight circuit must correspond to a single jump of the (a,b)-knight.
// The knight circuit may visit each cell arbitrarily many times.
// The size of a knight circuit is the number of different cells visited by the circuit.
// 
// You are given the ints w and h: the width (in columns) and the height (in rows) of a rectangular chessboard. You are also given the ints a and b: the parameters of your knight. Return the maximum knight circuit size that can be obtained on the given board. You are free to choose any cell as the start of your circuit.
// 
// 
// DEFINITION
// Class:KnightCircuit
// Method:maxSize
// Parameters:int, int, int, int
// Returns:long long
// Method signature:long long maxSize(int w, int h, int a, int b)
// 
// 
// CONSTRAINTS
// -w, h will each be between 1 and 100000, inclusive.
// -a and b will each be between 1 and 10, inclusive.
// -a and b will not be equal.
// 
// 
// EXAMPLES
// 
// 0)
// 1
// 1
// 2
// 1
// 
// Returns: 1
// 
// This is a 1x1 board. Note that a sequence that consists of a single cell is considered to be a valid knight circuit.
// 
// 1)
// 3
// 20
// 1
// 3
// 
// Returns: 11
// 
// 
// 
// 2)
// 100000
// 100000
// 1
// 2
// 
// Returns: 10000000000
// 
// It is possible to make a circuit that contains every cell on the board.
// 
// 3)
// 3
// 3
// 1
// 2
// 
// Returns: 8
// 
// 
// 
// 4)
// 30
// 30
// 8
// 4
// 
// Returns: 64
// 
// 
// 
// 5)
// 32
// 34
// 6
// 2
// 
// Returns: 136
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!