import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        int cnt=0;
        
        Scanner sc=new Scanner(System.in);
    while(true){
       
        int n=sc.nextInt();
        

        if(n%2!=0)
        continue;
        
            System.out.println(n/2);
        cnt++;
        
        if(cnt>=3)
        break;
         }
    }
}