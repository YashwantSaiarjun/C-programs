#include<iostream>
#include<conio.h>
using namespace std;
void Array_to_2D(int a[],int size);
int main()
{
    int a[10],n;
    cout<<"\nEnter the array size: ";
    cin>>n;
    cout<<"\nEnter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Array_to_2D(a,n);
    return 0;
}

void Array_to_2D(int a[],int size)
{
    cout<<"\nOUTPUT: ";
    int arr[10][10];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if((i+j)>=size)
            {
                arr[i][j]=0;
            }
            else{
                arr[i][j]=a[j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
