//Naive Solution
//Time Complexity: O(nlogn)

bool areAnagram(string &s1, string &s2)
{
    if(s1.length()!=s2.length())
          return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return(s1==s2);      
}


//Efficient approach
// Standard String Counting technique approach
// Time Complexity: O(n)
//Aux Space : O(n)
const int CHAR= 256;
bool areAnagram(string &s1, string &s2)
{
    if(s1.length()!= s2.length())
          return false;

    int count[CHAR] = { 0 };
    for(int i=0; i<s1.length();i++
    {
        count[s1[i]]++;
        count[s2[i]]++;
    }      

    for(int i=0; i<CHAR, i++)
       if(count[i] != 0)
            return false;


   return true;         

}

