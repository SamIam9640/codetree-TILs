import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    //변수 선언 및 입력
    int n=sc.nextInt();

    for(int i=0;i<n;i++){
        
            if(i%2==0){
                for(int k=0;k<n;k++){
                    System.out.print(k+1);
                }
            }
            else{
                for(int k=n;k>0;k--){
                    System.out.print(k);
                }
            }
            System.out.println();
        }
    }
    }