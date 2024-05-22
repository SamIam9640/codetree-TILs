import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int cnt=0;
               int n=sc.nextInt();
        // 여기에 코드를 작성해주세요.
    while(true){
 

        if(n==1)
        break;

        if(n%2!=0)
        n=3*n+1;
        else
        n/=2;
        cnt++;
    }
System.out.println(cnt);
    }
}