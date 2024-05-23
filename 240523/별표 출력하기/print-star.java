import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    int n=sc.nextInt();
    Scanner sc=new Scanner(System.in);

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++)
            System.out.print("* ");
            System.out.println();
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i;j++)
        System.out.print("* ");
        System.out.println();
    }
    
    }
}