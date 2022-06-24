int lengthOfLastWord(string s)
{
    int size = 0;
    char fin;

    vector<int> Lis = {0};
    for (char Chr : s)
    {
        fin = Chr;
        if (Chr == ' ')
        {
            if (size != 0)
            {
                Lis.push_back(size);
                size = 0;
            }
        }
        else
        {
            size++;
        }
    }
    if (fin != ' ')
    {
        Lis.push_back(size);
        size = 0;
    }
    return Lis.at(Lis.size() - 1);
}