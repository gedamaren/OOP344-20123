#include <iostream>
using namespace std;

typedef int WeekDay;
const int sun = 0;
const int mon = 1;
const int tue = 2;
//.
//.
const int sat = 6;

int main(){
  WeekDay wd;
  for(wd = 0; wd<=sat; wd++){
    cout<<wd<<endl;
  }
  return 0;
}
