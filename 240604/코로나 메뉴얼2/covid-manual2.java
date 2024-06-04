import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
    int[] arr=new int[11];
    int[] newArr=new int[5];
    char c;
    int typeNum=0;

    Scanner sc=new Scanner(System.in);

 
    for(int i=0;i<3;i++){
          c=sc.next().charAt(0);
        arr[i]=sc.nextInt();
        if(c=='Y'&&arr[i]>=37)
    typeNum=1;
        if(c=='N'&&arr[i]>=37)
        typeNum=2;
        if(c=='Y'&arr[i]<37)
        typeNum=3;
        if(c=='N'&&arr[i]<37)
        typeNum=4;
        newArr[typeNum]++;
    }

    for(int i=1;i<=4;i++){
        System.out.print(newArr[i]+" ");
    }
    if(newArr[1]>=2)
    System.out.print("E");

    

    
    }
}