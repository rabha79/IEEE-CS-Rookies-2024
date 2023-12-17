import java.util.Scanner;
public class ArrayAverage {
    static double arrayAverage(int[] arr, int n, int index) {
        // Base case: when the index reaches the end of the array
        if (index == n) {
            return 0;
        }
        return arr[index] + arrayAverage(arr, n, index + 1);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = scanner.nextInt();
        }
        double average = arrayAverage(array, n, 0) / n;
        System.out.printf("%.6f\n", average);
    }
}

