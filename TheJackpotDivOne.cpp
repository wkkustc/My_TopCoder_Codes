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
#define	CL(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

#if (0 or defined ONLINE_JUDGE)
	#define DEBUG
#else 
	#define DEBUG(x)	cout << #x << " = " << x << "\n"
#endif

class TheJackpotDivOne
{
public:
	vector<long long> find(vector<long long> money, long long jackpot);
};

int64 av(vector <long long> & money) {
	int64 sum = 0, mod = 0;
	tr(it, money) {
		sum += *it/money.size();
		mod += *it % (int64)money.size();
	}
	return sum + 1 + (mod / money.size());
}

void solve(vector <int64> & money, int64 & jackpot) {
	int idx = min_element(all(money)) - money.begin();
	int64 ave = av(money);
	int64 req = min(jackpot, ave - money[idx]);

	jackpot -= req;
	money[idx] += req;
}

vector<long long> TheJackpotDivOne::find (vector<long long> money, long long jackpot) 
{
	int cnt = 0;
	sort(all(money));

	while(jackpot > 0 && *min_element(all(money)) != *max_element(all(money))) {
		cnt++;
		solve(money, jackpot);
	}
	DEBUG(cnt);
	int64 av = jackpot / money.size();

	tr(it, money) {
		*it += av;
		jackpot -= av;
	}

	forn(i, money.size())
		solve(money, jackpot);

	sort(all(money));
	return money;

}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector<long long> p0, long long p1, bool hasAnswer, vector<long long> p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	TheJackpotDivOne *obj;
	vector<long long> answer;
	obj = new TheJackpotDivOne();
	clock_t startTime = clock();
	answer = obj->find(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p2.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p2[i];
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << answer[i];
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p2.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p2[i]) {
					res = false;
				}
			}
		}
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
	
	vector<long long> p0;
	long long p1;
	vector<long long> p2;
	
	{
	// ----- test 0 -----
	long long t0[] = {1ll,2ll,3ll,4ll};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2ll;
	long long t2[] = {2ll,3ll,3ll,4ll};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	long long t0[] = {4ll};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7ll;
	long long t2[] = {11ll};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	long long t0[] = {4ll,44ll,7ll,77ll};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 47ll;
	long long t2[] = {24ll,34ll,44ll,77ll};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	long long t0[] = {4ll,10ll,8ll,3ll,6ll,5ll,8ll,3ll,7ll,5ll};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1000ll;
	long long t2[] = {105ll,106ll,106ll,106ll,106ll,106ll,106ll,106ll,106ll,106ll};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	long long t0[] = {699085108043528729ll,712159816824889738ll,955333392923506302ll,824815726724562276ll,201243198940762441ll,890074013601085831ll,856280423905582773ll,652869772991442089ll,456424450107247762ll,481552162171757726ll,433983913446941400ll,589533240618970779ll,818688009567563283ll,785702044492944871ll,190360345644731728ll,647032252659235390ll,113369882957256831ll,761824690082198585ll,911259649954335014ll};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 686829780455608122ll;
	long long t2[] = {201243198940762441ll,359949898759778599ll,433983913446941400ll,456424450107247762ll,481552162171757726ll,589533240618970779ll,630610110297818082ll,647032252659235390ll,652869772991442089ll,699085108043528729ll,712159816824889738ll,761824690082198585ll,785702044492944871ll,818688009567563283ll,824815726724562276ll,856280423905582773ll,890074013601085831ll,911259649954335014ll,955333392923506302ll};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	long long t0[] = {978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,978260869565217391ll,1000000000000000000ll};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1000000000000000000ll;
	long long t2[] = {999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,999999999999999999ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll,1000000000000000000ll};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
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
// John has recently won a jackpot, but he doesn't need the money.
// He decided to share it with his friends instead.
// He knows how much money each of his friends has, and he will use this information to perform the distribution.
// While he still has money left, he will repeat the following steps:
// 
// Calculate the average amount of money each of his friends has.  Call this value A.
// Choose the poorest friend.  If there are multiple poorest friends, choose one of them randomly.  P is the amount of money owned by the chosen friend.
// Determine the value of X, where X is the smallest integer such that P + X is strictly greater than A.
// If John has at least X dollars, give X dollars to the chosen friend.  Otherwise, give all the remaining money to that friend.
// 
// 
// 
// 
// You are given a long long jackpot, the number of dollars John has won, and a vector<long long> money, where the i-th element is the number of dollars currently owned by the i-th friend.
// Return a vector<long long> containing the same number of elements as money.
// The return value must contain the number of dollars owned by each friend after John has performed the above distribution, sorted in non-decreasing order.
// 
// 
// 
// DEFINITION
// Class:TheJackpotDivOne
// Method:find
// Parameters:vector<long long>, long long
// Returns:vector<long long>
// Method signature:vector<long long> find(vector<long long> money, long long jackpot)
// 
// 
// CONSTRAINTS
// -money will contain between 1 and 47 elements, inclusive.
// -Each element of money will be between 1 and 10^18, inclusive.
// -jackpot will be between 1 and 10^18, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1, 2, 3, 4}
// 2
// 
// Returns: {2, 3, 3, 4 }
// 
// The average is 2.5. John will give all his money to the first friend with a single action.
// 
// 1)
// {4}
// 7
// 
// Returns: {11 }
// 
// There is just one friend here.
// 
// 2)
// {4, 44, 7, 77}
// 47
// 
// Returns: {24, 34, 44, 77 }
// 
// Iniitially, the average is 33, so John will give 30 dollars to the first friend, who will then have 34 dollars total.  The average then becomes 40.5, and John will give the rest of the money to the third friend.
// 
// 3)
// {4, 10, 8, 3, 6, 5, 8, 3, 7, 5}
// 1000
// 
// Returns: {105, 106, 106, 106, 106, 106, 106, 106, 106, 106 }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!