import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //변수 선언 및 입력
        int n=sc.nextInt();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j%2==0){
                System.out.print("*");
                }
                else{
                    for(int k=0;k<j+1;j++)
                    System.out.print("* ");
                }
                System.out.println();
            }
        }
    }
}