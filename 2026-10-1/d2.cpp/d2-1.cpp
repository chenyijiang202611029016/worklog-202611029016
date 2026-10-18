#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"请输入三个整数"<<endl;
	cin>>a>>b>>c;
	if(a>b&&a>c) 
	{cout<<a<<endl;}
	else{if(b>a&&b>c)
	{cout<<b<<endl;}
	else{if(c>b&&c>a)
	{cout<<c<<endl;	}
	}
	}
	return 0; 
}
