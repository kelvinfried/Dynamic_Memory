#include <iostream>

//dynamic memory allocation

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
//Step 2
	//int* array_pointer= new int(5 );	//Incorrect
	int *array_pointer= new int[5 ];
	
	//(*array_pointer )[0 ] = 10;	//Have to use the array specifier for access the dynamic arrays elements.
	array_pointer[0 ] = 10;

	
	for(int i= 0; i< 5; i++ )
	{	
		array_pointer[i ]= i*30;
		std::cout<<"The arrays element has a value of " << array_pointer[i ] <<std::endl;
		std::cout<<"The arrays element has an address of " << &array_pointer[i ] <<std::endl <<std::endl;
	}
	
	delete[] array_pointer;
	array_pointer= NULL;

}