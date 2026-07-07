bool isPalindrome(int x) 
{   
    if (x != 0 && x % 10 == 0 || x < 0)
    {
        return false;
    }
    else if (x / 10 == 0)
    {
        return true;
    }

    int rem;
    int temp = x;
    int rev = 0;

    while (temp > rev)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev / 10 || temp == rev)
    {
        return true;
    }
    else 
    {
        return false;
    }
}