import java.util.Scanner;

public class Main {
    public static void main(String[] args) {    
        Scanner sc=new Scanner(System.in);
        
        String [] str=new String[10];
        String totStr="";

        int n=sc.nextInt();
        for(int i=0;i<n;i++){
        str[i]=sc.next();
        totStr+=str[i];
        }

        for(int i=0;i<totStr.length();i++){
            System.out.print(totStr.charAt(i));
            if((i+1)%5==0)
            System.out.println();
        }
    }
}