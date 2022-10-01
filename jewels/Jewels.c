int numJewelsInStones(char * jewels, char * stones){
     int len1=strlen(jewels);
    int len2=strlen(stones);
    int count=0;
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(jewels[i]==stones[j])
                count++;
        }   
    }
    return count;
}