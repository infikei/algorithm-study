// Solve 2023-10-18

// 백준에 제출할 때는 class 이름을 Main으로 설정해야 함.

import java.util.Scanner;

public class boj_1008 {
    public static void main(String[] args) {
        Scanner sc;
        int a;
        int b;

        sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();

        System.out.println((double) a / b);

        sc.close();
    }
}
