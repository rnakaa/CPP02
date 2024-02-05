#include <iostream>
#include <string>

class Fixed{
	private:
		int integer;
		static const int  bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &cp);
		Fixed &operator=(const Fixed &cp);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int setInt);
};
