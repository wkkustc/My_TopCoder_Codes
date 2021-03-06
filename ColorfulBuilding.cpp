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

class ColorfulBuilding
{
public:
	int count(vector <string> color1, vector <string> color2, int L);
};

int ColorfulBuilding::count (vector <string> color1, vector <string> color2, int L) 
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
bool KawigiEdit_RunTest(int testNum, vector <string> p0, vector <string> p1, int p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}" << "," << p2;
	cout << "]" << endl;
	ColorfulBuilding *obj;
	int answer;
	obj = new ColorfulBuilding();
	clock_t startTime = clock();
	answer = obj->count(p0, p1, p2);
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
	
	vector <string> p0;
	vector <string> p1;
	int p2;
	int p3;
	
	{
	// ----- test 0 -----
	string t0[] = {"aaba"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"aaaa"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 3;
	p3 = 6;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"aaba"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"aaba"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 4;
	p3 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"ab","ba","a","aab"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"bb","ba","a","aba"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 5;
	p3 = 432;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"xxxxxxxxxxxxxxxxxxxx","xxxxxxxxxxxxxxxxxxxx","xxOOOOOOOOOOOOOOOOxx","xxOOOOOOOOOOOOOOOOxx","xxOOxxxxxxxxxxxxxxxx","xxOOxxxxxxxxxxxxxxxx","xxOOxxxxxxxxxxxxxxxx","xxOOxxxxxxxxxxxxxxxx","xxOOxxxxxxxxxxxxxxxx","xxOOxxxxxxxxxxxxxxxx","xxOOxxxxxxxxxxxxxxxx","xxOOOOOOOOOOOOOOOOxx","xxOOOOOOOOOOOOOOOOxx","xxxxxxxxxxxxxxxxOOxx","xxxxxxxxxxxxxxxxOOxx","xxxxxxxxxxxxxxxxOOxx","xxxxxxxxxxxxxxxxOOxx","xxxxxxxxxxxxxxxxOOxx","xxxxxxxxxxxxxxxxOOxx","xxxxxxxxxxxxxxxxOOxx","xxOOOOOOOOOOOOOOOOxx","xxOOOOOOOOOOOOOOOOxx","xxxxxxxxxxxxxxxxxxxx","xxxxxxxxxxxxxxxxxxxx"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"xxxxxxxxxxxxxxxxxxxx","xxxxxxxxxxxxxxxxxxxx","xxOOOOOOOOOOOOOOOOxx","xxOOOOOOOOOOOOOOOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOOOOOOOOOOOOOOOxx","xxOOOOOOOOOOOOOOOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOxxxxxxxxxxxxOOxx","xxOOOOOOOOOOOOOOOOxx","xxOOOOOOOOOOOOOOOOxx","xxxxxxxxxxxxxxxxxxxx","xxxxxxxxxxxxxxxxxxxx"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 58;
	p3 = 619787617;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"SJXcabKTWeUXhwxGixFepQaQlFxrAedNAtVP","gorBIkcTlOFbLDbFeElYAyAqszQdMbpxSRdE","SQVHPehlNtesbJDflyGxMqvgzjXisRnqDcQO","pIAEBwbmpPWCooQAujbGXFGLvXxTmExLARkf","AFnWyWKVObfxDGCjTxdZaObgwdxlPKtIxaAd","uznMpJVNjAofbHJjOrZeSHgSagOCUMGbvkVR","LBRrDbTAyKfVnedKiRfzgRzECpcsziqaTwdo","JrJHvsEVVGDkNVGqLbpxyLDPloBuNDQKnReI","SSYpbjKHSCnQhuyYrVauWDHDyhAoGyecrZMv","UdetQfWEUWHHuAxRSdkJOOJSixKpQXpCFZHO","KXVsQbuQtIgsULOMsTvPFNUqkBldMTLCipYK","hoXConjnDWQkZVtyZlwSedvdVrNWqQhGUClQ","TpsvvyoXsXmQpBAGGVDrXCkodoRHQZmpoQDW","csiJspzTqeFBRmPgeEtTAzfrfCGlTZqcPuyO","vsPDVBJVaJmUAtDdcsKoUkPEbDmAwtZKwjjP","MOfoMhMiKIvGQoeIJXHzyClWRtRuKXMqxUAF","KyyUCkRBjsYvmPFFEGBqqVhIUdtvIyyLacfu","BfuwfSajSlcuTzhMufHSQLudvGEGlyHsEmBD","PLpIXZkdyXveTMfSvqnDGKWOZrTBMUIlZrqF","dzVMCqrSLbanRJTYpDJNHAOLPSzmvSEPQJYm","rAjRkrSjouJyFaCSPPLYSzqDmMoADyWAbobJ","eOCBrJNoyFnGpXpxiExXcoOHnVsaEPXhPfLe","XMjRksnxWssPEINhdhbiLBSYpCLtwNshFjXS","HnnDeUAbuswsgsYQuAaXySLkFYUwFXwYTreM","uqLnwOEGbwZZDgAAWEdLRZxFlogDmlhjhgHM","NcfaQsgPQfirkYDRFrLQpySmB"
			"GfRHumKULZf","mOpmmgclsxRzXskEywfryqCRyATNoJwnlHiD","AnoKoKAjrasttjNlHCROnvTJMhEHlVPVoVMo","yegLyIuRkkENFAjwzDoPLKjgUHHEkfzYDIpo","EcxRGGfuaBXUFXkSxctJWOLmmVbvoMkWtTvV","nBMkOBHgaltEVzfyGxseGhmBscfGIbxFbqRn","GvkEcLtqdOofGtsbWDafVMbNdJxsffKDzSiR","jhZQUVzTzalrZcebvyqPWtOUUyniBKTWdyLi","ODJLQPMdjDdTlxrfGsNmBfeGYjzeXApqKDhJ","vlJkWMzdVQujKdLViQClOrJXMTBkuZEasFgg","FAsbuzrLVIgaryqXBfuBRAbReleXSSgEKSvt"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"XAhlUHtfjOpOlQlowWppQcodMGUiqoLobxnD","IDzGlKrHiVGdBjZxIcoxjwagbWieKvUwZrjg","SkpkTVeIFeoNQzUUgmYAYskKONNZdgXxSiWd","rXBGhTmqnvxkmqiutoDzPusDiOUggEFXGCzm","fzrxVuTbFXunGbeEavjshmrIRlDorTuISCxn","LsvIaxTkOBjcskiekmrKNNFEXqnfMNXLWqqu","ekzxGIlbJPVEQPYAbTuMtZKsCiubDXDiBVzU","hZuOCJxvBOYENGSFcUiKKAKfCdebutVmnyvB","UveNkKRQmHnedrROQOpHJfrHjwcNLUShlDbn","ptUkvbaGDryHRkYfHKLkSgVpjWCEcgazyxGK","nVPYEqTTJsRPjzjfdOiULhnZPFeNcnbXaQlk","IPXBXRhMQIkxpygsgbcRfMuvIcuzUPPHGOWX","yWWlNyEyqZSIOXBFAybIuFpVqpvmKRaRFrAE","EvBJVtHvKhjrFcmtpdBbFTdTVtXXZQKAglKT","bCVjHzUvyINFkxXageZQMzCyNhcifACdJVDh","lZITYcDSeIbLweyFtoMAfOQyBNupKlhcNpgo","BduslNrJdWOUukYFFidEkMFaghfofpxVgvJd","YrJpDZKqdjEPzdLsOQEdkcrBfNHPemXHokCW","GjeUKSGjDlgKTyUGNrMQbBLxRUcgrWpkAwOD","wgxTcswqdJHaDugNIRMvrhBsdDaJAssVbSRW","qmVmqFEpvgGioMXDSFqEoQcDOAaUoGPEovSO","KrukPlpfOhawaovCfteTSCIdLMrtImVtiMyQ","ykwmxHsKMFzFHwcbyyedLvhZPnaNGqJMMCxd","HUNYCXjNLQIFCLLGpCXHBCHLTxLynBxnHFbx","uwjzbNbJepVFgMPUXVirxYHzExquBEtPmKju","xXAxAbJePyUsVHeLytDvAxBGM"
			"RtnvCEiZZqe","xMkQoIVxWPXPgaOYmDjTOXiMImVdzojERNxS","dwICFwMAmdOIUxyAdXdshasnzwyhfnVWVqZJ","etypXNVvSTEQvriGBZdSGmDEHhvpSqkFklCS","YkxpFBCRYUueRcKaJUXVdaMoYMYEooPQVMOr","DTrexDqclZNKdPuTRFHualJSFziCLPCZjpxo","TfEijcAsSJPikkmBSbXMqYHAhPTcpcKVSkIX","xKXHYPYMJxFpSbxltDKYuRiTkOLxpQKnXZPs","YFYuvuYHfpFJcrLNIdlNfBxRnWdppsdalBkx","NFTysBvNFjejdnlhRTclbcfGipNCxpFEOriY","thkgVflJYmbUYbIlafNUMGePQWiZyYzYXvUR"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1200;
	p3 = 396065426;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
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
// There are N skyscrapers standing in a line from left to right.
// The buildings are numbered 1 through N, in some order (not necessarily from left to right).
// You do not know this order.
// For each i, the height of building i is i.
// Thus, the heights of the N buildings form a permutation of 1 through N.
// 
// Each of the buildings is painted using a single color.
// Multiple buildings may share the same color.
// For each i, you know the color of building i.
// (The technical details are specified below.)
// 
// You are standing far to the left of all the buildings.
// From your location, you can only see parts of some buildings, because smaller buildings farther from you are obscured by taller ones that are closer.
// Formally, you can see (some top part of) building X if and only if all of the buildings in front of X (that is, to the left of X in the row) are lower than building X.
// 
// Additionally, from where you are standing you cannot distinguish between two buildings that have the same color.
// More precisely, whenever you see two buildings with heights H1 and H2 (H1 < H2) such that they both have the same color and you can see no building that stands between them, they seem to you as one building.
// This also naturally extends to more than two buildings of the same color.
// 
// You think you now see L buildings.
// In other words, as you look at the buildings from where you are standing, you see exactly L-1 places where the color changes.
// 
// You are given vector <string>s color1 and color2, and the int L.
// The vector <string>s color1 and color2 can be used to determine the colors of buildings in the following way:
// Concatenate all elements of color1 to obtain a string C1.
// Concatenate all elements of color2 to obtain a string C2.
// The strings C1 and C2 will each have exactly N characters.
// Now, for each i and j: buildings i and j have the same color if and only if both C1[i-1]=C1[j-1] and C2[i-1]=C2[j-1].
// In other words, for each i the color of building i is described by the two-character string C1[i-1] + C2[i-1].
// 
// Given this information, compute and return the number of possible orders of the N buildings, modulo 1,000,000,009.
// 
// DEFINITION
// Class:ColorfulBuilding
// Method:count
// Parameters:vector <string>, vector <string>, int
// Returns:int
// Method signature:int count(vector <string> color1, vector <string> color2, int L)
// 
// 
// CONSTRAINTS
// -color1 and color2 will each contain between 1 and 36 elements, inclusive.
// -color1 and color2 will contain the same number of elements.
// -Each element of color1 and color2 will contain between 1 and 36 characters, inclusive.
// -For each i, the i-th elements of color1 and color2 will contain the same number of characters.
// -Each character of each element of color1 and color2 will be a lowercase or an uppercase letter ('a'-'z' or 'A'-'Z').
// -L will be between 1 and N, where N is the total number of characters in color1.
// 
// 
// EXAMPLES
// 
// 0)
// {"aaba"}
// {"aaaa"}
// 3
// 
// Returns: 6
// 
// There are 4 buildings.
// Buildings 1, 2, and 4 share the same color, building 3 is different.
// 
// There are 6 valid orders of buildings (from left to right):
// 
// 1, 2, 3, 4
// 1, 3, 2, 4
// 1, 3, 4, 2
// 2, 1, 3, 4
// 2, 3, 1, 4
// 2, 3, 4, 1
// 
// Note that if the buildings stand in the order 1, 2, 3, 4, you can see all four buildings.
// However, as buildings 1 and 2 have the same color, you regard them as one building.
// Therefore, you think you see 3 buildings.
// 
// 1)
// {"aaba"}
// {"aaba"}
// 4
// 
// Returns: 0
// 
// For each possible order of these buildings you will think you see at most 3 buildings.
// 
// 2)
// {"ab", "ba", "a", "aab"}
// {"bb", "ba", "a", "aba"}
// 5
// 
// Returns: 432
// 
// Make sure to concatenate all the elements of color1 and color2.
// 
// 
// 3)
// {"xxxxxxxxxxxxxxxxxxxx",
//  "xxxxxxxxxxxxxxxxxxxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOxxxxxxxxxxxxxxxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxxxxxxxxxxxxxxxOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxxxxxxxxxxxxxxxxxxx",
//  "xxxxxxxxxxxxxxxxxxxx"}
// {"xxxxxxxxxxxxxxxxxxxx",
//  "xxxxxxxxxxxxxxxxxxxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOxxxxxxxxxxxxOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxOOOOOOOOOOOOOOOOxx",
//  "xxxxxxxxxxxxxxxxxxxx",
//  "xxxxxxxxxxxxxxxxxxxx"}
// 58
// 
// Returns: 619787617
// 
// 
// 
// 4)
// {"SJXcabKTWeUXhwxGixFepQaQlFxrAedNAtVP",
//  "gorBIkcTlOFbLDbFeElYAyAqszQdMbpxSRdE",
//  "SQVHPehlNtesbJDflyGxMqvgzjXisRnqDcQO",
//  "pIAEBwbmpPWCooQAujbGXFGLvXxTmExLARkf",
//  "AFnWyWKVObfxDGCjTxdZaObgwdxlPKtIxaAd",
//  "uznMpJVNjAofbHJjOrZeSHgSagOCUMGbvkVR",
//  "LBRrDbTAyKfVnedKiRfzgRzECpcsziqaTwdo",
//  "JrJHvsEVVGDkNVGqLbpxyLDPloBuNDQKnReI",
//  "SSYpbjKHSCnQhuyYrVauWDHDyhAoGyecrZMv",
//  "UdetQfWEUWHHuAxRSdkJOOJSixKpQXpCFZHO",
//  "KXVsQbuQtIgsULOMsTvPFNUqkBldMTLCipYK",
//  "hoXConjnDWQkZVtyZlwSedvdVrNWqQhGUClQ",
//  "TpsvvyoXsXmQpBAGGVDrXCkodoRHQZmpoQDW",
//  "csiJspzTqeFBRmPgeEtTAzfrfCGlTZqcPuyO",
//  "vsPDVBJVaJmUAtDdcsKoUkPEbDmAwtZKwjjP",
//  "MOfoMhMiKIvGQoeIJXHzyClWRtRuKXMqxUAF",
//  "KyyUCkRBjsYvmPFFEGBqqVhIUdtvIyyLacfu",
//  "BfuwfSajSlcuTzhMufHSQLudvGEGlyHsEmBD",
//  "PLpIXZkdyXveTMfSvqnDGKWOZrTBMUIlZrqF",
//  "dzVMCqrSLbanRJTYpDJNHAOLPSzmvSEPQJYm",
//  "rAjRkrSjouJyFaCSPPLYSzqDmMoADyWAbobJ",
//  "eOCBrJNoyFnGpXpxiExXcoOHnVsaEPXhPfLe",
//  "XMjRksnxWssPEINhdhbiLBSYpCLtwNshFjXS",
//  "HnnDeUAbuswsgsYQuAaXySLkFYUwFXwYTreM",
//  "uqLnwOEGbwZZDgAAWEdLRZxFlogDmlhjhgHM",
//  "NcfaQsgPQfirkYDRFrLQpySmBGfRHumKULZf",
//  "mOpmmgclsxRzXskEywfryqCRyATNoJwnlHiD",
//  "AnoKoKAjrasttjNlHCROnvTJMhEHlVPVoVMo",
//  "yegLyIuRkkENFAjwzDoPLKjgUHHEkfzYDIpo",
//  "EcxRGGfuaBXUFXkSxctJWOLmmVbvoMkWtTvV",
//  "nBMkOBHgaltEVzfyGxseGhmBscfGIbxFbqRn",
//  "GvkEcLtqdOofGtsbWDafVMbNdJxsffKDzSiR",
//  "jhZQUVzTzalrZcebvyqPWtOUUyniBKTWdyLi",
//  "ODJLQPMdjDdTlxrfGsNmBfeGYjzeXApqKDhJ",
//  "vlJkWMzdVQujKdLViQClOrJXMTBkuZEasFgg",
//  "FAsbuzrLVIgaryqXBfuBRAbReleXSSgEKSvt"}
// {"XAhlUHtfjOpOlQlowWppQcodMGUiqoLobxnD",
//  "IDzGlKrHiVGdBjZxIcoxjwagbWieKvUwZrjg",
//  "SkpkTVeIFeoNQzUUgmYAYskKONNZdgXxSiWd",
//  "rXBGhTmqnvxkmqiutoDzPusDiOUggEFXGCzm",
//  "fzrxVuTbFXunGbeEavjshmrIRlDorTuISCxn",
//  "LsvIaxTkOBjcskiekmrKNNFEXqnfMNXLWqqu",
//  "ekzxGIlbJPVEQPYAbTuMtZKsCiubDXDiBVzU",
//  "hZuOCJxvBOYENGSFcUiKKAKfCdebutVmnyvB",
//  "UveNkKRQmHnedrROQOpHJfrHjwcNLUShlDbn",
//  "ptUkvbaGDryHRkYfHKLkSgVpjWCEcgazyxGK",
//  "nVPYEqTTJsRPjzjfdOiULhnZPFeNcnbXaQlk",
//  "IPXBXRhMQIkxpygsgbcRfMuvIcuzUPPHGOWX",
//  "yWWlNyEyqZSIOXBFAybIuFpVqpvmKRaRFrAE",
//  "EvBJVtHvKhjrFcmtpdBbFTdTVtXXZQKAglKT",
//  "bCVjHzUvyINFkxXageZQMzCyNhcifACdJVDh",
//  "lZITYcDSeIbLweyFtoMAfOQyBNupKlhcNpgo",
//  "BduslNrJdWOUukYFFidEkMFaghfofpxVgvJd",
//  "YrJpDZKqdjEPzdLsOQEdkcrBfNHPemXHokCW",
//  "GjeUKSGjDlgKTyUGNrMQbBLxRUcgrWpkAwOD",
//  "wgxTcswqdJHaDugNIRMvrhBsdDaJAssVbSRW",
//  "qmVmqFEpvgGioMXDSFqEoQcDOAaUoGPEovSO",
//  "KrukPlpfOhawaovCfteTSCIdLMrtImVtiMyQ",
//  "ykwmxHsKMFzFHwcbyyedLvhZPnaNGqJMMCxd",
//  "HUNYCXjNLQIFCLLGpCXHBCHLTxLynBxnHFbx",
//  "uwjzbNbJepVFgMPUXVirxYHzExquBEtPmKju",
//  "xXAxAbJePyUsVHeLytDvAxBGMRtnvCEiZZqe",
//  "xMkQoIVxWPXPgaOYmDjTOXiMImVdzojERNxS",
//  "dwICFwMAmdOIUxyAdXdshasnzwyhfnVWVqZJ",
//  "etypXNVvSTEQvriGBZdSGmDEHhvpSqkFklCS",
//  "YkxpFBCRYUueRcKaJUXVdaMoYMYEooPQVMOr",
//  "DTrexDqclZNKdPuTRFHualJSFziCLPCZjpxo",
//  "TfEijcAsSJPikkmBSbXMqYHAhPTcpcKVSkIX",
//  "xKXHYPYMJxFpSbxltDKYuRiTkOLxpQKnXZPs",
//  "YFYuvuYHfpFJcrLNIdlNfBxRnWdppsdalBkx",
//  "NFTysBvNFjejdnlhRTclbcfGipNCxpFEOriY",
//  "thkgVflJYmbUYbIlafNUMGePQWiZyYzYXvUR"}
// 
// 1200
// 
// Returns: 396065426
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
