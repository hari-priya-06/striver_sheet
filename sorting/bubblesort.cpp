#include<iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    int temp;
    for(int i=0 ; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i>j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
            else{
            }
            

        }
    
    }
    cout<<"\nafter bubble_sort\n";
    for(int i =0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
 
int main()
{
    int a[]={12,45, 7, 22, 1, 56};
    int n= sizeof(a)/sizeof(a[0]);
    cout<< "before bubble sort\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    bubble_sort(a,n);
    return 0;
}