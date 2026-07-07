int reverse(int x)
{
    double num = 0;
    int z;
    int y;

    if (x == -2147483648)
    {
        return 0;
    }
    else if (x >= 0)
    {
        y = x;
    }
    else if (x < 0)
    {
        y = abs(x);
    }

    while (y != 0)
    {
        z = y % 10;
        y = y / 10;
        num = num * 10 + z;
    }
    
    if (x < 0)
    {
        num = num * (-1);
    }

    if (num > 2147483647 || num < -2147483648)
    {
        return 0;
    }
    else
    {
        return num;
    }
}