bool isSubsequence(char* s, char* t) 
{   
    int count = 0, k = 0;
    int temp;

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = k; j < strlen(t); j++)
        {
            if (s[i] == t[j])
            {
                k = j + 1;
                count++;
                break;
            }
        }
    }
    if (count == strlen(s))
    {
        return true;
    }    
    else 
    {
        return false;
    }
}