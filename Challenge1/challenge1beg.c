//Beginner challenge
//Find the sum of all numbers up to n
//
//DON'T CHANGE THE FILE NAME!!!!
//
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }    
}
