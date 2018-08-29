#include <iostream>

using namespace std;

int main() {
  int num,  index = 1;
  unsigned long long int multiple = 1; 

  cout << "Enter number of steps: ";
  cin >> num;  
  
  while(index <= num){
    cout << multiple * multiple << endl;
    multiple *= 10;
    multiple += 1; 
    index++;
  }
  return 0;
}

