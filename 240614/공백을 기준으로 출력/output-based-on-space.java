import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        char[] arr = new char[200]; // 입력받을 문자열의 총 길이가 200자를 넘지 않는다고 가정

        int cnt = 0;

        int len1 = str1.length();
        int len2 = str2.length();

        // 첫 번째 문자열에서 공백을 제외한 문자만 배열에 저장
        for (int i = 0; i < len1; i++) {
            if (str1.charAt(i) != ' ') {
                arr[cnt] = str1.charAt(i);
                cnt++;
            }
        }

        // 두 번째 문자열에서 공백을 제외한 문자만 배열에 저장
        for (int i = 0; i < len2; i++) {
            if (str2.charAt(i) != ' ') {
                arr[cnt] = str2.charAt(i);
                cnt++;
            }
        }

        // 결과 출력
        for (int i = 0; i < cnt; i++) {
            System.out.print(arr[i]);
        }

        sc.close();
    }
}