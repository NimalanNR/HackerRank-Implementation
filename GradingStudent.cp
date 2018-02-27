using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class GradingStudent{

    static int[] solve(int[] grades){
        for(int i=0;i<grades.Length;i++){
            int mark = grades[i];
            if(mark>=38){
                if(mark%5>=3){
                    grades[i] = mark/5*5+5;   
                }   
            }
        }
        return grades;
        
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        int[] grades = new int[n];
        for(int grades_i = 0; grades_i < n; grades_i++){
           grades[grades_i] = Convert.ToInt32(Console.ReadLine());   
        }
        int[] result = solve(grades);
        Console.WriteLine(String.Join("\n", result));
        

    }
}
