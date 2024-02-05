#include"Fixed.hpp"

Fixed::Fixed(): _integer(0){
}

Fixed::Fixed(const int n) : _integer(n << _bits){
}

Fixed::Fixed(const float f) : _integer(static_cast<int>(roundf(f * (1 << _bits)))){
}

int Fixed::toInt(void)const{
	return (_integer >> _bits);
}

float Fixed::toFloat( void ) const{
	return (((static_cast<float>(_integer) / static_cast<float> (1 << _bits))));
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &cp){ 
	*this = cp;
}

Fixed &Fixed::operator=(const Fixed &cp){
	if(this == &cp)
		return *this;
	_integer = cp.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &cp){
	return Fixed(this->toFloat() + cp.toFloat());
}

Fixed Fixed::operator-(const Fixed &cp){
	return Fixed(this->toFloat() - cp.toFloat());
}

Fixed Fixed::operator*(const Fixed &cp){
	return Fixed(this->toFloat() * cp.toFloat());
}

Fixed Fixed::operator/(const Fixed &cp){
	return Fixed(this->toFloat() / cp.toFloat());
}

bool Fixed::operator<(const Fixed &cp) const{
	return (this->toFloat() < cp.toFloat());
}

bool Fixed::operator>(const Fixed &cp) const{
	return (this->toFloat() > cp.toFloat());
}

bool Fixed::operator<=(const Fixed &cp) const{
	return (this->toFloat() <= cp.toFloat());
}

bool Fixed::operator>=(const Fixed &cp) const{
	return (this->toFloat() >= cp.toFloat());
}

bool Fixed::operator==(const Fixed &cp) const{
	return (this->toFloat() == cp.toFloat());
}

bool Fixed::operator!=(const Fixed &cp) const{
	return (this->toFloat() != cp.toFloat());
}


int Fixed::getRawBits(void) const{
	return (this->_integer);
}

void Fixed::setRawBits(const int setInt){
	std::cout << "setRawBits member function called" << std::endl;
	_integer = setInt;
}

std::ostream& operator<<(std::ostream& os, const Fixed & obj)
{
	os << obj.toFloat();
    return os;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2){
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2){
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::operator++(){
	this->_integer += 1;
	return *this;
}

Fixed &Fixed::operator--(){
	this->_integer -= 1;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed exthis = *this;
	++(*this);
	return exthis;
}

Fixed Fixed::operator--(int){
	Fixed exthis = *this;
	--(*this);
	return exthis;
}
