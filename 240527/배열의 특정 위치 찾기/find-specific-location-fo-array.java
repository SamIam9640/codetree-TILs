import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    int []arr=new int[10];
    int sum=0;
    int sum2=0;

    Scanner sc=new Scanner(System.in);

    for(int i=0;i<10;i++)
    arr[i]=sc.nextInt();
        

    for(int i=1;i<10;i+=2){
        sum+=arr[i];
    }
    for(int i=2;i<10;i+=3)
    sum2+=arr[i];

    System.out.printf("%d %.1f",sum,(double)sum2/3);
    }
}