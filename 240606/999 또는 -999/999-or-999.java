import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int[]arr=new int[100];
    int maxval=arr[0];
    int minval=arr[0];

    for(int i=0;i<100;i++){
        arr[i]=sc.nextInt();
        if(arr[i]==999||arr[i]==-999)
        break;
        if(arr[i]>maxval){
            maxval=arr[i];
        }
        if(minval>arr[i]){
        minval=arr[i];}
    }
    System.out.print(maxval+" "+minval);
    }
}