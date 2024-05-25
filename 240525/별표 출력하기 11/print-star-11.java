import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    
    //변수 선언 및 입력
    int n=sc.nextInt();

    //모양에 맞춰 별 출력
    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<2*n+1;j++){
            if(i%2==0||j%2==0)
            System.out.print("*");
        }
        else
        System.out.print(" ");
        System.out.println();
    }
    }
}