import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str1=sc.next();
    String str2=sc.next();
    String str3=sc.next();

    int len1=str1.length();
    int len2=str2.length();
    int len3=str3.length();

    int maxlen=Math.max(len1,Math.max(len2,len3));
    int minlen=Math.min(len1,Math.min(len2,len3));

    int dif=maxlen-minlen;
    System.out.print(dif);

    }
}