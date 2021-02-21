using System;

public static class Summation 
{
    // Returns the sum of the series 
    public static int summation(int num)
    {
        // Variable to store the sum
      int sum=0;

      for (int i = 1; i<=num;i++)
        sum+=i;

        
      return sum;
    }
}