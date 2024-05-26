import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    //변수 입력 및 선언
    int n=sc.nextInt();

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            System.out.print(j+1+" ");
        }
        System.out.println();
    }
    }
}