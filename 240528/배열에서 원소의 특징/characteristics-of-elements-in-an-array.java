import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int []arr=sc.arr[10];
    int k=0;
    for(int i=0;i<10;i++)
    arr[i]=sc.nextInt();

    for(int i=0;i<10;i++){
        if(arr[i]%3==0){
            k==i;
        }
    }
    System.out.print(arr[k-1]);
    }
}