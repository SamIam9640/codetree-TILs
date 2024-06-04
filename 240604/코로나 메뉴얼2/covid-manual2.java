import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    
    int[] arr=new int[11];
    int[] newArr=new int[5];
    int ans=0;

    char c;
    for(int i=0;i<3;i++){
        c=sc.next().charAt(0);
        arr[i]=sc.nextInt();

        if(c=='Y'&&arr[i]>=37)
        ans=1;
        else if(c=='N'&&arr[i]>=37)
        ans=2;
        else if(c=='Y'&&arr[i]<37)
        ans=3;
        else if(c=='N'&&arr[i]<37)
        ans=4;
        newArr[ans]++;
    }
    for(int i=1;i<=4;i++){
        System.out.print(newArr[i]+" ");
    }
    if(newArr[1]>=2)
    System.out.print("E");
    
    
    }
}