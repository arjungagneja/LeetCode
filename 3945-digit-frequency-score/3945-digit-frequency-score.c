int digitFrequencyScore(int n) 
{
    int temp = n;
    int score = 0;
    int x;

    while (temp != 0)
    {
        x = temp % 10;
        score = x + score;
        temp = temp / 10;
    }

    return score;
}