import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
    Scanner sc=new Scanner(System.in);
    //변수 선언 및 입력
    int n=sc.nextInt();
    //모양에 맞춰 별 출력
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            System.out.print("  ");
        }
        for(int j=(2*n)-(2*i)-1;j>0;j--){
            System.out.print("* ");
        }
        System.out.println();
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<i;j++){
            System.out.print("  ");
        }
        for(int j=0;j<(2*n)-(2*i)-1;j++){
            System.out.print("* ");
        }
        System.out.println();
    }
    }
}