#include<iostream>
using namespace std;
class Factorial{
	private:
		int n;
		public:
			void getInput(){
				cout<<"Enter a number:"<<endl;
				cin>>n;
			}
			void fact(){
				int fact=1;
				for(int i=1;i<=n;i++){
					fact*=i;
				}
				cout<<"factorial of "<<n<<"!="<<fact;
			}
};
int main(){
	Factorial obj;
	obj.getInput();
	obj.fact();
	return 0;
}
