import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
    Scanner sc=new Scanner(System.in);
    //변수 입력 및 선언
    int n=sc.nextInt();

    for(int i=n;i>=i;i--){
        for(int j=1;j<=i;j++){
            for(int k=1;k<=i;k++)
            System.out.print("*");
            System.out.print(" ");
        }
        System.out.println();
    }
  
    }
    }