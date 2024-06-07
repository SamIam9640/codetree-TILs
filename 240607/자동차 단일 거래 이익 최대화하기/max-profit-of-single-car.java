import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int[] arr=new int[1000];

    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();

    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int profit=arr[j]-arr[i];

            if(profit>max)
            max=profit;
        }
    }
    System.out.print(max);
    }
}