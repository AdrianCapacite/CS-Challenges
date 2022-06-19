//Intermediate Challenge
//Using recursion, find the nth fibonnaci number
//
//DON'T CHANGE THE FILE NAME!!!!
//
int recurFib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return recurFib(n - 1) + recurFib(n - 2);
    }
}
