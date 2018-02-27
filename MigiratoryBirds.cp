using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class MigratoryBirds {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
        int[] type = new int[5];
        
        for(int i=0;i<n;i++){
            type[ar[i]-1] +=1;
        }
      /*  for(int i=0;i<5;i++){
            Console.Write(type[i]+" ");
        }*/
        int max = -10000;
        int maxindex = 0;
        for(int i=0;i<5;i++){
            if(max<type[i]){
                max = type[i];
                maxindex = i;
            }
        }
        return maxindex+1;
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] ar_temp = Console.ReadLine().Split(' ');
        int[] ar = Array.ConvertAll(ar_temp,Int32.Parse);
        int result = migratoryBirds(n, ar);
        Console.WriteLine(result);
    }
}
