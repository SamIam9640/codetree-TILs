import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str1=sc.next();
    String str2=sc.next();

    String totStr1="";
    String totStr2="";

    totStr1=str1+str2;
    totStr2=str2+str1;

    boolean satisfied=true;
    for(int i=0;i<totStr1.length();i++)
    if(totStr1.charAt(i)!=totStr2.charAt(i))
    satisfied=false;

    if(satisfied)
    System.out.print("true");
    else
    System.out.print("false");
    }
}