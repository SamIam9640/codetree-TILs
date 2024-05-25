import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //변수 선언 및 입력
        int n=sc.nextInt();
        int a=sc.nextInt();
        int b=sc.nextInt();

        //칸에 알맞은 숫자 입력하기
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                System.out.print(i*j+" ");
            }
            System.out.println();
        }
    }
}