import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String s=sc.next();

    int len=s.length();

    while(len>1){
        int a=sc.nextInt();

        if(a>=len)
        a=len-1;

        s=s.substring(0,a)+s.substring(a+1);

        System.out.println(s);
    }
    }
}