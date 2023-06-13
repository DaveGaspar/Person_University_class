#include <iostream>

class Person{
	private:
		std::string name;
		std::string surname;
		int age;
		std::string university;
		int year;
		double average_mark;
		int fee;
		int discount;
	public:
		Person(){
			name = "Undefined";
			surname = "Undefined";
			age = 18;
			university = "Undefined";
			year = 1;
			average_mark = 4;
			fee = 210000;
			discount = 10;
		}

		void set_name(std::string name){
			this->name = name;
		}

		std::string get_name(){
			return name;
		}
		
		void set_surname(std::string surname){
			this->surname = surname;
		}

		std::string get_surname(){
			return surname;
		}
		
		void set_age(int age){
			this->age = age;
		}

		int get_age(){
			return age;
		}
		
		void set_university(std::string university){
			this->university = university;
		}

		std::string get_university(){
			return university;
		}
		
		void set_year(int year){
			this->year = year;
		}

		int get_year(){
			return year;
		}
		
		void set_average_mark(double average_mark){
			this->average_mark = average_mark;
		}

		double get_average_mark(){
			return average_mark;
		}
		
		void set_fee(int fee){
			this->fee = fee;
		}

		int get_fee(){
			return fee;
		}
		
		void set_discount(int discount){
			this->discount = discount;
		}

		int get_discount(){
			return discount;
		}
};

int main(){
	Person* obj = new Person;
	obj->set_name("Artyom");
	obj->set_surname("Avetisyan");
	obj->set_age(19);
	obj->set_university("EPH");
	obj->set_year(2);
	obj->set_average_mark(9.7);
	obj->set_fee(340000);
	obj->set_discount(20);
	
	std::cout << obj->get_name() << std::endl;
	std::cout << obj->get_surname() << std::endl;
	std::cout << obj->get_age() << std::endl;
	std::cout << obj->get_university() << std::endl;
	std::cout << obj->get_year() << std::endl;
	std::cout << obj->get_average_mark() << std::endl;
	std::cout << obj->get_fee() << std::endl;
	std::cout << obj->get_discount() << std::endl;

	delete obj;
	obj = nullptr;
	return 0;
}