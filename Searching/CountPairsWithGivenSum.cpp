// Only Function
int getPairsCount(int a[], int n, int k)
{
    unordered_map<int ,int> m;
    int c=0;
    for(int i=0;i<n;i++)
    {
        c+=m[k-a[i]];
        m[a[i]]++;

    }

    return c;

}