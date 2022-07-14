#include<iostream>
using namespace std;
int findfactsum(int N){
    int f=1, sum=0;
    for (int i = 1 ;  i <= N; i++)
    {
        f = f*i;
        sum+= f;
    }
    return sum;

} 
int  main()
{
    int N=5;
    cout << findfactsum(N)
<<endl;
return 0;
}