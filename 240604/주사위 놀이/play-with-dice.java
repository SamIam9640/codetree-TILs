import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
    Scanner sc=new Scanner(System.in);

    int[]arr=new int[10];
    int[]newArr=new int[7];

    for(int i=0;i<10;i++)
    arr[i]=sc.nextInt();

    for(int i=0;i<10;i++)
    newArr[arr[i]]++;

    for(int i=1;i<7;i++)
    System.out.print(i + " - "+ newArr[i]);

    }
}