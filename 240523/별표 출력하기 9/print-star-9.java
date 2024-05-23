import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    
    //변수 선언 및 입력
    int n=sc.nextInt();

    //공백 n-1-i
    //별 n*2+1
    //모양에 맞게 별 출력
    for(int i=0;i<3;i++){
        for(int j=0;j<n-1-i;j++){
            System.out.print("  ");
        }
        for(int j=0;j<n*2+1;j++){
            System.out.print("* ");
        }
        System.out.println();
    }
    
    }
}