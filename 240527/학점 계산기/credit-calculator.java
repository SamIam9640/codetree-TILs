import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int sum=0,cnt=0;
        double avg;
        double [] arr=new double[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextDouble();
            sum+=arr[i];
            cnt++;
        }
        avg=(double) sum/cnt;

        if(avg>=4.0)
        System.out.print("Perfect");
        else if(avg>=3.0)
        System.out.print("Good");
        else
        System.out.print("Poor");
        // 여기에 코드를 작성해주세요.
    }
}