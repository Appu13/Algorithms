
import java.util.Scanner;

public class Change {

	private static int getChange(int n) {
		int sum = 0;

		// Creating Change for each denomination
		while (n > 0) {
			if (n % 10 == 0) {
				sum++;
				n -= 10;
				continue;
			}
			if (n % 5 == 0) {
				sum++;
				n -= 5;
				continue;
			}
			if (n % 1 == 0) {
				sum++;
				n -= 1;
				continue;
			}
		}

		return sum;
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		// Input
		int m = scanner.nextInt();

		// Output
		System.out.println(getChange(m));

		scanner.close();

	}

}// By appu13
