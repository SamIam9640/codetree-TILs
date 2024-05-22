import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

    Scanner sc=new Scanner(System.in);

    int prod=1;

    int n=sc.nextInt();

    for(int i=1;i<=10;i++){
        prod*=i;
        if(prod>=n){
            System.out.print(i);
            break;
        }
    }
    }
}