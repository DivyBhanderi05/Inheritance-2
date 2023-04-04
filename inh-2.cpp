#include<iostream>

using namespace std;

class RBI{
	public :
	int i1;
	void roi1(){
		cout<<"Enter Integer 1 : ";
		cin>>i1;	
	}

};
class SBI{
	public :
		int i2;
		void roi2(){
		cout<<"Enter Integer 2 : ";
		cin>>i2;
	}

};

class BOB{
	public :
	int i3;
	void roi3(){
		cout<<"Enter Integer 3 : ";
		cin>>i3;
	}

};

class ICICI : public RBI , public SBI , public BOB{
	public :
		int i4;
	void roi4(){
			
		cout<<"Enter Integer 4 : ";
		cin>>i4;
		
		cout<<endl<<"Sum of all four integers is : "<<i1+i2+i3+i4<<endl;
	}

};


main(){
	
	
	ICICI obj;
	obj.roi1();
	obj.roi2();
	obj.roi3();
	obj.roi4();
	
	
	return 0;
}
