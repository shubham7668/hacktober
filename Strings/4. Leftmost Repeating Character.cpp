//Naive Solution


int leftMost(string &str)
{
    for(int i=0; i<str.length(); i++)
    {
        for(int j= i+1; j<str.length();j++)
        {
            if(str[i] == str[j])
               return i;
        }
    }

    return -1;

}


//Better Approach
const int CHAR = 256;
int leftmost(string &str)
{
    int count[CHAR] = {0};
    for(int i=0;i<str.length(); i++)
    {
        count[str[i]]++; 
    }

    for(int i=0;i<str.length;i++)
            if(count[str[i]] > 1)
                 return i;

    return -1;             
}


//Efficient Approach 1

const int CHAR = 256;
int leftMost(string &str)
{
    int fIndex[CHAR];
    fill(fIndex , fIndex+CHAR , -1);
    int res = INT_MAX;
    for(int i=0;i<str.length(); i++)
    {
        int fi= fIndex[str[i]];
        if(fi == -1)
          fIndex[str[i]] = i;
        else
           res = min(res, fi);    
    }

    return (res==INT_MAX) ? -1: res;

}


//Efficient Approach 2

int leftmost(string &str)
{
    bool visited[CHAR];
    fill(visited , visited+ CHAR, false);
    int res=-1;
    for(int i = str. length() - 1; i>=0; i--)
    {
        if(visited[str[i]])
           res=i;

        else
           visited[str[i]] = true;
    }

    return res;

}


