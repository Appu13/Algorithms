     public class SumInRange
  {
     public int GetSum(int a, int b)
     {
       // Intialize the value of sum
       int sum = 0;
       // Find the bigger of the two numbers
       int max = Math.max(a,b);
       // Find the smaller of the two numbers
       int min = Math.min(a,b);
 
       // Iterate from small to maximum value 
        for (int i = min; i <= max; i++)
          {
            sum += i;
        }
       
       // Return th esum
      return sum;
     }
  }