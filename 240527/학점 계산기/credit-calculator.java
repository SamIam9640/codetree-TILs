import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        double sum=0;
        int cnt=0;
        double avg;
        double [] arr=new double[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextDouble();
            sum+=arr[i];
            cnt++;
        }
        avg=(double) sum/cnt;

        System.out.printf("%.1f",avg);
        System.out.println();
        if(avg>=4.0)
        System.out.print("Perfect");
        else if(avg>=3.0)
        System.out.print("Good");
        else
        System.out.print("Poor");
        // 여기에 코드를 작성해주세요.
    }
}