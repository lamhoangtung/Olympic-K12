#include <iostream>
#include <fstream>

using namespace std;

long a[]={0,1,2,4,8,16,23,46,29,58,116,223,446,289,578,1156,1223,2446,2489,4789,5789,11578,12356,12247,24449,48889,77789,155578,111356,122227,244445,48889,77789,155578,111356,122227,244445};

int main(){
    ofstream myfile ("arr2.txt");
    for (int i=1;i<=10000;i++){
      if (i<=30) myfile << a[i] << " ";
      else myfile << a[30+i%6] << " ";
    }
}
