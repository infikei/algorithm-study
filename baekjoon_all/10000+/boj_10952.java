// Solve 2023-10-18

// 백준에 제출할 때는 class 이름을 Main으로 설정해야 함.

import java.util.Scanner;

public class boj_10952 {
    public static void main(String[] args) {
        Scanner sc;

        sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int a;
            int b;

            a = sc.nextInt();
            b = sc.nextInt();

            if (a == 0 && b == 0) break;

            System.out.println(a + b);
        }

        sc.close();
    }
}
