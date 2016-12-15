/* PROGRAM
 * linecount
 *
 * USAGE
 * linecount
 *
 * FUNCTION
 * linecount counts the number of lines in the input, and print the number to output
 *
 * EXAMPLE
 * linecount
 * This is a line.
 * <EOF>
 * 1
 */

#include <stdio.h>

int main() {
	int c, lc;

	lc = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			lc += 1;	
	}

	printf("%d\n", lc);
}
