import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str=sc.next();

    int cnt1=0;
    int cnt2=0;

    if(str.contains("ee"))
    cnt1++;
    if(str.contains("eb"))
    cnt2++;

    System.out.print(cnt1+" "+cnt2);
    }
}