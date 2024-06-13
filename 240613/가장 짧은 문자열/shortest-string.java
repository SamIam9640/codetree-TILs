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

    int maxLength = Math.max(len1, Math.max(len2, len3));

        // 가장 짧은 문자열의 길이를 구합니다.
        int minLength = Math.min(len1, Math.min(len2, len3));

        // 길이 차이를 계산합니다.
        int lengthDifference = maxLength - minLength;

        // 결과를 출력합니다.
        System.out.println(lengthDifference);
    }
}