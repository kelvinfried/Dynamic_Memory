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
	//Create a dynamic object from the class
	Soldier* soldier_pointer= new Soldier;
	
	//Access the object
	std::cout<<"The soldiers name is " <<soldier_pointer-> name <<std::endl;
	//Attempt to change the objects value 
	soldier_pointer-> name= "new_soldier";
	std::cout<<"The soldiers name is " <<soldier_pointer-> name <<std::endl;
	
}