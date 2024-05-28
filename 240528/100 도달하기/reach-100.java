import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int[] arr=new int[100];
    arr[1]=1;
    arr[2]=n;
    int cnt=0;

    for(int i=3;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    for(int i=1;i<100;i++){
        System.out.print(arr[i]+" ");
        if(arr[i]>100)
        break;
    }
    
    }
}