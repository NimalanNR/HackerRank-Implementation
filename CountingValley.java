import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int countingValleys(int n, String s) {
        int v = 0;
        int lvl = 0;
         for(char c : s.toCharArray()){
            if(c == 'U') ++lvl;
            if(c == 'D') --lvl;
            if(lvl == 0 && c == 'U')
                ++v;
        }
        return v;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        int result = countingValleys(n, s);
        System.out.println(result);
        in.close();
    }
}
