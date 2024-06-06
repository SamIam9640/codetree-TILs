import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int[] arr=new int[1000];

    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();

    int max=-1;
    for(int i=0;i<n;i++){
        int currNum=arr[i];
        if(arr[i]>max){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==currNum){
                    count++;
                }
            }
            if(count==1)
            max=currNum;
        }
    }
    System.out.print(max);

    }
}