void recurse(char *s, int beg, int end)
{
    if (beg >= end)
    {
        return;
    }

    char temp = s[beg];
    s[beg] = s[end];
    s[end] = temp;

    recurse (s, beg + 1, end - 1);
}

char* reverseWords(char* s) 
{   
    int i = 0;
    int count; 

    while (s[i] != '\0')
    {
        int j = i;

        while (s[j] != ' ' && s[j] != '\0')
        {
            j++;
        }
        recurse(s, i, j - 1);
        
        i = j;
        if (s[i] == ' ')
        {
            i++;
        }
    }
    return s;
}