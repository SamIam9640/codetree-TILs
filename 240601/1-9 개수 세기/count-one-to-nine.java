import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int []arr=new int[100];
    int []newArr=new int[10];

    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }

    for(int i=0;i<n;i++){
        newArr[arr[i]]++;
    }

    for(int i=1;i<10;i++){
        System.out.println(newArr[i]);
    }
    }
}