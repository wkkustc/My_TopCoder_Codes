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

class CorporationSalary
{
public:
	long long totalSalary(vector <string> relations);
};

long long salary[55];

vector <string> relation;
int N;

long long solve(int id) {
	long long &ret = salary[id];
	if(ret > -1)
		return ret;
	ret = 0;
	for(int i = 0; i < N; ++i) {
		if(relation[id][i] == 'Y')
			ret += solve(i);
	}
	ret =max(ret, 1ll);
	return ret;
}

long long CorporationSalary::totalSalary (vector <string> relations) 
{
	long long ret = 0;
	relation = relations;
	N = relation.size();

	memset(salary, -1, sizeof(salary));

	for(int i = 0; i < N; ++i) {
		ret += solve(i);
	}
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	CorporationSalary *obj;
	long long answer;
	obj = new CorporationSalary();
	clock_t startTime = clock();
	answer = obj->totalSalary(p0);
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
	long long p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"N"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"NNYN","NNYN","NNNN","NYYN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"NNNNNN","YNYNNY","YNNNNY","NNNNNN","YNYNNN","YNNYNN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 17ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"NYNNYN","NNNNNN","NNNNNN","NNYNNN","NNNNNN","NNNYYN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 8ll;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"NNNN","NNNN","NNNN","NNNN"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4ll;
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
// You are working in the HR department of a huge corporation. Each employee may have several direct managers and/or several direct subordinates. Of course, his subordinates may also have their own subordinates, and his direct managers may have their own managers. We say employee X is a boss of employee Y if there exists a sequence of employees A, B, ..., D, such that X is the manager of A, A is the manager of B, and so on, and D is the manager of Y (of course, if X is a direct manager of employee Y, X will be a boss of employee Y). If A is a boss of B, then B can not be a boss of A. According to the new company policy, the salary of an employee with no subordinates is 1. If an employee has any subordinates, then his salary is equal to the sum of the salaries of his direct subordinates.
// 
// You will be given a vector <string> relations, where the j-th character of the i-th element is 'Y' if employee i is a direct manager of employee j, and 'N' otherwise. Return the sum of the salaries of all the employees.
// 
// DEFINITION
// Class:CorporationSalary
// Method:totalSalary
// Parameters:vector <string>
// Returns:long long
// Method signature:long long totalSalary(vector <string> relations)
// 
// 
// CONSTRAINTS
// -relations will contain between 1 and 50 elements, inclusive. 
// -Each element of relations will contain the same number of characters, which is equal to number of elements in relations.
// -Each element of relations will contain only 'Y' or 'N'.
// -Character i of element i of relations will be 'N' for each i. 
// -If A is a boss of B, then B will not be a boss of A.
// 
// 
// EXAMPLES
// 
// 0)
// {"N"}
// 
// Returns: 1
// 
// Here we've got only one employee so the answer is 1.
// 
// 1)
// {"NNYN",
//  "NNYN",
//  "NNNN",
//  "NYYN"}
// 
// Returns: 5
// 
// There are 4 employees here. 0, 1 and 3 are managers of 2, and also 3 is a manager of 1. So:
// salary(2) = 1 
// salary(0) = salary(2) = 1
// salary(1) = salary(2) = 1 
// salary(3) = salary(2) + salary(1) = 2
// 
// 2)
// {"NNNNNN",
//  "YNYNNY",
//  "YNNNNY",
//  "NNNNNN",
//  "YNYNNN",
//  "YNNYNN"}
// 
// Returns: 17
// 
// 
// 
// 3)
// {"NYNNYN",
//  "NNNNNN",
//  "NNNNNN",
//  "NNYNNN",
//  "NNNNNN",
//  "NNNYYN"}
// 
// Returns: 8
// 
// 
// 
// 4)
// {"NNNN",
//  "NNNN",
//  "NNNN",
//  "NNNN"}
// 
// Returns: 4
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
