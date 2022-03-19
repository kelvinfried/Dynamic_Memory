#include <iostream>

//dynamic memory allocation

class Soldier
{
	public:
		std::string name;
		int hp;
		int attack;
		std::string weapon_name;
		
		Soldier()
		{
			name= "soldier_test";
			hp= 100;
			attack= 10;
			weapon_name= "generic_weapon";
		}
};

/*class Person
{
	public:
		int* age;
	
		//Constructor
		Person()
		{
			//Sets the value
			age= new int(10);
		}
		
		//Destructor- To  delete the dynamic vairables, called upon class deletion
		~Person()
		{
			//Delets it
			delete age;
			age= NULL;
		}
};*/

class Person
{
	public:
		std::string name;
		int age;
		float height;
		
	
		Person()
		{
			name= "Basic name";
			age= 0;
			height= 0.0f;
		}
		
		~Person()
		{
		}
};

class Car
{
	public:
		std::string manufacturer;
		float length;
		//Person driver;	//Going to creat a dynamic class, as one of the class attributes
		Person* occupant_pointer;
	
		Car()
		{
			manufacturer= "Basic car production";
			length= 0.0f;
			//driver= Person();
			occupant_pointer= new Person[2 ];
		}
		
		//Over-ridden constructor
		Car(int number_of_passengers )
		{
			manufacturer= "Basic car production";
			length= 0.0f;
			occupant_pointer= new Person[number_of_passengers ];
		}		
		
		~Car()
		{
			delete occupant_pointer;
			occupant_pointer= NULL;
		}
};

int main(void )
{
//Step 1
	/*std::cout<<"Test" <<std::endl;
	
	//Creat a dynamic vairable
	int* i= new int;
	
	*i= 10;
	
	std::cout<<"The value of the dynamic integer is " <<*i <<std::endl;
	std::cout<<"The address of the dynamic integer is " <<i <<std::endl;
	
	//Delete the dynamic int
	delete i;
	i= NULL;*/
/*//Step 2
	//int* array_pointer= new int(5 );	//Incorrect
	int *array_pointer= new int[5 ];
	
	//(*array_pointer )[0 ] = 10;	//Have to use the array specifier for access the dynamic arrays elements.
	array_pointer[0 ] = 10;

	
	for(int i= 0; i< 5; i++ )
	{	
		array_pointer[i ]= 999;
		//std::cout<<"The arrays element has a value of " << array_pointer[i ] <<std::endl;
		//std::cout<<"The arrays element has an address of " << &array_pointer[i ] <<std::endl <<std::endl;
	}
	
	std::cout<<"Element 3 of the array has a value of " <<std::endl;
	std::cout<<"Value: "<< array_pointer[3 ] <<std::endl;
	std::cout<<"Address: "<< &array_pointer[3 ] <<std::endl;
	
	delete[] array_pointer;
	array_pointer= NULL;*/
	
//Step 3
	//Create a single dynamic object from the class
	/*Soldier* soldier_pointer= new Soldier;
	
	//Access the object
	std::cout<<"The soldiers name is " <<soldier_pointer-> name <<std::endl;
	//Attempt to change the objects value 
	soldier_pointer-> name= "new_soldier";
	std::cout<<"The soldiers name is " <<soldier_pointer-> name <<std::endl;*/
	
	/*//Creating mutliple dynamic objects from a class
	Soldier* solders_pointer= new Soldier[2 ];
	
	//Access the objects;
	for(int i= 0; i< 2; i++ )
	{
		//std::cout<<"The soldiers name is " <<solders_pointer[i ]-> name <<std::endl;	This does not work will need to use the array  access method like before when I was worked with the dynamic arrays
		std::cout<<"The soldiers name is " <<solders_pointer[i ].name <<std::endl;
		
		solders_pointer[i ].name= "funny soldier";
		std::cout<<"The soldiers new name is " <<solders_pointer[i ].name <<std::endl <<std::endl;
	}
	
	//Clean up of dynamic class
	delete solders_pointer;	//You do not do delete *object pointer[]* as it does not work
	solders_pointer= NULL;*/
	
	//Trial for working with a class with dynamic vairables
	/*Person* human= new Person;
	
	//std::cout<<"Test output the age of the human is " <<human-> age <<std::endl;	
	std::cout<<"Test output the age of the human is " <<*(human-> age )<<std::endl;
		//I had to dereferances to called attribute so it could be accessed directly, not the memory address
	//Clean up
	delete human;
	human= NULL;*/
	
	//Trial for working with multiple fully dynamic classes
	/*Person* human= new Person[2];
	
	for(int i=0; i< 2; i++ )
	{
		(*human[i ].age )= i;
		std::cout<<"The human number " <<i <<" has an age of " <<(*human[i ].age ) <<std::endl;
	}
	
	delete human;
	human= NULL;*/
	
//Step 4
	//Example code	-Where we take and then relinquish the memory from the free store
	//while(1 )
	//{
	//Block 1, memory leak
		//int* p= new int;
		
		//Removing these will cause a memeory leak and the program will balloon in size
		//delete p;
		//p= NULL;
		
	//Block 2 dangaling pointers - Assiging happends here, so does deletion but the issue is the pointers for the variables are not being 
	/*//defined as NULL, because of this since the address has been relinuqished it could be used by the OS for another reason, possibly causing a crash
		int * r = new int;
		*r = 5;
		delete r;
		cout << *r << endl;*/
		
	//Block 3 Dereferancing Null pointers - This will cause anoutright crash in the application
		//int * g = NULL;
		//cout << *g << endl;
		
	//Block 4 not deleting dynamic arrays correclty,if we only delete the first array value, we will then lose access to the whole
	//Array.
		//int* m= new int[10 ];
		//delete m;
		//m= NULL;
	//}
	
//Step 6	//Step 7
	//Class from the stack
	/*Car test_car; 
	//Test to print out the person from the car
	std::cout<<"The person in the car is called " <<test_car.driver.name <<std::endl <<std::endl;
	
	//Class from the free store
	Car* car_pointer= new Car;
	//Test to print out the person from the car
	std::cout<<"The person in the car is called " <<car_pointer-> driver.name <<std::endl <<std::endl;*/
	
	//Step 9
	//Creat car from the free store
	Car* car_pointer= new Car;
}