
import java.util.Scanner;

public class FractionalKnapsack {

	private static double getOptimalValue(int capacity, int[] values, int[] weights) {
		int currentpos = 0, a;
		double ratio = 0, value = 0;

		for (int i = 0; i < weights.length; i++) {
			if (capacity == 0) {
				break;
			}
			ratio = 0;
			currentpos = 0;
			for (int j = 0; j < weights.length; j++) {
				if (weights[j] > 0 && ratio < (values[j] / weights[j])) {
					currentpos = j;
					ratio = (double) values[j] / weights[j];

				}
			} // End of loop to select the largest ratio

			a = Math.min(weights[currentpos], capacity);
			value = (double) value + a * ratio;

			// Update statements
			weights[currentpos] = weights[currentpos] - a;
			capacity = capacity - a;

		} // End of main loop

		return value;

	}

	public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();

		int capacity = scanner.nextInt();
		int[] values = new int[n];
		int[] weights = new int[n];

		for (int i = 0; i < n; i++) {
			values[i] = scanner.nextInt();
			weights[i] = scanner.nextInt();
		}
		System.out.printf("%.4f", getOptimalValue(capacity, values, weights));
		scanner.close();
	}
}// By appu_13
