import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    //변수 입력 및 선언
    int n=sc.nextInt();

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            System.out.print(i+1);
        }
        System.out.println();
    }
    }
}