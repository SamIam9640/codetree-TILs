import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    
    Scanner sc=new Scanner(System.in);
    //변수 선언 및 입력
    int n=sc.nextInt();

    //모양에 맞춰 출력
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            System.out.print("  ");
        }
        for(int j=0;j<i+1;j++){
            System.out.print("@ ");
        }
        System.out.println();
    }
    //모양에 맞춰서 아래부분 추력
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-1-i;j++){
            System.out.print("@ ");
        }
        System.out.println();
    }    
    }
}