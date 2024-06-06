import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int max2=0;
    int[] arr=new int[100];

    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();
    
    int maxval=arr[0];
    int maxidx=0;
    //Step 1: max1과 해당 index를 구합니다.
    for(int i=1;i<n;i++){
        if(arr[i]>maxval){
        maxval=arr[i];
        maxidx=i;
        }
    }
    //Step 2: max1이 골라진 위치를 제외한 곳에서 최댓값을 구합니다.
    boolean isInitialized =false;
    for(int i=0;i<n;i++){
        if(i==maxidx)
        continue; //Case 1: 1번에서 고른 케이스는 패스합니다.

        if(isInitialized ==false){
            //Case 2: 아직 max2 값을 초기화 하지 못했다면
            // 현재 값으로 초기화합니다.
        isInitialized= true;
        max2 =arr[i];
        }
        else if(arr[i]>max2) {
            //Case 3: 지금까지 계산한 값보다 좋다면 갱신합니다.
            max2 = arr[i];
        }
    }

    System.out.print(maxval + " "+max2);

    }
}