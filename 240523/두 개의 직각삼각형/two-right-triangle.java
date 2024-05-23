import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    
        Scanner sc=new Scanner(System.in);
    
    //변수 선언 및 입력        // 여기에 코드를 작성해주세요.
    int n=sc.nextInt();

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            System.out.print("*");
        }
        for(int j=0;j<2*i;j++){
            System.out.print(" ");
        }
        for(int j=0;j<n-i;j++){
            System.out.print("*");
        }
        System.out.println();
    }

    }
}