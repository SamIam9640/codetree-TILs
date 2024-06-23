import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str=sc.next();
    int len=str.length();

    boolean satisfied1=false;
    boolean satisfied2=false;
    for(int i=0;i<len-1;i++){
        if(str.charAt(i)=='e'&&str.charAt(i+1)=='e')
        satisfied1=true;
        if(str.charAt(i)=='a'&&str.charAt(i+1)=='b')
        satisfied2=false;
    }

    if(satisfied1)
    System.out.print("Yes ");
    else
    System.out.print("No ");
    if(satisfied2)
    System.out.print("Yes");
    else
    System.out.print("No");
    }
}