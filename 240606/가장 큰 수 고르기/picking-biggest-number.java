import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int[] arr=new int[10];

    for(int i=0;i<10;i++){
        arr[i]=sc.nextInt();
    }

    int maxval=arr[0];

    for(int i=1;i<10;i++){
        if(arr[i]>maxval)
        maxval=arr[i];
    }
    System.out.print(maxval);
    
    }
}