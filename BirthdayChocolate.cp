using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class BirthdayChocolate {

    static int solve(int n, int[] arr, int d, int m){
        
        int total = 0;
        if(n>1){
        for(int i=0;i<n&&i<=n-m;i++){
            int tot = arr[i];
            for(int j=i+1;j<i+m;j++){
                tot = tot + arr[j];     
            }
          
            if(tot==d){
                total++;
            }            
        }
        return total;
        } else {
            if(arr[0]==d)
                return 1;
            return 0;
        }
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] s_temp = Console.ReadLine().Split(' ');
        int[] s = Array.ConvertAll(s_temp,Int32.Parse);
        string[] tokens_d = Console.ReadLine().Split(' ');
        int d = Convert.ToInt32(tokens_d[0]);
        int m = Convert.ToInt32(tokens_d[1]);
        int result = solve(n, s, d, m);
        Console.WriteLine(result);
    }
}
