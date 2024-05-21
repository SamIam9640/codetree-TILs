import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int a_math=sc.nextInt();
        int a_english=sc.nextInt();
        int b_math=sc.nextInt();
        int b_english=sc.nextInt();

        if(a_math>b_math){
            System.out.print("A");
        }
        else if(a_math<b_math){
            System.out.print("B");
        }
        else if(a_math==b_math&&a_english>b_english){
            System.out.print("A");
        }
        else if(a_math==b_math&&a_english<b_english){
            System.out.print("B");
        }
        

        }
}