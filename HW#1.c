// Tania Cao pd5
// Euler Problems 1, 2, 5, 6, and 14


#include <stdio.h>
#include <math.h>

int one() {
	int sum = 0;
    for (int num = 0; num < 1000; num++)
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
    return sum;
}

int two() {
	int sum = 0;
	int first = 1;
	int second = 1;
	for (int current = first + second; current < 4000000; current = first + second) {
		if (current % 2 == 0) sum += current;
		first = second;
		second = current;
	}
	return sum;
}

int five() {
	int result = 1;
	int factor = 1;
	for (int num = 2; num <= 20; num++) {
		if (num < 4) {
			while (factor * num < 20)
				factor *= num;
			result *= factor;
			factor = 1;
		}
		else if (num % 2 != 0 && num % 3 != 0) {
			result *= num;
		}
	}
	return result;
}

int six() {
	int sum = 0;
	int square = 0;
	for (int num = 1; num <= 100; num += 1) {
		sum += num * num;
		square += num;
	}
	return (square * square) - sum;
}

int fourteen() {
    int largest = 0;
    int longest = 0;
    for (int n = 2; n <= 1000000; n++){
        int number = n;
        int count = 1;
        while (number > 1) {
            if (number % 2 == 0) number = number / 2;
            else {number = (number * 3) + 1;}
            count++;
        }
        if (count > longest) {
            longest = count;
            largest = n;
        }
    }
    return largest;
}

int main() {
	printf("1. The sum of all the multples of 3 or 5 less than 1000 is %d. \n", one());
	printf("2. The sum of the even-valued terms in the Fibonacci sequence whose values do not exceed 4,000,000 is %d. \n", two());
	printf("5. The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d. \n", five());
	printf("6. The difference between the sum of the squares of the first 100 natural numbers and the square of the sum is %d. \n", six());
    printf("14. The number %d produces the longest Collatz sequence. \n", fourteen());
}