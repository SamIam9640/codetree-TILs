import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String str1=sc.next();
    String str2=sc.next();

    int Len1=str1.length();
    int Len2=str2.length();

    for(int i=0;i<Len1;i++){

        if(i+Len2-1>=Len1)
        continue;

        boolean isMatched=true;
        for(int j=0;j<Len2;j++){
            if(str1.charAt(i+j)!=str2.charAt(j))
            isMatched=false;
        }

        if(isMatched){
        System.out.print(i);
        System.exit(0);
        }

    }
    System.out.print(-1);

    }
}