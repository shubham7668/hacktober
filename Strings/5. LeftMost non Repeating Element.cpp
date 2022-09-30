// Naive Solution

int nonRep(string &str)
{
    for(int i=0; i<str.length(); i++)
    {
        bool flag= false;

        for(int j=0; j< str.length(); j++)
        {
            if(i!=j && str[i] == str[j])
            {
                flag= true;
                break;
            }
        }

        if(flag==false)
          return i;
    }

    return -1;

}


// Better Approach (two traversals)

const int CHAR = 256;
int nonRep(string &str)
{
    int count[CHAR] = {0};
    for(int i=0; i<str.length();i++)
       count[str[i]]++;

    for(int i=0;i<str.length();i++)
       if(count[str[i]] == 1)
           return i;

    return -1;          
}


//Most Efficient Solution : Can be used even for the stream of characters.
// Time Complexity: Theta(n+ CHAR)
//Aux Space : Theta(CHAR)
const int CHAR = 256;
int nonRep(string &str)
{
    int fi[CHAR];
    fill(fi, fi+CHAR, -1);

    for(int i=0; i<str.length();i++)
    {
        if(fi[str[i]]==-1)
           fi[str[i]] = i;

        else
           fi[str[i]] = -2;


    }

    int res= INT_MAX;

    for(int i=0; i<CHAR; i++)
       if(fi[i] >=0)
         res= min(res, fi[i]);


    return (res==INT_MAX) ? -1: res;     

}
