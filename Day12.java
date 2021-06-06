//Question 1 Link--> https://www.hackerrank.com/challenges/java-negative-subarray/problem
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                sum=sum+arr[j];
                if(sum<0)
                {
                     ans++; 
                }   
            }
            sum=0;
        }
        System.out.println(ans);
    }
}
