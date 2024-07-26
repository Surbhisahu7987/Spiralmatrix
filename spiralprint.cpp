#include<iostream>
using namespace std;
int main()
{
    int m;
  cout<<"enter the no of rows of  matrix";
   cin>>m;
      int n;
  cout<<"enter the num of colm of  matrix";
   cin>>n;
   int arr[m][n];
    for(int i=0;i<=m-1;i++)
     {
         for(int j=0;j<=n-1;j++)
         {
             cin>>arr[i][j];
         }
         cout<<endl;
     }
     //spiral
     int minrow=0;
     int mincolm=0;
     int maxrow=m-1;
     int maxcolm=n-1;
     
    
    while (minrow<=maxrow && mincolm<=maxcolm)
    {
        //right
        for(int j=mincolm;j<=maxcolm;j++)
        {
            cout<<arr[minrow][j]<<" ";
        }
        minrow++;
        if(minrow>maxrow || mincolm>maxcolm)
        break;
        //down
        for(int i=minrow;i<=maxrow;i++)
        {
            cout<<arr[i][maxcolm]<<" ";
        }
        maxcolm--;
        if(minrow>maxrow || mincolm>maxcolm)
        break;
        //left
        for(int j=maxcolm;j>=mincolm;j--)
        {
            cout<<arr[maxrow][j]<<" ";
        }
        maxrow--;
        if(minrow>maxrow || mincolm>maxcolm)
        break;
        //up
        for(int i=maxrow;i>=minrow;i--)
        {
            cout<<arr[i][mincolm]<<" ";
        }
        mincolm++;
        if(minrow>maxrow || mincolm>maxcolm)
        break;
    }
    
}