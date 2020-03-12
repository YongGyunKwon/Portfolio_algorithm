#include<iostream>
#include<cmath>
using namespace std;

int number[8001];

int arr[500001];
int *arr2;
int n;

void merge(int left,int right)
{
    int mid =(left+right)/2;

    int i=left;
    int j=mid+1;
    int k=left;

    while(i<=mid && j<=right)
    {
        if(arr[i]<=arr[j])
            arr2[k++]=arr[i++];
        else
        {
            arr2[k++]=arr[j++];
        }
    }

    int tmp = i>mid? j:i;

    while(k<=right)
    {
        arr2[k++]=arr[tmp++];
    }

    for(int i=left;i<=right;i++)
        arr[i]=arr2[i];

}

void partition(int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        partition(left,mid);
        partition(mid+1,right);
        merge(left,right);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double sum=0;
    double average;
    int middle;
    int most;
    int maxc=0;
    int maxn=0;
    int coverage;

    cin>>n;
    //Input

    arr2 = new int[n];

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;

        arr[i]=tmp;

        sum+=tmp;

        if(tmp<0)
        {
            number[tmp]++;
        }
        else
        {
            number[tmp+4000]++;
        }
    }

    partition(0,n-1);
    /*
    //지우기
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]"<<arr[i]<<endl;
    }
    */

    //problem1
    average=round(sum/(double)n);
    //average 반올림 넣기

    //problem2
    middle=arr[n/2];

    
    
    
    
    
    
    //problem3

    for(int j=8000;0<=j;j--)
    {
        if(maxc<=number[j] && maxn>j)
        {
            maxc=number[j];
            maxn=j;
        }
    }
    /*
    cout<<"maxn is"<<maxn<<endl;
    cout<<"maxc is"<<maxc<<endl;
    */
    /*
    for(int k=maxn+1;k<8001;k++)
    {
        if(number[k]==maxc)
        {
            maxn=k;
            break;
        }
    }
    */
   /*
    cout<<"maxc2 is"<<maxc<<endl;
    cout<<"maxn2 is"<<maxn<<endl;
    */
    if(maxn>4000)
        maxn-=4000;
    else
    {
        maxn=-maxn;
    }

    //cout<<"maxn is"<<maxn<<endl;
    











    //problem4
    coverage=arr[n-1]-arr[0];

    cout<<average<<endl; //완료
    cout<<middle<<endl; //완료
    cout<<maxn<<endl; //??
    cout<<coverage<<endl;  //완료

    return 0;
}