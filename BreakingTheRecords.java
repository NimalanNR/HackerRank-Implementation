import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class BreakingTheRecords {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        for(int s_i=0; s_i < n; s_i++){
            s[s_i] = in.nextInt();
        }
        int min = s[0],max=s[0];
        int count1=0,count2=0;
        for(int i=1;i<s.length;i++){
            if(s[i]>max){
                max=s[i];
                count1++;
            }
            if(s[i]<min){
                min=s[i];
                count2++;
            }
        }
        System.out.println(count1+" "+count2);
    }
}
