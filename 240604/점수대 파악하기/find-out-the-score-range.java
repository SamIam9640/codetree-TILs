import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
    Scanner sc=new Scanner(System.in);
    int[]arr=new int[100];
    int[] newArr=new int[11];

    for(int i=0;i<100;i++){
        arr[i]=sc.nextInt();
        if(arr[i]==0)
        break;
        if(arr[i]<10)
        continue;
        newArr[arr[i]/10]++;
    }
    for(int i=10;i>=1;i--){
        System.out.println(i+"0 - "+newArr[i]);
    }
    }
}