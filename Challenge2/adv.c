/* CS++
 * PROGRAMMING CHALLENGE 2: ADVANCED
 * GIVEN AN ARRAY OF INTEGERS, RETURN AN ARRAY WHERE THE PRODUCT OF THE FIRST TWO ELEMENTS IS THE THIRD
 *
 * NOTE: IF THERE ARE MORE THAN ONE SETS OF NUMBERS WHICH SATISFY THIS CONDITION, RETURN THE FIRST
 *
 * EXAMPLE:
 *
 * INPUT = [4,2,9,7,54,2,9,18]
 * RESULT = [9,7,54]
 */

// Returns array of integers where the product of the first two elements is the third
// params: input - array of integers
//         len - size of array
// returns: pointer to array of 3 integers
int *prodArray(int input[],int len)
{
    static int result[3] = {0};

    // Move through array scanning 3 at a time
    for (int i = 0; i < len - 2; i++)
    {
        // If product of first two numbers is third number, copy into result array
        if (input[i] * input[i + 1] == input[i + 2])
        {
            result[0] = input[i];
            result[1] = input[i + 1];
            result[2] = input[i + 2];
            break;
        }
    }

    return result;
}
