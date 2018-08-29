#include <iostream>
#include <string>
using namespace std; 


string build_pyramid(int num){
  string pyramid, padding; 

  while (num > 0){
    string string_num = to_string(num);
    int current_num = num - 1; 

    while(current_num > 0){
      string_num = to_string(current_num) + string_num + to_string(current_num);
      current_num--; 
    }

    pyramid = ( padding + string_num + "\n") + pyramid; 
    padding += " "; 
    num--; 
  }

  return pyramid;
}

int main() {
  int num;
  cout << "Enter number of steps: ";
  cin >> num;

  cout << build_pyramid(num);

  return 0;
}
