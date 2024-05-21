import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int a_age=sc.nextInt();
        int a_sex=sc.string[0].charat();
        int b_age=sc.nextInt();
        int b_sex=sc.string[0].charAt();

        if((a_age>=19&&a_sex=="M")||(b_age>=19&&b_sex=="M")){
            System.out.print(1);
        }
    }
}