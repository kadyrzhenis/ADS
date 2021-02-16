#include <iostream>
using namespace std;
int GCD(int a,int b)
{
    if(a%b==0) return b;
    return GCD(b,a%b);
}
 void test2()
{
     int a[]={10,20,24,100};
     int b[]={12,13,18,25};
     int r[]={2,1,6,25};
     int len=sizeof(a)/sizeof(int);
     for(int i=0;i<len;i++)
    {
        int m=GCD(max(a[i],b[i]),min(a[i],b[i]));
        if(m==r[i])
        { 
          cout<<"test "<<m<<" "<<i+1<<" passed\n";
        }
        else
        {
           cout<<"test "<<i+1<<" failed\n";
        }
    }   

}
int main()
{
    test2();
    return 0;
}