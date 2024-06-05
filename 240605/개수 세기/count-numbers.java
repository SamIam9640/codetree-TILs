import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int m=sc.nextInt();

    int[] arr=new int [100];
    int cnt=0;

    for(int i=0;i<100;i++){
        arr[i]=sc.nextInt();
        if(arr[i]==m)
        cnt++;
    }
    System.out.print(cnt);
    }
}