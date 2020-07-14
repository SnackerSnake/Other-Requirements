#include <iostream>
#include <memory>

//learning to cast, use pointers, etc.

using namespace std;

//smart pointers (shared and weak also exist)
class Thing {
public: 
  Thing() {cout<<"Thing acquired\n";}
  ~Thing() {cout<<"Thing destroyed\n";}
  };


int main() {
  //casting
  int palpatine=1;
  float super_duper_palpatine = static_cast <float>(palpatine);
  
  cout<<super_duper_palpatine<<endl;
  cout<<" "<<endl;
  
  //pointers
  int futab=25;
  int* joker= &futab;
  int thou_art_i = futab;
  
  cout<<futab<<endl;
  cout<<joker<<endl;
  cout<<thou_art_i<<endl;
  cout<<" "<<endl;
  
  futab=21;
  
  cout<<futab<<endl;
  cout<<joker<<endl;
  cout<<thou_art_i<<endl;
  
  //references
  string sentinel="Good";
  string& paradox=sentinel;
  cout<<" "<<endl;
  cout<<sentinel<<endl;
  cout<<paradox<<endl;
  
  //smart pointer
  unique_ptr<Thing> ptr(new Thing());
  
  return 0;
}