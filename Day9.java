//Question 1 Link--> https://www.hackerrank.com/challenges/java-string-compare/problem
import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        int l =s.length();
        String smallest = "z";
        String largest = "A";
        for(int i=0;i<(l-k+1);i++)
        {
            String temp=s.substring(i,i+k);
            int out = temp.compareTo(smallest);
            if(out<0)
            {
                smallest=temp;
            }
            out=temp.compareTo(largest);
            if(out>0)
            {
                largest=temp;
            }
        }
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}

//Question 2 Link--> https://www.hackerrank.com/challenges/java-string-reverse/problem
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        StringBuilder sb=new StringBuilder(A);
        /* Enter your code here. Print output to STDOUT. */
        sb.reverse();
       
        String s2=sb.toString();
        int out=A.compareTo(s2);
    
        if(out==0)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}



