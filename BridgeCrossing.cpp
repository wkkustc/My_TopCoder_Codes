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

int n;
vi times;
const bool L = false, R = true;
int m[9010];

bool getPos(int x, int idx) {
	return x & (1<<idx);
}

int setPos(int x, int idx){
	return x^(1<<idx);
}

bool getSide(int x) {
	return getPos(x, 10);
}

int setSide(int x) {
	return setPos(x, 10);
}

bool checkEnd(int x) {
	if(getSide(x) == R)
		return false;
	forn(i, n)
		if(getPos(x, i) == R)
			return false;
	cout << "Check condition satisfied for x = " << x << endl; 
	return true;
}

int solve(int x ) {
	if(m[x] > -1)
		return m[x];
	int &ans = m[x];
	ans = 1<<20;

	if(checkEnd(x))
		return ans = 0;

	if(getSide(x) == L) {
		forn(i, n)	if(getPos(x, i) == L) {
			int tmp = setPos(x, i);
			ans = min(ans, solve(tmp) + times[i]);
		}
	}
	else {
		forn(i, n)	if(getPos(x, i) == R) {
			forab(j, i+1, n-1)	if(getPos(x, j) == R) {
				int tmp = setPos(x, i);
				ans = min(ans, solve(tmp) + max(times[i], times[j]));
			}
		}
	}
	return ans;
}

class BridgeCrossing
{
public:
	int minTime(vector <int> _times)
	{
		times = _times;
		n = times.size();
		CL(m, -1);
		m[0] = 0;
		if(n == 1)
			return times[1];

		int val = 0;
		forn(i, n)
			n = setPos(val, i);
		val = setSide(val);
		return solve(val);

		int ret;
		
		return ret;
	}
};

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
	BridgeCrossing *obj;
	int answer;
	obj = new BridgeCrossing();
	clock_t startTime = clock();
	answer = obj->minTime(p0);
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
	int t0[] = {1,2,5,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 17;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
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
// A well-known riddle goes like this: Four people are crossing an old bridge. The bridge cannot hold more than two people at once. It is dark, so they can't walk without a flashlight, and they only have one flashlight! Furthermore, the time needed to cross the bridge varies among the people in the group. For instance, let's say that the people take 1, 2, 5 and 10 minutes to cross the bridge. When people walk together, they always walk at the speed of the slowest person. It is impossible to toss the flashlight across the bridge, so one person always has to go back with the flashlight to the others. What is the minimum amount of time needed to get all the people across the bridge?
// 
// In this instance, the answer is 17. Person number 1 and 2 cross the bridge together, spending 2 minutes. Then person 1 goes back with the flashlight, spending an additional one minute. Then person 3 and 4 cross the bridge together, spending 10 minutes. Person 2 goes back with the flashlight (2 min), and person 1 and 2 cross the bridge together (2 min). This yields a total of 2+1+10+2+2 = 17 minutes spent.
// 
// You want to create a computer program to help you solve new instances of this problem. Given an vector <int> times, where the elements represent the time each person spends on a crossing, your program should return the minimum possible amount of time spent crossing the bridge.
// 
// DEFINITION
// Class:BridgeCrossing
// Method:minTime
// Parameters:vector <int>
// Returns:int
// Method signature:int minTime(vector <int> times)
// 
// 
// NOTES
// -In an optimal solution, exactly two people will be sent across the bridge with the flashlight each time (if possible), and exactly one person will be sent back with the flashlight each time.  In other words, in an optimal solution, you will never send more than one person back from the far side at a time, and you will never send less than two people across to the far side each time (when possible).
// 
// 
// CONSTRAINTS
// -times will have between 1 and 6 elements, inclusive.
// -Each element of times will be between 1 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// { 1, 2, 5, 10 }
// 
// Returns: 17
// 
// The example from the text.
// 
// 1)
// { 1, 2, 3, 4, 5 }
// 
// Returns: 16
// 
// One solution is: 1 and 2 cross together (2min), 1 goes back (1min), 4 and 5 cross together (5min), 2 goes back (2min), 1 and 3 cross together (3min), 1 goes back (1min), 1 and 2 cross together (2min). This yields a total of 2 + 1 + 5 + 2 + 3 + 1 + 2 = 16 minutes spent.
// 
// 2)
// { 100 }
// 
// Returns: 100
// 
// Only one person crosses the bridge once.
// 
// 3)
// { 1, 2, 3, 50, 99, 100 }
// 
// Returns: 162
// 
// END KAWIGIEDIT TESTING



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
