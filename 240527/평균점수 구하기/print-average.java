import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    double sum=0;
    int cnt=0;
    double avg;

    double [] arr=new double[8];

    for(int i=0;i<8;i++){
        arr[i]=sc.nextDouble();
    }
    for(int i=0;i<8;i++){
        sum+=arr[i];
        cnt++;
    }
    avg=sum/cnt;

    System.out.printf("%.1f",avg);

    
    }
}