import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    String [] str=new String[10];

    for(int i=0;i<n;i++)
    str[i]=sc.next();

    int lenall=0;
    int cnt=0;

    for(int i=0;i<n;i++){
        int len=str[i].length();
        lenall+=len;
        if(str[i].charAt(0)=='a')
        cnt++;
    }
    System.out.print(lenall+" "+cnt);

    }
}