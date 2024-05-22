import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    while(true){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int cnt=0;

        if(n%2!=0)
        continue;
        else{
            System.out.println(n/2);
            cnt++;
        }
        if(cnt>=3)
        break;
    }
    
    }
}