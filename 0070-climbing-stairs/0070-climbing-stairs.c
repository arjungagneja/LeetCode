int climbStairs(int n) 
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }

    int a = 1;
    int b = 2;
    int current;

    for (int i = 0; i < n - 2; i++)
    {
        current = a + b;
        a = b;
        b = current;
    }
    return current;
}