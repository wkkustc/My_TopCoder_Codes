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
#define	tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int) b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i>=loop_ends_here; i--)

class RainyRoad
{
public:
	string isReachable(vector <string> r)
	{
		cout << r[0] << endl << r[1] << endl;
		r[0][0] = 'a';
		if(r[1][0] == '.')	r[1][0] = 'a';
		int n = r[0].length();
		
		forab(col, 1, n-1) {
			forn(row, 2)	if(r[row][col] == '.')
				if(r[row][col-1] == 'a' || r[(row+1)%2][col-1]  == 'a')
					r[row][col] = 'a';
			
			forn(row, 2)	if(r[row][col] == '.' && r[(row+1)%2][col] == 'a')
				r[row][col] = 'a';
			
					
		}
		cout << r[0] << endl << r[1] << endl;
		
		return r[0][n-1] == 'a' ? "YES" : "NO";
		
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	RainyRoad *obj;
	string answer;
	obj = new RainyRoad();
	clock_t startTime = clock();
	answer = obj->isReachable(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p1 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	string p1;
	
	{
	// ----- test 0 -----
	string t0[] = {".W..","...."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {".W..","..W."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {".W..W..","...WWW."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"..","WW"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {".WWWW.","WWWWWW"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	string t0[] = {".W.W.W.","W.W.W.W"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	string t0[] = {".............................................W.",".............................................W."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(6, p0, true, p1) && all_right;
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
// Fox Ciel is going to take a path to meet her friends. The path is tiled with 1x1 square tiles. It is N tiles long and 2 tiles wide. If we imagine that the path is going from the left to the right, we can view it as a rectangle with 2 rows and N columns of tiles.
// The rows of the path are numbered 0 to 1 from top to bottom, and the columns of the path are numbered 0 to N-1 from left to right. Ciel starts at the tile in row 0, column 0. She has to reach the tile in row 0, column N-1.
// 
// In each step, Ciel can move to an adjacent tile. Two tiles are adjacent if they share at least one point (a side or a corner).
// 
// Because it rained yesterday, some tiles are covered by puddles of water. Ciel will not step on these tiles. You are given a vector <string> road. The j-th character of i-th element is 'W' if a tile at i-th row of j-th column is covered by  water, and '.' otherwise.
// 
// Return the string "YES" if she can move to her destination without entering a tile which is filled with water. Otherwise, return "NO".
// 
// DEFINITION
// Class:RainyRoad
// Method:isReachable
// Parameters:vector <string>
// Returns:string
// Method signature:string isReachable(vector <string> road)
// 
// 
// NOTES
// -The constraints guarantee that the starting tile and the destination tile are never covered by water.
// 
// 
// CONSTRAINTS
// -road will contain exactly 2 elements.
// -Each elements of road will contain between 2 and 50 characters, inclusive.
// -All elements of road will contain the same number of characters.
// -Each character of road will be either '.' or 'W'.
// -The first character and the last character of 0-th element of road will be '.'.
// 
// 
// EXAMPLES
// 
// 0)
// {".W.."
// ,"...."}
// 
// Returns: "YES"
// 
// One of the possible ways is as follows. Here, 'F' is the tile occupied by Fox Ciel.
// 
// "FW.."
// "...." 
// 
// ".W.."
// "F..." 
// 
// ".W.."
// ".F.."
// 
// ".W.."
// "..F."
// 
// ".W.F"
// "...."
// 
// 
// 1)
// {".W.."
// ,"..W."}
// 
// Returns: "YES"
// 
// 
// 
// 2)
// {".W..W.."
// ,"...WWW."}
// 
// Returns: "NO"
// 
// 
// 
// 3)
// {".."
// ,"WW"}
// 
// Returns: "YES"
// 
// 
// 
// 4)
// {".WWWW."
// ,"WWWWWW"}
// 
// Returns: "NO"
// 
// 
// 
// 5)
// {".W.W.W."
// ,"W.W.W.W"}
// 
// Returns: "YES"
// 
// 
// 
// 6)
// {".............................................W."
// ,".............................................W."}
// 
// Returns: "NO"
// 
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
