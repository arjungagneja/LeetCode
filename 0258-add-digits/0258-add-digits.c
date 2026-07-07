int addDigits(int num) 
{
    int x = num;
    int y;
    int sum = 0;

    while (x != 0)
    {
        y = x % 10;
        x = x / 10;
        sum = sum + y;
    }

    if (sum <= 9)
    {
        return sum;
    }
    else 
    {
        return addDigits(sum);
    }
}