int scoreOfString(char* s) 
{
    int score = 0;
    int n = strlen(s);

    for (int i = 0; i < n - 1; i++)
    {
        score = score + abs(s[i] - s[i + 1]);
    }
    
    return score;
}