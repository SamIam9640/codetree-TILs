import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc=new Scanner(System.in);

        char a_sym=sc.next().charAt(0);
        int a_tem=sc.nextInt();
        char b_sym=sc.next().charAt(0);
        int b_tem=sc.nextInt();
        char c_sym=sc.next().charAt(0);
        int c_tem=sc.nextInt();


        if(a_sym=='Y'&&a_tem>=37){
            if((b_sym=='Y'&&b_tem>=37)||(c_sym=='Y'&&c_tem>=37))
            System.out.print('E');
            else
            System.out.print('N');
        }
        else if(b_sym=='Y'&&b_tem>=37){
            if(c_sym=='Y'&&c_tem>=37)
            System.out.print('E');
            else
            System.out.print('N');
        }
    }
}