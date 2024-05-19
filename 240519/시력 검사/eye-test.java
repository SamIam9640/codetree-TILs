import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc=new Scanner(System.in);

        int r_eye=sc.nextInt();
        int l_eye=sc.nextInt();

        if(r_eye>=1.0&&l_eye>=1.0){
            System.out.print("High");
        }
        else if(r_eye>=0.5&&r_eye>=0.5){
            System.out.print("Middle");
        }
        else{
            System.out.print("Low");
        }
    }
}