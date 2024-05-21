import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    Scanner sc=new Scanner(System.in);

    int a_gen=sc.nextInt();
    int a_age=sc.nextInt();
    
    if(a_gen==0){
        if(a_age>=19)
        System.out.print("MAN");
        else
        System.out.print("BOY");
    }
    else{
        if(a_age>=19)
        System.out.print("WOMAN");
        else
        System.out.print("GIRL");
    }
    
    }
}