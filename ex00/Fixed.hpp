#include <iostream>
#include <string>

class Fixed{
	private:
		int integer;
		static const int  bits = 8;
	public:
		Fixed();
		Fixed(Fixed &cp);
		Fixed &operator=(Fixed &cp);
		~Fixed();
		int getRawBits(void);
		void setRawBits(int setInt);
};

//Fixed a, beta;
//a = b;
//
//Fixed a;
//a;ladksj
//a dsaf 
//
//Fixed b(a);
// b = a;
