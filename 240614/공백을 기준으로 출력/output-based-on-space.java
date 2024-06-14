import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str1=sc.nextLine();
    String str2=sc.nextLine();
    char[] arr=new char[200];
    int cnt=0;

    int len1=str1.length();
    int len2=str2.length();

    for(int i=0;i<len1;i++){
        if(str1.charAt(i)!=' '){
            arr[i]=str1.charAt(i);
            cnt++;
        }
    }
    for(int i=0;i<len2;i++){
        if(str2.charAt(i)!=' '){
            arr[cnt+1]=str2.charAt(i);
            cnt++;
        }
    }
    for(int i=0;i<=cnt;i++){
        System.out.print(arr[i]);
    }


    }
}