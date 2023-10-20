#include <iostream>
using namespace std;
int main(){
  int a, b ,c;
  cout<<"Enter three numbers: ";
  cin>> a>>b>>c;
  if(a > b && b > c || c > b && b > a){
    cout<<"In order";

  }
  else{cout<<"Not in order";}

  return 0;


}
