// Solve 2023-10-18

// 백준에 제출할 때는 class 이름을 Main으로 설정해야 함.

import java.util.Scanner;

public class boj_10950 {
    public static void main(String[] args) {
        Scanner sc;
        int testNum;

        sc = new Scanner(System.in);
        testNum = sc.nextInt();

        for (int testIdx = 0; testIdx < testNum; testIdx++) {
            int a;
            int b;

            a = sc.nextInt();
            b = sc.nextInt();

            System.out.println(a + b);
        }

        sc.close();
    }
}
