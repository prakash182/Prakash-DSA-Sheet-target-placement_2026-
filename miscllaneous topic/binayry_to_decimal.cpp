// binary to decimal conversion

#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;

  int ans = 0;
  int pow = 1;

 while(n > 0)
  {
     int rem = n % 10;

     ans += (rem*pow);

     n /= 10;
     pow = pow*2;

  }

  cout<<ans<<endl;
}