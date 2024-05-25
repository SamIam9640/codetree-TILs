import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
        //변수 선언 및 입력
        int n=sc.nextInt();

        //칸 안에 순서쌍 출력
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print((n-j)+" ");
            }
            System.out.println();
        }
    
    }
}