import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class AppleAndOrange {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        for(int i=0; i < m; i++){
            apple[i] = in.nextInt();
        }
        int[] orange = new int[n];
        for(int i=0; i < n; i++){
            orange[i] = in.nextInt();
        }
        int count1=0,count2=0;
        for(int i=0;i<m;i++){
            int x = a+apple[i];
            if(x>=s&&x<=t)
                count1++;
        }
        for(int i=0;i<n;i++){
            int x=b+orange[i];
            if(x>=s&&x<=t)
                count2++;
        }
        System.out.println(count1);
        System.out.println(count2);
    }
}
