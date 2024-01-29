#include <iostream>
#include <string>
#include <math.h>

class Fixed{
	private:
		int _integer;
		static const int  _bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &cp);
		Fixed(const int n);
		Fixed(const float f);
		Fixed &operator=(const Fixed &cp);
		~Fixed();
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(const int setInt);
};
std::ostream& operator<<(std::ostream& os, const Fixed & obj);

//Fixed a, beta;
//a = b;
//
//Fixed a;
//a;ladksj
//a dsaf 
//
//Fixed b(a);
// b = a;
