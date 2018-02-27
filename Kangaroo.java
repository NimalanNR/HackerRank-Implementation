import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Kangaroo {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt();
        int v1 = in.nextInt();
        int x2 = in.nextInt();
        int v2 = in.nextInt();
        if(x2>x1&&v2>v1)
            System.out.println("NO");
        else if(x1>x2&&v1>v2)
            System.out.println("NO");
        else if(x1==x2&&v1==v2)
            System.out.println("YES");
            else if(v1-v2!=0) {
                if((x2-x1)%(v2-v1)==0)
                    System.out.println("YES");
                else
                    System.out.println("NO");
        }else
            System.out.println("NO");
            
            
    }
}
