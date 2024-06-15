import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //문자열 리스트를 선언합니다.
        String[] str=new String[10];
        //입력 받습니다.
        for(int i=0;i<10;i++)
        str[i]=sc.next();

        for(int i=0;i<10;i++)
        System.out.println(str[i]);
    }
}