import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int cnt=0;
    int position=0;
    int[] arr=new int[100];

    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }

    for(int i=0;i<n;i++){
        if(arr[i]==2){
        cnt++;
        if(cnt==3){
        position=i+1;
        break;
        }
        }
    }
    System.out.print(position);

    }
}