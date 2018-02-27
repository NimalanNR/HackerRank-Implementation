import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class SockMerchent {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int c[] = new int[n];
        for(int i=0;i<n;i++)
            c[i] = in.nextInt();
       int[] res= new int[101]; 
        for(int i=0;i<n;i++){
            int a=c[i];
            res[a]=res[a]+1;
        }
        int count=0;
      /*  for(int i=0;i<101;i++){
            System.out.print(res[i]);
        }*/
        for(int i=0;i<101;i++){
            int b=res[i];
            count=count+b/2;
        }
        System.out.println(count);
    }
}
