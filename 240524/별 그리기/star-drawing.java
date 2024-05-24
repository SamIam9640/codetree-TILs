import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    Scanner sc=new Scanner(System.in);
    //변수 선언 및 입력
    int n=sc.nextInt();
    
    //모양에 맞게 별 출력
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            System.out.print(" ");
        }
        for(int j=0;j<(2*n)-(2*i)-1;j++){
            System.out.print("*");
        }
        System.out.println();
    }
    for(int i = n - 1; i >= 1; i--) {
            for(int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            for(int j = 0; j < 2 * i - 1; j++) {
                System.out.print("*");
            }
            for(int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}