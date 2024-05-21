import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc=new Scanner(System.in);

        int a_age=sc.nextInt();
        int b_age=sc.nextInt();
        char a_gen=sc.next().charAt(0);
        char b_gen=sc.next().charAt(0);

        if((a_age>=19&&a_gen=='M')||(b_age>=19&&b_gen=='M')){
            System.out.print("1");
        }
        else{
            System.out.print("0");
        }
    }
}