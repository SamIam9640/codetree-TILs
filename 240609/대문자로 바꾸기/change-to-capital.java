import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    char[][] arr=new char[5][3];
    
    for(char i=0;i<5;i++){
        for(char j=0;j<3;j++){
            arr[i][j]=sc.next().charAt(0);
        }
    }

    for(char i=0;i<5;i++){
        for(char j=0;j<3;j++){
            arr[i][j]+='A'-'a';
        }
    }

    for(char i=0;i<5;i++){
        for(char j=0;j<3;j++){
            System.out.print(arr[i][j]+" ");
        }
        System.out.println();
    }
    

    }
}