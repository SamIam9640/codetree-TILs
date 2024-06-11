import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int m=sc.nextInt();
    int num=0;
    int[][] arr2d=new int[100][100];

    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                arr2d[i][j]=num++;
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                arr2d[i][j]=num++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            System.out.print(arr2d[i][j]+" ");
        }
        System.out.println();
    }
    }
}