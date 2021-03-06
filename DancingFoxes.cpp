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

class DancingFoxes
{
public:
	int minimalDays(vector <string> friendship);
};

int dist[55][55];
vector <string> G;
int N;

int solve(int x, int y) {
	if(x == y)
		return 0;
	if(G[x][y] == 'Y')
		return 0;

	int& ret = dist[x][y];
	if(ret > -2)
		return ret;

	ret = -1;

	for(int i = 0; i < N; i++) 
		if(i != x && i != y) {
			int t1 = solve(x, i);
			int t2 = solve(i, y);
			if(t1 > -1 && t2 > -1) {
				if(ret == -1 || ret > max(t1, t2) + 1)
					ret = max(t1, t2) + 1;
			}
		}

	return ret;
}

int DancingFoxes::minimalDays (vector <string> friendship) 
{
	G = friendship;
	N = G.size(); 

	for(int i = 0; i < N; i++)
	       	for(int j = 0; j < N; j++)
		       	dist[i][j] = -2;

	cout << "N = " << N << "\n";  
	for(__typeof(G.begin()) it = G.begin(); it < G.end(); it++) 
		cout << *it << "\n";
	cout << "\n";

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) 
			printf("%2d ", solve(i, j)); 
		cout << "\n";
			
	}

	return solve(0, 1);
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
	DancingFoxes *obj;
	int answer;
	obj = new DancingFoxes();
	clock_t startTime = clock();
	answer = obj->minimalDays(p0);
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
	string t0[] = {"NNY","NNY","YYN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"NNNNN","NNYYY","NYNYY","NYYNY","NYYYN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"NNYYNN","NNNNYY","YNNNYN","YNNNNY","NYYNNN","NYNYNN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"NNYNNNNYN","NNNNYNYNN","YNNYNYNNN","NNYNYNYYN","NYNYNNNNY","NNYNNNYNN","NYNYNYNNN","YNNYNNNNY","NNNNYNNYN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"NY","YN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
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
// Fox Ciel and Fox Jiro both went to spend an evening in the dancing room.
// Together, there are N foxes in the room.
// The foxes are numbered 0 through N-1.
// In particular, Ciel is fox 0 and Jiro is fox 1.
// 
// 
// 
// You are given a vector <string> friendship that describes the initial friendship between the foxes in the room.
// More precisely, friendship contains N elements with N characters each.
// Character j of element i of friendship is 'Y' if foxes i and j are friends at the beginning of the evening, and 'N' otherwise.
// Note that friendship is symmetric: whenever X is a friend of Y, Y is a friend of X.
// 
// 
// 
// During the evening, multiple songs will be played in succession.
// During each song, some pairs of foxes will be dancing together.
// Foxes are not allowed to change partners during the dance.
// Thus in each dance each fox either dances with a single partner, or sits the dance out.
// 
// 
// 
// Foxes are not allowed to form the pairs for a dance arbitrarily.
// It is only allowed for two foxes to dance together if they are friends, or if they have a common friend who can introduce them.
// That is, if foxes A and B are not friends at the moment, they can only dance together if there is a fox C such that A and B are both friends with C.
// After two foxes dance together, they become friends.
// 
// 
// 
// Fox Ciel wants to become friends with Fox Jiro.
// Return the smallest number of dances in which this can be achieved (assuming that all other foxes cooperate and form pairs for the dances optimally).
// If it's impossible to make Ciel and Jiro friends, return -1 instead.
// 
// DEFINITION
// Class:DancingFoxes
// Method:minimalDays
// Parameters:vector <string>
// Returns:int
// Method signature:int minimalDays(vector <string> friendship)
// 
// 
// NOTES
// -Gender does not matter for the foxes when choosing their dance partners.
// 
// 
// CONSTRAINTS
// -N will be between 2 and 50, inclusive.
// -friendship will contain exactly N elements.
// -Each element of friendship will contain exactly N characters.
// -Each character in friendship will be 'Y' or 'N'.
// -For each i, friendship[i][i] = 'N'.
// -For each i and j, friendship[i][j] = friendship[j][i].
// 
// 
// EXAMPLES
// 
// 0)
// {"NNY",
//  "NNY",
//  "YYN"}
// 
// Returns: 1
// 
// There are 3 foxes. Ciel and Jiro are not friends, but they are both friends with fox 2. Thus, they may dance together in the first dance and become friends.
// 
// 1)
// {"NNNNN",
//  "NNYYY",
//  "NYNYY",
//  "NYYNY",
//  "NYYYN"}
// 
// Returns: -1
// 
// Ciel does not know any other fox at the dance, so she cannot dance with anybody.
// 
// 2)
// {"NNYYNN",
//  "NNNNYY",
//  "YNNNYN",
//  "YNNNNY",
//  "NYYNNN",
//  "NYNYNN"}
// 
// Returns: 2
// 
// 
// 
// 3)
// {"NNYNNNNYN",
//  "NNNNYNYNN",
//  "YNNYNYNNN",
//  "NNYNYNYYN",
//  "NYNYNNNNY",
//  "NNYNNNYNN",
//  "NYNYNYNNN",
//  "YNNYNNNNY",
//  "NNNNYNNYN"}
// 
// Returns: 3
// 
// 
// 
// 4)
// {"NY",
//  "YN"}
// 
// Returns: 0
// 
// Ciel and Jiro are already friends in the beginning, no dances are needed. In such a case, the correct return value is 0.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
