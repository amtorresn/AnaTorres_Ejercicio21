#include <iostream>
#include <cmath>

int main(){
  int i;
  float r;
  int n; n = 1000;
  float x; x=0;
  float y; y = 0;
  float pi = 3.1415926539;
      
  for (i=0;i<n;i++){
    r = drand48()*2*pi;
    x = x + sin(r);
    y = y + cos(r);
    std::cout << x << " " << y << std::endl;
  }
  
  return 0;
}
