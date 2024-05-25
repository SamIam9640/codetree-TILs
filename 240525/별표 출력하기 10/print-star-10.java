import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    //변수 선언 및 입력
    int n=sc.nextInt();
    
    //모양에 맞춰 별 출력
    for(int i=0;i<2*n;i++){
        if(i%2==0){
            for(int j=0;j<1+(i/2);j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        else{
            for(int j=0;j<n-(i-1)/2;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    }
}