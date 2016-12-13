/* PROGRAM
 * charcount	count character input
 *
 * USAGE
 * charcount
 *
 * FUNCTION
 * charcount counts the number of character input until it's terminated.
 * Since newline character, although not visible, is another character,
 * the charcount in effect counts the number of lines and number of
 * 'visible' character in it.
 *
 * EXAMPLE
 * charcount
 * some text
 * 10
 *
 * BUGS
 * Poor definitely of 'visible'. What about \t and \v?
 */

#include <stdio.h>

int c, count, nl;

main () {
	count = 0;
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nl = 1;
		else if (c ==  EOF)
			;
		else
			nl = 0;
		count +=1;
	}

	if (nl == 0)
		printf("\n");
	printf("%d\n", count);
}
