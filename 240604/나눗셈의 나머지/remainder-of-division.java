import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
    Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    int b=sc.nextInt();
    int [] countArr=new int[10];
    int ans=0;

    while(a>1)
    {
        countArr[a%b]++;
        a/=b;
    }

    for(int i=0;i<b;i++){
        ans+=countArr[i]*countArr[i];
    }
    System.out.print(ans);
    }
}