#include<cstdio>
#include<iostream>


using namespace std;

class Sales{
    protected:
        int saleCount;
    public:
        Sales(){
        }
        void setSales(int _saleCount){
			saleCount = _saleCount;
        }
        int getSales(){
			return saleCount;
        }


};

class Employee :public Sales{
    private:
        char name[10];
        int salary;
    public:
        friend class Queue;
        
        Employee(char _name[10],int _salary){
			int i;
			saleCount = 0;
			for(i=0;i<10;i++)
				name[i]=_name[i];
        	salary = _salary;
		}
		int getSalary(){
			return salary+saleCount/10;
		}
};




int main(){
	char name[10];
	int salary;
	int sale;
	cout<<"name:"<<endl;
	cin>>name;
	cout<<"salary:"<<endl;
	cin>>salary;
	cout<<"sale:"<<endl;
	cin>>sale;
	

	
    Employee one(name,salary);
	one.setSales(sale);

    cout<<one.getSalary()<<endl;

    return 0;
}



