import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    Scanner sc=new Scanner(System.in);

    int sum=0;
    int cnt=0;
    double avg;

    while(true){
        int n=sc.nextInt();
        if(n>=30||n<=19){
            System.out.printf("%.2f",avg);
        }

        sum+=n;
        cnt++;
    }
    
    }
}