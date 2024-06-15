import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String [] str=new String [10];


    for(int i=0;i<10;i++)
    str[i]=sc.next();

    char c=sc.next().charAt(0);
    int cnt=0;

    for(int i=0;i<10;i++){
        int len=str[i].length();
        if(str[i].charAt(len-1)==c){
        System.out.println(str[i]);
        cnt++;
        }
    }
    if(cnt==0)
    System.out.print("None");
    }
}