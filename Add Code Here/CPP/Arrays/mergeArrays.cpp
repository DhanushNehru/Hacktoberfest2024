#include <iostream>
using namespace std;
int main()
{
    int A[] = {0,2,3,8,12,16};
    int B[] = {1,4,5,6,7};
    int i,j,k,p = sizeof(A)/sizeof(int),n=sizeof(B)/sizeof(int);
    int M[p+n];
    i=j=k=0;
    while(i<p && j<n)
    {
        if(A[i]<B[j])
        {
            M[k]=A[i];
            i++;
        }
        else
        {
            M[k]=B[j];
            j++;
        }
        k++;
    }
    if(i>=p)
    {
        while(j<n)
        {
            M[k]=B[j];
            j++;
            k++;
        }
    }
    if(j>=n)
    {
        while(i<p)
        {
            M[k]=A[i];
            i++;
            k++;
        }
    }
    cout << endl << "After Merging" <<endl;
    for (int x = 0; x < p+n; x++)
    {
        cout << M[x] << ", ";
    }
    return 0;
}