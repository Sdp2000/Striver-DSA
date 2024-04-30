//Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit.

#include<iostream>
#include<utility>
#include<tuple>

using namespace std;

int main() {

  //ways to initialize pairs

  //initialize using index
  pair<int,string> p1;

  p1.first=1;
  p1.second="Paul";

  cout<<p1.first<<" "<<p1.second<<endl;

  //initilize using value

  pair<int,int> p2(2,3);
  cout<<p2.first<<" "<<p2.second<<endl;

  //initialize using make_pair

  pair<int,int> p3=make_pair(4,5);
  cout<<p3.first<<" "<<p3.second<<endl;

  //initialize using curly braces

  pair<int,int> p4={6,7};
  cout<<p4.first<<" "<<p4.second<<endl;

  //If not initialized, the first value of the pair gets automatically initialized to 0. 
  pair<int,int> p5;

  p5.second=7;

  cout<<p5.first<<" "<<p5.second<<endl;
  
  //Pair Functions

  //make_pair(): This template function allows to create a value pair without writing the types explicitly. 

  pair<int,string> p6;
  p6=make_pair(6,"String");
  cout<<p6.first<<" "<<p6.second<<endl;

  //swap: This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of the same type. 


  p1.swap(p6);

  //tie(): This function works the same as in tuples. It creates a tuple of lvalue references to its arguments i.e., to unpack the tuple (or here pair) values into separate variables.

  pair<int, int> p7 = { 1, 2 };
  int a, b;
  tie(a, b) = p7;
  cout << a << " " << b <<endl;

  return 0;
  
}