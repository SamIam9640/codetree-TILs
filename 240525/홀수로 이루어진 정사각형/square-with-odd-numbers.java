import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
        //변수 선언 및 입력
        int n=sc.nextInt();

        //모양에 맞추어 숫자 출력
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                System.out.print(9+(2*i*j)+" ");
            }
            System.out.println();
        }
    }
}