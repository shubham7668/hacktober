//Naive Method

bool isPal(string &str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return(rev== str);
}



//Efficient solution

bool isPal(string &str)
{
    int begin=0;
    int end= str. length()-1;

    while(begin < end)
    {
        if(str[begin] != str[end])
            return false;

        begin++;
        end--;
    }

    return true;
}

