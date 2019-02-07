#include <map>
#include <iostream>
#include <string.h>
using namespace std;
map<int,string> m;
int no;
class employee{
private:
  int id;
  string name;
public:
  void input();
  void output();
};
void employee::input()
{
  cout << " \n Enter the first name of the employee:";
  cin >> name;
  cout << "Enter the id number of the employee:";
  cin >> id;
  m[id]=name;}
void employee::output()
{
  cout<<" \n Enter the id number to search the employee: ";
  cin>>no;
  name=m[no];
  cout<<name<<endl;}
int main(){
  employee e[6];
  for(int i=0;i<2;i++)
  {
    std::cout <<i+1;
    e[i].input();}
  employee p;
  p.output();
}
