#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
	int a,b;
	srand(unsigned(time(0)));
	a=rand()%10+1;
	b=rand()%10+1;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	return 0;
}
