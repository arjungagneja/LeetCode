int lengthOfLastWord(char* s) 
{
    int count = 0;
    int n = strlen(s);

    for (int i = n - 1; i >= 0; i--)
    {
        if (count > 0 && s[i] == ' ')
        {
            break;
        }
        if (s[i] != ' ')
        {
            count++;
        }
    }
    return count;
}