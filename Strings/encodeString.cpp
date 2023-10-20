string encode(string src)
{
    string res;
    int count = 1;
    for (int i = 1; i < src.size(); i++)
    {
        if (src[i] == src[i - 1])
        {
            count++;
        }
        else
        {
            res += (src[i-1] + to_string(count));
            count = 1;
        }
    }
    if(count >= 1){
        res += (src[src.size()-1] + to_string(count));
    }
    return res;
}