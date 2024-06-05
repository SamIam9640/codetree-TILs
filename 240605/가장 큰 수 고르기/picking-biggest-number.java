import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int [] arr=new int[10];

        for(int i=0;i<10;i++)
        arr[i]=sc.nextInt();

        int max_val=arr[0];

        for(int i=0;i<10;i++)
        if(arr[i]>max_val){
            max_val=arr[i];
        }
        System.out.print(max_val);
    }
}