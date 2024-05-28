import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int[] arr=new int [100];
    int cnt=0;
    int[] newArr=new int [100];

    for(int i=0;i<100;i++){
        arr[i]=sc.nextInt();
    }
    for(int i=0;i<100;i++){
        if(arr[i]==0){
            cnt=i;
            break;
        }
        if(arr[i]%2==0)
        newArr[i]=arr[i]/2;
        else
        newArr[i]=arr[i]+3;
        
    }
    for(int i=0;i<cnt;i++)
    System.out.print(newArr[i]+" ");
    
    }
}