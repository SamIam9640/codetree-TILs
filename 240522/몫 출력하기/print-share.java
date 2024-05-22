import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    while(true){
        int n=sc.nextInt();

        if(n%2!=0)
        continue;
        else{
            for(int i=0;i<3;i++){
                n/=2;
                System.out.println(n);
            }
            break;
        }
    }
    
    }
}