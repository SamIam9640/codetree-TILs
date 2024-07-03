import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str=sc.next();

    int len=str.length();

    while(len>1){
        int a=sc.nextInt();

        if(a>=len)
        a=len-1;

        str=str.substring(0,a)+str.substring(a+1);
        len--;
        
        System.out.println(str);

    }
    }
}