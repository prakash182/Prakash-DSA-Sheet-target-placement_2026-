//decimal to binary 

#include<iostream>
using namespace std;

int main(){
  int n ;
  cin>>n;

  int ans, pow = 1;

  while(n>0)
  {
    int rem = n %2;

    n /= 10;

    ans += (rem*pow);

    pow = pow*10;

    cout<<ans<<endl;
  }
}