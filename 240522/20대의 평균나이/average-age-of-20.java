import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    Scanner sc=new Scanner(System.in);
    while(true){
    int n=sc.nextInt();
    int cnt=0;
    int sum=0;
    double age;

    sum+=n;
    cnt++;

    if(n>19&&n<30){
        System.out.printf("%.2f",(doube) sum/cnt);
        break;
    }
    
    }
    }
}