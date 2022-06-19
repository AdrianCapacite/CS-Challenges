/*	PROGRAMMING CHALLENGE 3
 *
 *
 *	Write a parser which takes a given set of instructions and prints an output based on the instructions.
 *
 *	parser begins with a value at zero
 *	'i' = increments the value
 *	'd' = decrements the value
 *	's' = squares the value
 *	'o' = outputs the value and resets it to zero
 *
 *	Instructions are stored as strings and passed into the parser
 *
 *	EXAMPLE CASES: "iio": 2
 *				   "iiisso": 81
 *				   "iido": 1
 *				   "iisoiiso": 4 4
 */


void parser(char *input)
{
  int result = 0;
  printf("\"%s\": ", input);
  for (int i = 0; *(input + i) != 0; i++)
  {
    switch (*(input + i))
    {
    case 'i':
      result++;
      break;
    case 'd':
      result--;
      break;
    case 's':
      result *= result;
      break;
    case 'o':
      printf("%d ", result);
      result = 0;
      break;
    }
  }
  printf("\n");
}
