import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    Scanner sc=new Scanner(System.in);

    int cnt=0;
    int n=sc.nextInt();

    for(int i=1;i<=100;i++){
        n/=i;
        cnt++;
        if(n<=1){
            System.out.print(cnt);
            break;
        }
    }
    
    }
}