#include<iostream>

using namespace std;

class RBI{
	public :
	int i;
	void roi1(){
		cout<<" RBI rate :- 11%"<<endl;
			
	}

};
class SBI : public RBI{
	public :
	
		void roi2(){
		cout<<" SBI rate :- 10%"<<endl<<endl;
	}

};

class BOB : public RBI{
	public :
	
	void roi3(){
		cout<<" BOB rate :- 13%"<<endl<<endl;
	}

};

class ICICI : public RBI{
	public :
	void roi4(){
			
		cout<<" ICICI rate :- 12%"<<endl<<endl;
	}

};


main(){
	
	
	SBI obj2;
	obj2.roi1();
	obj2.roi2();
	
	BOB obj3;
	obj3.roi1();
	obj3.roi3();
	
	ICICI obj4;
	obj4.roi1();
	obj4.roi4();
	
	
	

	
	
	return 0;
}
