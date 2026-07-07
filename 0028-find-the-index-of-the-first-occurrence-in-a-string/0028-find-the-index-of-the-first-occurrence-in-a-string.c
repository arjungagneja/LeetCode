int strStr(char* haystack, char* needle) 
{
    int n = strlen(haystack);
    int n2 = strlen(needle);

    for (int i = 0; i < n; i++)
    {
        int match = 1;
        
        if (needle[0] == haystack[i])
        {
            for (int j = 1; j < n2; j++)
            {
                if (needle[j] != haystack[i + j])
                {   
                    match = 0;
                    break;
                }
            }
            if (match == 1)
            {
                return i;
            }
        }
    }
    return -1;
}