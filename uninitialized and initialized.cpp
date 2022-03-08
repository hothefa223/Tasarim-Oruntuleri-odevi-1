#include <iostream>
using namespace std;

class Human {     
  private:           
    int Age;       
	double Weight=80;
	string Name;
	
	public:
	int getAge(){
	return Age;	
	};
    void setAge(int x){
    	Age=x;
	};
    double getWeight(){
	return Weight;	
	};
    void setWeight(double x){
    	Weight=x;
	};
    string getName(){
    	return Name;
	};
    void setName(string x){
        Name=x;	
	};
};

int main() {
  Human myObj;  

  myObj.setAge(13); 
  myObj.setName("Ahmed");

  cout << myObj.getName() << "\n";
  cout << myObj.getAge()<<"\n";
  cout << myObj.getWeight()<<"\n";
  return 0;
}
