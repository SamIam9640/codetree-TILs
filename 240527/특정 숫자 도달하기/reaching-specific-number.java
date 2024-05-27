import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int sum=0;
    int cnt=0;
    double avg;
    int [] arr=new int[10];
    for(int i=0;i<10;i++)
    arr[i]=sc.nextInt();
    for(int i=0;i<10;i++){
        
        if(arr[i]>=250)
            break;
            sum +=arr[i];
            cnt++;
        
    }
    avg=(double)sum/cnt;
    System.out.printf("%d %.1f",sum,avg);
        // 여기에 코드를 작성해주세요.
    }
}