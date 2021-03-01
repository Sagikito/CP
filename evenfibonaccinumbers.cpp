#include<iostream>

int main()
{
  int a = 0;
  int b = 1;
  int c = 0;
  int suma = 0;
  while(c<=4000000)
  {
    c = a + b;
    a = b;
    b = c;
    if(c%2 == 0)
    	suma+= c;
  }
  std::cout<<suma;	
}