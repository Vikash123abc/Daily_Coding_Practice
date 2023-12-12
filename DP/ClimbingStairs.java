package DP;

import java.util.Scanner;


class ClimbingStairs {
public static int solve(int n){
       int prev = 1, curr = 1;
       for(int i = 2; i <= n; i++){
           int temp = prev;
           prev = curr;
           curr += temp;
       }
       return curr;
       
}
private static int getNumber(){
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter the number of steps: ");
     int n = sc.nextInt();
     sc.close();
     return n;
}
public static void main(String[] args){

   int n = getNumber();
   System.out.println("number of possibillities are:  " + solve(n));
}  
}