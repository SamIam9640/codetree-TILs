import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    
    int n=sc.nextInt();
    int[] arr=new int[100];

    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }
 int minval=arr[0];
    for(int i=0;i<n;i++){
        
        if(minval>arr[i]){
            minval=arr[i];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==minval)
        cnt++;
    }
    System.out.print(minval +" "+cnt);
    }
}