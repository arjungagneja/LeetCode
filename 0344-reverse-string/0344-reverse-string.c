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

void reverseString(char* s, int sSize) 
{
    recurse (s, 0, sSize - 1);
}