//Question 1 Link--> https://www.hackerrank.com/challenges/pattern-syntax-checker/problem
import java.util.Scanner;
import java.util.regex.*;

public class Solution
{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		while(in.hasNextLine()){
            try{
			String pattern = in.nextLine();
                  Pattern p = Pattern.compile(pattern);
                  System.out.println("Valid");
              }catch(PatternSyntaxException e){
                  System.out.println("Invalid");
              }
		}
	}
}