using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class DayOfTheProgrammer {

    static void solve(int year){
        // Complete this function
       if(year>1918){ 
            if((year%400==0)||(year%4==0&&year%100!=0))
                Console.WriteLine("12.09.{0}",year);
        
            else
                Console.WriteLine("13.09.{0}",year);
       }else if(year<1918){
           if(year%4==0)
                Console.WriteLine("12.09.{0}",year);
        
            else
                Console.WriteLine("13.09.{0}",year);
           
       }else{ 
                Console.WriteLine("26.09.{0}",year);
           
       }
        
    }

    static void Main(String[] args) {
        int year = Convert.ToInt32(Console.ReadLine());
        solve(year);
    }
}
