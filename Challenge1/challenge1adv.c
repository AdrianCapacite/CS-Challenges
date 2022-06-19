//Advanced challenge
//Find the nth perfect number
//
//DON'T CHANGE THE FILE NAME!!!!
//
int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    // Returns 1 if perfect number
    // Returns 0 if not perfect number
    return sum == n;
}