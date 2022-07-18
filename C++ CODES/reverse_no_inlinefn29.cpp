#include<iostream>
using namespace std;
class item
{
	private:
		int n,i;
		public:
	    int in();
		int show();
};
	inline int item::in()
		{
			cout<<"Enter value to Display the number in reverse: ";
			cin>>n;
		}
		inline int item::show()
		{
			cout<<"The reverse of the Entered Number: ";
			for(i=n;n>0;n=n/10)
			{
				cout<<n%10;
			}
		}
int main()
{
	item R;
	R.in();
    R.show();
    return 0;
}