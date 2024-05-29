import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    //100명 이하 배열 선언
    int[] arr=new int[100];

    //배점 배열 선언
    int[] countArr=new int[11];

    for(int i=0;i<100;i++){
        arr[i]=sc.nextInt();
        if(arr[i]==0)
        break;
       
        countArr[arr[i]/10]++;
    }
    for(int i=10;i>=1;i--){
    System.out.println(i+"0 - "+countArr[i]);       
    }
    }
}