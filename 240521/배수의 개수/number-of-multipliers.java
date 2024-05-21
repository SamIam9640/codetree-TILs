import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    Scanner sc=new Scanner(System.in);
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<10;i++){
        int a=sc.nextInt();

        if(i%3==0)
        cnt1++;
        if(i%5==0)
        cnt2++;
    }

    System.out.print(cnt1 + " "+cnt2);
    }
}