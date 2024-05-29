import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    int[] arr=new int [99];
    int[] countArr=new int[10];

    for(int i=0;i<99;i++){
        arr[i]=sc.nextInt();
        if(arr[i]==0)
        break;
        if(arr[i]<10)
        continue;
        countArr[arr[i]/10]++;
    }

    for(int i=1;i<10;i++)
    System.out.println(i+" - "+countArr[i]);
    }
}