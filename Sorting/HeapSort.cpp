void heapify(int a[], int n, int i)
{
    int largest = i;
    int l= 2*i;
    int r= 2*i + 1;

    if(l<=n && a[l] > a[largest])
    {
        largest=l;
    }

    if(r<=n && a[r] > a[largest])
    {
        largest=r;
    }

    if(largest !=i)
    {
        swap(a, i, largest);
        heapify(a,n,largest);

    }
}

//For Building Heap

void buildHeap(int a[], int n)
{
    for(int i=n/2; i>0; i--)
    {
        heapify(a,n,i);
    }
}

//Main Heapsort code
void heapSort(int a[], int n)
{
    for(int i=n; i>1;i--)
    {
        swap(a,1,i);
        heapify(a, i-1 , 1);
    }
}