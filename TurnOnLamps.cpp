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

class TurnOnLamps
{
public:
	int minimize(vector <int> roads, string initState, string isImportant);
};

int TurnOnLamps::minimize (vector <int> roads, string initState, string isImportant) 
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
bool KawigiEdit_RunTest(int testNum, vector <int> p0, string p1, string p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "\"" << p1 << "\"" << "," << "\"" << p2 << "\"";
	cout << "]" << endl;
	TurnOnLamps *obj;
	int answer;
	obj = new TurnOnLamps();
	clock_t startTime = clock();
	answer = obj->minimize(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p3;
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
	string p1;
	string p2;
	int p3;
	
	{
	// ----- test 0 -----
	int t0[] = {0,0,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "0001";
	p2 = "0111";
	p3 = 1;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {0,0,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "0000";
	p2 = "0111";
	p3 = 2;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {0,0,1,1,4,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "000100";
	p2 = "111111";
	p3 = 2;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {0,0,1,1,4,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "100100";
	p2 = "011101";
	p3 = 2;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {0,0,2,2,3,1,6,3,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "010001110";
	p2 = "000110100";
	p3 = 1;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {0,0,1,2,4,4,6,1,2,5,2,8,8,3,6,4,14,7,18,14,11,7,1,12,7,5,18,23,0,14,11,10,2,2,6,1,30,11,9,12,5,35,25,11,23,17,14,45,15};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "0000000000010000000000000010000010100000000000000";
	p2 = "1010111111111011011111000110111111111111111110111";
	p3 = 14;
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
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
// This problem statement contains superscripts and/or subscripts. These may not display properly outside the applet.
// 
// Gobble City has a tree topology: There are N intersections, numbered 0 through N-1. The intersections are connected by N-1 bidirectional roads in such a way that it is possible to travel between any two intersections. More precisely, for each pair of intersections there is a unique path (a sequence of roads; see Notes for a formal definition) that connects them. You are given a vector <int> roads that describes the roads: for each i (0 <= i <= N-2), we have 0 <= roads[i] <= i and there is a road between intersections numbered roads[i] and i+1.
// 
// On each road there is a single lamp. The lamps are numbered 0 through N-2. For each i, lamp i is on the road that connects roads[i] and i+1. You are given a string initState that describes the initial states of all lamps: initState[i]='1' means that lamp i is initially on, and initState[i]='0' means that it is off.
// 
// Now you are at the Control Center for these lamps. The only way in which you can operate the lamps looks as follows: You enter the numbers of two intersections (X and Y) into the Control Center computer, and the computer toggles the state of all lamps on the path between X and Y. (Toggling the state of a lamp means that if the lamp was off it is now on, and vice versa.) You can perform arbitrarily many such operations, one after another.
// 
// Some of the lamps are important to you. You are given this information in the string isImportant: isImportant[i]='1' means that lamp i is important, and isImportant[i]='0' means that it is not.
// 
// Your goal is to turn on all important lamps at the same time. (We do not care about the state of the remaining lamps.) Return the minimum number of operations needed to achieve the goal.
// 
// DEFINITION
// Class:TurnOnLamps
// Method:minimize
// Parameters:vector <int>, string, string
// Returns:int
// Method signature:int minimize(vector <int> roads, string initState, string isImportant)
// 
// 
// NOTES
// -In your solution some lamps may be toggled multiple times.
// -A path between two intersection a and b is a sequence of intersections (v0=a, v1, v2, ..., vk=b) such that all v0, v1, ..., vk are pairwise distinct and for each i=0..k-1, there exists a road between vi and vi+1.
// 
// 
// CONSTRAINTS
// -roads will contain N-1 elements, where N is between 2 and 50, inclusive.
// -For each i, the i-th (0-based index) element of roads will be between 0 and i, inclusive.
// -initState will be N-1 characters long.
// -initState will only contain the characters '0' and '1'.
// -isImportant will be N-1 characters long.
// -isImportant will only contain the characters '0' and '1'.
// 
// 
// EXAMPLES
// 
// 0)
// {0,0,1,1}
// "0001"
// "0111"
// 
// Returns: 1
// 
// The figure below illustrates this test case and its optimal solution.
// 
// Red roads are the important ones. The optimal solution chooses the intersections 2 and 3. The path that corresponds to this choice is enclosed by the dashed line. All lamps on this path are toggled from 0 to 1.
// 
// 1)
// {0,0,1,1}
// "0000"
// "0111"
// 
// Returns: 2
// 
// This is almost the same test case as Example 0, but now the initial state of the lamp 3 (i.e., the lamp on the road that connects intersections 1 and 4) is now 0. As this is an important lamp, we now need two operations in order to turn all important lamps to 1.
// 
// 
// 2)
// {0,0,1,1,4,4}
// "000100"
// "111111"
// 
// Returns: 2
// 
// 
// Note that lamp on the road between intersections 1 and 4 was toggled twice: first from 1 to 0, and then from 0 back to 1.
// 
// 3)
// {0,0,1,1,4,4}
// "100100"
// "011101"
// 
// Returns: 2
// 
// 
// 
// 4)
// {0,0,2,2,3,1,6,3,1}
// "010001110"
// "000110100"
// 
// Returns: 1
// 
// 
// 
// 5)
// {0,0,1,2,4,4,6,1,2,5,2,8,8,3,6,4,14,7,18,14,11,7,1,12,7,5,18,23,0,14,11,10,2,2,6,1,30,11,9,12,5,35,25,11,23,17,14,45,15}
// "0000000000010000000000000010000010100000000000000"
// "1010111111111011011111000110111111111111111110111"
// 
// Returns: 14
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
