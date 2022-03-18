#include <iostream>

//dynamic memory allocation

int main(void )
{
//Step 1
	std::cout<<"Test" <<std::endl;
	
	//Creat a dynamic vairable
	int* i= new int;
	
	*i= 10;
	
	std::cout<<"The value of the dynamic integer is " <<*i <<std::endl;
	std::cout<<"The address of the dynamic integer is " <<i <<std::endl;
	
	//Delete the dynamic int
	delete i;
	i= NULL;
	
	
}