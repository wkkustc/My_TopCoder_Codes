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
#include <iterator>
#include <fstream>
using namespace std;

typedef long long  int64;
typedef vector<int> vi;
typedef string ST;
typedef stringstream SS;
typedef vector< vector <int> > vvi;
typedef pair<int,int> ii;
typedef vector <string> vs;

#define DEBUG(x)	cout << #x << " = " << x << "\n"
#define endl 		("\n")

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

#define Pf		printf
#define	Sf		scanf

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

/*
#ifdef DEBUG
	#undef DEBUG
#endif
#define DEBUG
*/

class Shuffling
{
public:
	int position(int cards, vector <int> shuffles);
};

pair <vi, vi > solve(const vi &top, const vi &bot, int n) {
	int tid = 0, bid = 0;
	vi newBot, newTop, tmp;
	while(n--)
		newBot.pb(bot[bid++]);

	while(bid < bot.size()) {
		tmp.pb(top[tid++]);
		tmp.pb(bot[bid++]);
	}
	forn(i, tmp.size()) {
		if(i < tmp.size()/2)
			newBot.pb(tmp[i]);
		else
			newTop.pb(tmp[i]);
	}
	while(tid < top.size())
		newTop.pb(top[tid++]);
	return mp(newTop, newBot);

}

int Shuffling::position (int cards, vector <int> shuffles) 
{
	vi top, bot;
	pair < vi, vi > tmp;
	forn(i, cards)
		if(i < cards/2)
			tmp.second.pb(i);
		else
			tmp.first.pb(i);
	
// first == top, second -> bot
	tr(it, shuffles)
		if(*it > 0)
			tmp = solve(tmp.first, tmp.second, *it);
		else
			tmp = solve(tmp.second, tmp.first, -*it);
	tr(it, tmp.second)
		if(*it == 0)
			return it - tmp.second.begin();
	tr(it, tmp.first)
		if(*it == 0)
			return it - tmp.first.begin() + cards/2;
	
	return -1;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}";
	cout << "]" << endl;
	Shuffling *obj;
	int answer;
	obj = new Shuffling();
	clock_t startTime = clock();
	answer = obj->position(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
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
	vector <int> p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = 10;
	int t1[] = {-2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 52;
	int t1[] = {1,17,12,26,9};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 10;
	int t1[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 5;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 100;
	int t1[] = {-50};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 50;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 100;
	int t1[] = {-48,-49,-2,10};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 95;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// 
// Before shuffling a deck of cards, you notice that the card on the bottom of the deck is an ace.
// Thinking that it may be advantageous to know where this ace ends up, you decide to keep track of its position in the deck while shuffling.
// 
// 
// 
// The shuffles will be given as a list of integers.
// A shuffle characterized by a positive integer, n, is performed as follows.  The deck is split into two halves of equal size, a top half and a bottom half.  n cards are dropped (in order) from the bottom of the bottom half of the deck.  Then, starting with the top half, cards are dropped one at a time from the bottom of each half, alternating between halves of the deck, until every card in the bottom half has been dropped.  At this point, there are n cards remaining in the top half of the deck, which are dropped in order.
// 
// 
// 
// A shuffle characterized by a negative integer is performed similarly, with the bottom and top halves of the deck reversed.
// 
// 
// 
// The following figures depict shuffles with values of 3 and -4, respectively, of a 12-card deck:
// 
// 
// 
// 
// 
// 
// 
// Given cards, the number of cards in the deck, and shuffles, a vector <int> characterizing each of the shuffles you perform, return the final position of the ace.  (A value of 0 indicates the bottom of the deck, and a value of cards-1 indicates the top of the deck.)
// 
// 
// DEFINITION
// Class:Shuffling
// Method:position
// Parameters:int, vector <int>
// Returns:int
// Method signature:int position(int cards, vector <int> shuffles)
// 
// 
// CONSTRAINTS
// -cards must be between 2 and 100, inclusive.
// -cards must be even.
// -shuffles must contain between 0 and 50 elements, inclusive.
// -The absolute value of each element of shuffles must be between 1 and cards/2, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 10
// { -2 }
// 
// Returns: 2
// 
// 1)
// 52
// { 1, 17, 12, 26, 9 }
// 
// Returns: 0
// 
// If all elements of shuffles are positive, then the bottom card remains at the bottom.
// 
// 2)
// 10
// { -1, -1, -1, -1, -1, -1, -1, -1, -1 }
// 
// Returns: 5
// 
// 3)
// 100
// { -50 }
// 
// Returns: 50
// 
// 4)
// 100
// { -48, -49, -2, 10 }
// 
// Returns: 95
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
