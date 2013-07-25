import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class HappyCells
{
	public int[] getHappy(String[] grid)
	{
		
	}
	
	// BEGIN KAWIGIEDIT TESTING
	// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
	private static boolean KawigiEdit_RunTest(int testNum, String[] p0, boolean hasAnswer, int[] p1) {
		System.out.print("Test " + testNum + ": [" + "{");
		for (int i = 0; p0.length > i; ++i) {
			if (i > 0) {
				System.out.print(",");
			}
			System.out.print("\"" + p0[i] + "\"");
		}
		System.out.print("}");
		System.out.println("]");
		HappyCells obj;
		int[] answer;
		obj = new HappyCells();
		long startTime = System.currentTimeMillis();
		answer = obj.getHappy(p0);
		long endTime = System.currentTimeMillis();
		boolean res;
		res = true;
		System.out.println("Time: " + (endTime - startTime) / 1000.0 + " seconds");
		if (hasAnswer) {
			System.out.println("Desired answer:");
			System.out.print("\t" + "{");
			for (int i = 0; p1.length > i; ++i) {
				if (i > 0) {
					System.out.print(",");
				}
				System.out.print(p1[i]);
			}
			System.out.println("}");
		}
		System.out.println("Your answer:");
		System.out.print("\t" + "{");
		for (int i = 0; answer.length > i; ++i) {
			if (i > 0) {
				System.out.print(",");
			}
			System.out.print(answer[i]);
		}
		System.out.println("}");
		if (hasAnswer) {
			if (answer.length != p1.length) {
				res = false;
			} else {
				for (int i = 0; answer.length > i; ++i) {
					if (answer[i] != p1[i]) {
						res = false;
					}
				}
			}
		}
		if (!res) {
			System.out.println("DOESN'T MATCH!!!!");
		} else if ((endTime - startTime) / 1000.0 >= 2) {
			System.out.println("FAIL the timeout");
			res = false;
		} else if (hasAnswer) {
			System.out.println("Match :-)");
		} else {
			System.out.println("OK, but is it right?");
		}
		System.out.println("");
		return res;
	}
	public static void main(String[] args) {
		boolean all_right;
		all_right = true;
		
		String[] p0;
		int[] p1;
		
		// ----- test 0 -----
		p0 = new String[]{"XXX","X.X","XXX"};
		p1 = new int[]{1,0,0};
		all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 1 -----
		p0 = new String[]{"."};
		p1 = new int[]{1,0,0};
		all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 2 -----
		p0 = new String[]{"XXXXXX","X.XXXX","XXX.XX","X..XXX","XXXXXX"};
		p1 = new int[]{1,1,1};
		all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 3 -----
		p0 = new String[]{"..."};
		p1 = new int[]{0,0,3};
		all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
		// ------------------
		
		if (all_right) {
			System.out.println("You're a stud (at least on the example cases)!");
		} else {
			System.out.println("Some of the test cases had errors.");
		}
	}
	// PROBLEM STATEMENT
	// Consider a rectangular grid of cells that is given by a String[] grid.  A cell marked with a 'X' character denotes an occupied cell, and a cell marked with a '.' character denotes an empty cell.  We say that two cells are orthogonal neighbors if they share a common side, and they are diagonal neighbors if they are adjacent to one another diagonally.
	// 
	// We say that a cell is 1-happy if the cell is empty and all of the cell's orthogonal and diagonal neighbors are occupied (note that a cell may have fewer than 8 neighbors).  A cell is 2-happy if the cell is empty and all of the cell's orthogonal neighbors are occupied, but one or more of its diagonal neighbors are empty.  A cell is 3-happy if the cell is empty and all of the cell's diagonal neighbors are occupied, but one or more of its orthogonal neighbors are empty.
	// 
	// Return a int[] with 3 elements.  The first element should be the number of 1-happy cells, the second element should be the number of 2-happy cells, and the third element should be the number of 3-happy cells.
	// 
	// DEFINITION
	// Class:HappyCells
	// Method:getHappy
	// Parameters:String[]
	// Returns:int[]
	// Method signature:int[] getHappy(String[] grid)
	// 
	// 
	// CONSTRAINTS
	// -grid will contain between 1 and 50 elements, inclusive.
	// -Each element of grid will contain between 1 and 50 characters, inclusive.
	// -Each element of grid will contain the same number of characters.
	// -Each character in grid will be either an uppercase 'X' or '.'
	// 
	// 
	// EXAMPLES
	// 
	// 0)
	// {
	// "XXX",
	// "X.X",
	// "XXX"
	// }
	// 
	// Returns: {1, 0, 0 }
	// 
	// The center cell is 1-happy.
	// 
	// 1)
	// {"."}
	// 
	// Returns: {1, 0, 0 }
	// 
	// Note that even though this cell has no neighbors, it is 1-happy because there are no neighbors to be empty.
	// 
	// 2)
	// {
	// "XXXXXX",
	// "X.XXXX",
	// "XXX.XX",
	// "X..XXX",
	// "XXXXXX"
	// }
	// 
	// Returns: {1, 1, 1 }
	// 
	// The uppermost empty cell is 1-happy, the empty cell on the third row is 2-happy, and the left cell on the fourth row is 3-happy.  Note that the right cell on the fourth row is not happy because it has both diagonal and orthogonal neighbors that are empty.
	// 
	// 3)
	// {"..."}
	// 
	// Returns: {0, 0, 3 }
	// 
	// Note that with no diagonal neighbors, there are no diagonal neighbors to be empty.  Thus, each cell is 3-happy.
	// 
	// END KAWIGIEDIT TESTING
}
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!