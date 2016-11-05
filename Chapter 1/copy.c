/* PROGRAM
 * copy	- copy input to output
 *
 * USAGE
 * copy
 *
 * FUNCTION
 * copy copies its input (stdin) to its output (stdout) unchanged.
 *
 * EXAMPLE
 *
 * ./copy
 * hello there, are you listening?
 * hello there, are you listening?
 * yes, I am.
 * yes, I am.
 * <EOF>
 */

#include <stdio.h>

int main() {

	char c;

	while((c = getchar()) != EOF) {

		printf("%c", c);

	}

	return 0;

}
