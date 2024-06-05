import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int q=sc.nextInt();
    
    int[] arr=new int[100];

    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }

    for(int i=0;i<q;i++){
        int qtype=sc.nextInt();

        if(qtype==1){
            int a=sc.nextInt();
            System.out.println(arr[a-1]);
        }
        else if(qtype==2){
            int b=sc.nextInt();
            for(int j=0;j<n;j++){
            int idx=-1;
            if(arr[i]==b)
            idx=i;
            break;
            }
            if(idx==-1)
            System.out.println(0);
            else
            System.out.println(idx);
        }
        else {
            int a=sc.nextInt();
            int b=sc.nextInt();

            for(int i=a-1;i<b;i++)
            System.out.print(arr[i]+" ");
        }
    }
    }
}