#include<iostream>
using namespace std;
class employee{
	private:
		int id;
		int year;
		float money;
	public:
		employee(int id,float money,int year){
			this->id=id;
			this->money=money;
			this->year=year;
		}
		void tinh(){
			float m=this->money;
			for(int i=0;i<this->year;i++){
				m=(m+(m*0.055));
			}
			cout<<"so tien cua "<<this->id<<"sau "<<this->year <<" nam lam viec : "<<m<<endl;
		}
};
int main(){
	employee e1(1,3000,5);
	employee e2(1,3000,2);
	employee e3(1,3000,1);
	e1.tinh();
	e2.tinh();
	e3.tinh();
	return 0;
}
