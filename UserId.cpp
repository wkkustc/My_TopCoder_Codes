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

class UserId
{
public:
	string id(vector <string> inUse, string first, string middle, string last);
};

string UserId::id (vector <string> inUse, string first, string middle, string last) 
{
	string ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, string p1, string p2, string p3, bool hasAnswer, string p4) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "\"" << p1 << "\"" << "," << "\"" << p2 << "\"" << "," << "\"" << p3 << "\"";
	cout << "]" << endl;
	UserId *obj;
	string answer;
	obj = new UserId();
	clock_t startTime = clock();
	answer = obj->id(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p4 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	
	vector <string> p0;
	string p1;
	string p2;
	string p3;
	string p4;
	
	{
	// ----- test 0 -----
	string t0[] = {"bjones","bjones03","bmjones","old34id"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Bob";
	p2 = "";
	p3 = "Jones";
	p4 = "bjones01";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"bjones","bjones03","bmjones","old34id"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Bob Mack";
	p2 = "Hertobise";
	p3 = "Jone's";
	p4 = "bhjones";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"bjonesto","bjones01","bjonesto","old34id"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "BoB-Mack";
	p2 = "Mo";
	p3 = "Jonestone";
	p4 = "BAD DATA";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"momorris","mmmm","momorr01"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "'m m";
	p2 = "";
	p3 = "O'Morrisy";
	p4 = "momorr02";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0.clear() /*{}*/;
	p1 = "'m m";
	p2 = "J.J";
	p3 = "O'Morrisy";
	p4 = "BAD DATA";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, true, p4) && all_right;
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
// Our system has thousands of users, each with a unique User Id.  When a
// new user needs an id, we want to assign his User Id based on his first,
// middle, and last name.  
// 
// We do not want to assign a User Id if the names were incorrectly entered.
// If the names are unreasonable we will return "BAD DATA". A name is judged
// to be unreasonable if it contains a character other than a letter ('a'-'z' or 'A'-'Z'), 
// an apostrophe ''', or a space character ' '.  It is also unreasonable if the first or 
// last name contains less than 2 letters ('a'-'z' or 'A'-'Z').
// 
// The algorithm for choosing a User Id is to choose the first rule below 
// that produces a User Id that has not already been assigned to another user.
// In each case, truncate the last name as needed so that the resulting User Id
// is no longer than 8 characters.
//         [first initial][last name]  
//         [first initial][middle initial][last name] 
//         [first initial][last name][digit][digit] 
// 
// Before we form the User Id, we will simply eliminate all apostrophes and space
// characters, and will change all uppercase letters to lowercase. If there is no middle
// name (or if the middle name contains no letters) then we must skip the second rule.
// When we apply the third rule, we will try the digit pairs in order starting 
// with 01 then 02 etc. until we find a previously unused User Id.
// 
// Create a class UserId that contains method id that takes a vector <string> inUse 
// containing all the User Id's that have already been assigned and strings first,
// middle, and last as input. It will return "BAD DATA" if the name data is 
// unreasonable, or will return the User Id generated by our algorithm.
// 
// 
// 
// 
// DEFINITION
// Class:UserId
// Method:id
// Parameters:vector <string>, string, string, string
// Returns:string
// Method signature:string id(vector <string> inUse, string first, string middle, string last)
// 
// 
// CONSTRAINTS
// -inUse will contain between 0 and 50 elements inclusive
// -each element of inUse will contain between 3 and 8 characters inclusive
// -each character in each element of inUse will be a lowercase letter 'a'-'z' or a digit '0'-'9'
// -first, middle, and last will each contain between 0 and 50 characters inclusive
// -first, middle, and last will contain only ascii characters 32-126 inclusive
// 
// 
// EXAMPLES
// 
// 0)
// {"bjones","bjones03","bmjones","old34id"}
// "Bob"
// ""
// "Jones"
// 
// Returns: "bjones01"
// 
// 
// 
//    Rule 1 generates "bjones" which is already taken.
//    Rule 2 does not apply when there is no middle name.
//    Rule 3 generates "bjones01", which is not already taken.
// 
// 
// 1)
// {"bjones","bjones03","bmjones","old34id"}
// 
//  "Bob Mack"
// "Hertobise"
// "Jone's" 
// 
// Returns: "bhjones"
// 
// Rule 1 generates "bjones" which is already taken
// Rule 2 generates "bhjones" which is available.
// 
// 2)
// {"bjonesto","bjones01","bjonesto","old34id"}
// 
// "BoB-Mack"
// "Mo"
// "Jonestone" 
// 
// Returns: "BAD DATA"
// 
// The hyphen in "BoB-Mack" is illegal.
// 
// 3)
// {"momorris","mmmm","momorr01"}
// "'m m"
// ""
// "O'Morrisy"
// 
// Returns: "momorr02"
// 
// The name is just barely reasonable because the first name has just the two letters required, and the middle name is allowed to be empty.
// 
// Rule 1 generates "momorris", which is already in use. Rule 2 cannot be applied since there is no middle name. So rule 3 is applied. 
// 
// 4)
// {}
// "'m m"
// "J.J"
// "O'Morrisy"
// 
// Returns: "BAD DATA"
// 
// The period in the middle name is not allowed.
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
