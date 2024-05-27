import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    int []arr=new int[10];
    Scanner sc=new Scanner(System.in);
    int sum=0,cnt=0;

    for(int i=0;i<10;i++){
        arr[i]=sc.nextInt();
    if(arr[i]==0)
    break;
    if(arr[i]%2==0){
        cnt++;
        sum+=arr[i];
    }
    }
    
    System.out.print(cnt+" "+sum);
    
        // 여기에 코드를 작성해주세요.
    }
}