#include<iostream> 
using namespace std;
int main(){
	int a,b;
	cout<<"输入两个整数，程序将计算它们的和，差，积，商"<<endl;
	cout<<"输入第一个整数：" <<endl; 
	cin>>a;
	cout<<"输入第二个整数："<<endl;
	cin>>b;
	cout<<"结果如下：" <<endl;
	cout<<"<a>+<b>="<<a+b<<endl;
	cout<<"<a>-<b>="<<a-b<<endl;
	cout<<"<a>*<b>="<<a*b<<endl;
	cout<<"<a>/<b>="<<a/b<<endl;
	return 0;
}
