import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int q = sc.nextInt();
        int[] arr = new int[100];

        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        for(int i = 0; i < q; i++){
            int qtype = sc.nextInt();
            if(qtype == 1){
                int a = sc.nextInt();
                System.out.println(arr[a - 1]);
            }
            else if(qtype == 2){
                int b = sc.nextInt();
                int idx = -1;

                for(int j = 0; j < n; j++){
                    if(arr[j] == b){
                        idx = j;
                        break;
                    }
                }
                System.out.println(idx + 1);
            }
            else {
                int a = sc.nextInt();
                int b = sc.nextInt();
                for(int j = a - 1; j < b; j++){
                    System.out.print(arr[j] + " ");
                }
            }
            System.out.println();
        }
    }
}