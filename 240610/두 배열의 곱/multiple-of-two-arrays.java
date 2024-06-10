import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int[][] arr2d=new int [100][100];
    int[][] arr2d2=new int[100][100];
    int[][] arr2d3=new int[100][100];
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2d[i][j]=sc.nextInt();
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2d2[i][j]=sc.nextInt();
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2d3[i][j]=arr2d2[i][j]*arr2d[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            System.out.print(arr2d3[i][j]+" ");
        }
        System.out.println();
    }
  
    }
}