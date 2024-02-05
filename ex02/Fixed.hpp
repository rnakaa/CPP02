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
		Fixed operator+(const Fixed &cp);
		Fixed operator-(const Fixed &cp);
		Fixed operator*(const Fixed &cp);
		Fixed operator/(const Fixed &cp);

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		bool operator<(const Fixed &cp)const;
		bool operator>(const Fixed &cp)const;
		bool operator<=(const Fixed &cp)const;
		bool operator>=(const Fixed &cp)const;
		bool operator==(const Fixed &cp)const;
		bool operator!=(const Fixed &cp)const;

		static const Fixed &min(const Fixed &f1, const Fixed &f2);
		static const Fixed &max(const Fixed &f1, const Fixed &f2);

		~Fixed();
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(const int setInt);
};
std::ostream& operator<<(std::ostream& os, const Fixed & obj);
