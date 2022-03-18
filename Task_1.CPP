#include <iostream>

//dynamic memory allocation

int main(void )
{
//Step 1
	std::cout<<"Test" <<std::endl;
	
	int* i= new int;	//Creat a dynamic vairable
	
	*i= 10;
	
	std::cout<<"The value of the dynamic integer is " <<*i <<std::endl;
	
	
}