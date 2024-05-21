import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    int i=1;
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();

    while(i<=n){
        System.out.print(i+" ");
        i*=3;
    }
    
    }
}