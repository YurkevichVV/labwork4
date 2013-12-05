#include <iostream>

using namespace std;

int find_right_number(int a);
const int N=4;
void OutputArray (int A[][N], int n, int m)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout.width(6);
            cout<<A[i][j];
            cout.width(6);
        }
        cout<<endl;
    }
}

int main()
{
  const  int n=3, m=4;
  int A[n][m]={{118,30,39,8},{5,67,9,3},{2,34,6,78}};
    cout<<"Array A: "<<endl;
    OutputArray (A, n, m);
  int sum = 0;
     for(int i = 0; i < n; i++)
     {
         for(int j= 0; j < m ; j++)
          {
             sum+=find_right_number(A[i][j]);
          }
     }
  cout << "sum is: " << sum << "\n";

  return 0;

}

int find_right_number(int a)
{
    int c = a;
    while(a!=0)
    {
        if((a%10==0)||(a%10==1)||(a%10==3)||(a%10==8))
        {
            a/=10;

        }
        else return 0;
    }
    return c;
}
