import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc=new Scanner(System.int);

        int m=sc.nextInt();
        if(m>=3&&m<=5){
            System.out.print("Spring");
        }
        else if(m>=6&&m<=8){
            System.out.print("Summer");
        }
        else if(m>=9&&m<=11){
            System.out.print("Fall");
        }
        else if(m==12&&m<=2){
            System.out.print("Winter");
        }

    }
}