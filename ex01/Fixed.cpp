#include"Fixed.hpp"

Fixed::Fixed(): _integer(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) : _integer(n << _bits){
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : _integer(static_cast<int>(roundf(f * (1 << _bits)))){
	std::cout << "Float constructor called\n";
}

int Fixed::toInt(void)const{
	return (_integer >> _bits);
}

float Fixed::toFloat( void ) const{
	return (((static_cast<float>(_integer) / static_cast<float> (1 << _bits))));
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &cp){ 
	std::cout << "Copy constructor called\n";
	*this = cp;
}

Fixed &Fixed::operator=(const Fixed &cp){
	std::cout << "Copy assignment operator called\n";
	if(this == &cp)
		return *this;
	_integer = cp.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	return (this->_integer);
}

void Fixed::setRawBits(const int setInt){
	std::cout << "setRawBits member function called\n";
	_integer = setInt;
}

std::ostream& operator<<(std::ostream& os, const Fixed & obj)
{
	os << obj.toFloat();
    return os;
}
