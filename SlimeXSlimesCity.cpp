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
#define	SZ(a)	int((a).size())

#define	all(c)	(c).begin(), (c).end()
#define	tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define	forn(i, n)	for(int i = 0; i < n; i++)
#define	forab(i, a, b)	for(int i = a; i <= b; i++)
#define	rep(i, a, b)	for(int i = a; i>=b; i--)

class SlimeXSlimesCity
{

	vi p;

	int X(int idx) {
		int64 sum = p[idx];

		forn(i, p.size())	if(i != idx)
		{
			if(p[i] > sum)
				return 0;
			sum += p[i];
		}
		return 1;
	}

public:
	int merge(vector <int> P)
	{
		int ret = 0;
		p = P;
		sort(p.begin(), p.end());

		forn(i, p.size())
			ret += X(i);
		
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
	SlimeXSlimesCity *obj;
	int answer;
	obj = new SlimeXSlimesCity();
	clock_t startTime = clock();
	answer = obj->merge(p0);
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
	int t0[] = {2,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,2,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {8,2,3,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1000000000,999999999,999999998,999999997};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {1,2,4,6,14,16,20};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
// NOTE: This problem statement contains images that may not display properly if viewed outside of the applet.
// 
// 
// You are playing a game titled Slimes City. You are managing several towns in this game.
// 
// 
// You have N towns in a region. For simplicity, they are named 0 through N-1. The population of town i is population[i].
// 
// 
// You are going to merge these towns to form one big city. The procedure is as follows. While the number of towns is more than one, pick two different towns, i and j. Delete these two towns and form a new one, with a population equal to the sum of the populations of towns i and j. The name of the newly formed town will be i if i had a larger population than j, or j if j had a larger population than i. If both of the original towns had the same population, either name can be chosen.
// 
// 
// When this process ends, one town remains. That town's name becomes the city's name. Return the number of different possible names for the resulting city.
// 
// DEFINITION
// Class:SlimeXSlimesCity
// Method:merge
// Parameters:vector <int>
// Returns:int
// Method signature:int merge(vector <int> population)
// 
// 
// CONSTRAINTS
// -population will contain between 2 and 50 elements, inclusive.
// -Each element of population will be between 1 and 1,000,000,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {2, 3, 4}
// 
// Returns: 2
// 
// 
// 
// If towns 0 and 1 are merged first, the city's name will be 1. Otherwise the city's name will be 2. It is illustrated by the following image that shows the only three possible ways to merge the cities.
// 
// 
// 
// 
// 1)
// {1, 2, 3}
// 
// Returns: 2
// 
// 
// 
// If town 2 is merged first (with town 0 or 1), the city's name will be 2. Otherwise, if towns 0 and 1 are merged first (to form a new town named 1, with a population of 3) and then the resulting town is merged with town 2, the city can be named either 1 or 2.  It's not possible for the city to be named 0.
// 
// 
// 
// 2)
// {8,2,3,8}
// 
// Returns: 2
// 
// There may be multiple towns with the same population.
// 
// 3)
// {1000000000, 999999999, 999999998, 999999997}
// 
// Returns: 3
// 
// 
// 
// 4)
// {1,1,1}
// 
// Returns: 3
// 
// 
// 
// 5)
// {1, 2, 4, 6, 14, 16, 20}
// 
// Returns: 3
// 
// 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
