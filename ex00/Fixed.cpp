#include"Fixed.hpp"

Fixed::Fixed():integer(0){
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed &cp){ 
	std::cout << "Copy constructor called\n";
	*this = cp;
}

Fixed &Fixed::operator=(Fixed &cp){
	std::cout << "Copy assignment operator called\n";
	if(this == &cp)
		return *this;
	integer = cp.getRawBits();
	return *this;
}

int Fixed::getRawBits(void){
	std::cout << "getRawBits member function called\n";
	return (integer);
}

void Fixed::setRawBits(int setInt){
	std::cout << "setRawBits member function called\n";
	integer = setInt;
}
