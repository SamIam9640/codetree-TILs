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

        cnt++;
        sum+=i;

        avg=(double) sum/cnt;
        if(n!=20){
            System.out.printf(".1f",avg);
            break;
        }
    }
    }
}