#include <iostream>
/*
*   - съдъдржа елементи от еднакъв тип
*   - има фиксиран брой елементи
*   - елементите са подреди в паметта и се достъпват по индекс
* 
*   - encapsulation - капсулация
*   - abstraction
*   - inheritance
*   - polymorphism 
*/
struct Person {

private:
	int age;
	double height;
	bool isStudent;
public:
	void print();
	// setters & getters (mutators)
	int getAge();
	double getHeight();
	bool getIsStudent();

	void setAge(int age);
	void setHeight(double height);
	void setIsStudent(bool isStudent);
};
void Person::print() {
	std::cout <<"Age:" <<this->age << std::endl;
	std::cout <<"Height:" << this->height << std::endl;
	std::cout << "IsStudent:" <<this->isStudent << std::endl;
}
void Person::setAge(int age) {
	this->age = age;
}
void Person::setHeight(double height) {
	this->height = height;
}
void Person::setIsStudent(bool isStudent) {
	this->isStudent = isStudent;
}
int Person::getAge() {
	return this->age;
}
double Person::getHeight() {
	return this->height;
}
bool Person::getIsStudent() {
	return this->isStudent;
}
void getOlder(Person p1, Person p2) {
	if (p1.getAge() > p2.getAge())
	{
		p1.print();
	}
	else
	{
		p2.print();
	}
}
int sum(int a, int b)
{
	return a + b;
}

void combination(int arr[], int combo[], int start, int n, int index, int r)
{
	if (index == r)
	{
		for (int i = 0; i < r; i++)
		{
			std::cout << combo[i]<<" "; //{1,2}
		}
		std::cout << std::endl;
		return;
	}

	for (int i = start; i < n && n - i + 1; i++) 
	{
		combo[index] = arr[i];
		combination(arr, combo, i + 1, n, index + 1, r);
	}
}
void printAll(int arr[], int n, int r) {
	int combo[100] = { 0 };
	combination(arr, combo, 0, n, 0, r);
}
int main()
{
	int arr[] = { 1,2,3,4 };
	printAll(arr,4,2);
	/*
	* Given an array of size n, generate and print all 
	possible combinations of r elements in array. For example, if input array is {1, 2, 3, 4}
	and r is 2, then output should be {1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4} and {3, 4}.
	*/

	// bubble sort
	/*int arr[] = { 40,2,19,5,203,4,20 };
	int n = 7;
	for (int i = 0; i < n; i++)					// i = 0, i = 1
	{
		for (int j = 0; j < 7 - n - 1 ; j++)   // i = 0, j = 6; i = 1 j = 5
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (size_t i = 0; i < 7; i++)
	{
		std::cout << arr[i] << std::endl;;
	}
	/*
	Person p; // int c;

	p.setAge(20);
	p.setHeight(1.70);
	p.setIsStudent(false);

	Person c; 
	c.setAge(40);
	c.setHeight(1.90);
	c.setIsStudent(false);

	std::cout << "The older is: " << std::endl;
	getOlder(p, c);
	
	std::cout << "The sum of the two ages is: " << sum(p.getAge(), c.getAge());
	*/
	/*
		std::cout << "Age: " << p.getAge() << std::endl;
		std::cout << "Height: " << p.getHeight() << std::endl;
		std::cout << "isStudent: " << p.getIsStudent() << std::endl;
	*/
	/*
	std::cin >> p.age;
	std::cin >> p.height;
	std::cin >> p.isStudent;

	std::cout << "Age: " << p.age << std::endl;
	std::cout << "Height: " << p.height << std::endl;
	std::cout << "isStudent: " << p.isStudent << std::endl;
	*/
}
