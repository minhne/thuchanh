#include<iostream>
using namespace std;
class serial{
	private:
		int id;
		static int number;
	public:
		serial(){
			number++;
			id=number;
		}
		void in(){
			cout<<"toi la nhan vien so "<<this->id<<endl;
		}
};
int serial::number=0;
int main(){
	serial s;
	s.in();
	serial s1;
	s1.in();
	serial s2;
	s2.in();
	return 0;
}
