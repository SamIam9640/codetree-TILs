import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str=sc.next();
    boolean exists1=false;

    for(int i=0;i<str.length()-1;i++){
        if(str.charAt(i)=='e'&&str.charAt(i+1)=='e'){
            exists1=true;
        }
    }
    if(exists1==true)
    System.out.print("Yes ");
    else
    System.out.print("No ");

    boolean exists2=false;

    for(int i=0;i<str.length()-1;i++){
        if(str.charAt(i)=='a'&&str.charAt(i+1)=='b'){
            exists2=true;
        }
    }

    if(exists2==true)
    System.out.print("Yes");
    else
    System.out.print("No");

    }
}