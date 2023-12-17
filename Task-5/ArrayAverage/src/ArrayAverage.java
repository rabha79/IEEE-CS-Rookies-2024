import java.util.Scanner;

public class ArrayAverage {

    // Recursive function to calculate the sum of elements in the array
    static double arrayAverage(int[] arr, int n, int index) {
        // Base case: when the index reaches the end of the array
        if (index == n) {
            return 0;
        }

        // Recursive case: calculate sum of elements using recursion
        return arr[index] + arrayAverage(arr, n, index + 1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input
        int n = scanner.nextInt();

        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = scanner.nextInt();
        }

        // Calculate average using recursion
        double average = arrayAverage(array, n, 0) / n;

        // Output with 6 digits after the decimal point
        System.out.printf("%.6f\n", average);
    }
}

