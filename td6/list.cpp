#include <iostream>
#include <list>
#include <string>

int main(){
  // one line is missing (list declaration)
  std::list<std::string> l;
  l.push_back(" is");
  l.push_back(" fast");
  l.push_front("C++");
  l.push_back(" but");
  l.push_front(" difficult");
  // one line is missing (check the expected output)
  l.pop_front();
  // one line is missing (check the expected output)
  l.pop_back();

  for(std::list<std::string>::iterator iter = l.begin();
      iter != l.end();
      iter++){
    std::cout<<*iter;
  }

  std::cout << std::endl;

  return 0;
}