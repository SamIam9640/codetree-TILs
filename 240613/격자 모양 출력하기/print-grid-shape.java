import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int m=sc.nextInt();
    int [][] arr2d=new int[11][11];

    for(int i=1;i<=m;i++){
        int r=sc.nextInt();
        int c=sc.nextInt();
        arr2d[r][c]=r*c;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            System.out.print(arr2d[i][j]+" ");
        }
        System.out.println();
    }
    }
}