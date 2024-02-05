#include <iostream>
#include "Fixed.hpp"
int main( void ) {
	{
		Fixed f1(2);
		Fixed f2(8);

		std::cout << "" << std::endl;

		std::cout << "f1: " << f1 << std::endl;
		std::cout << "f2: " << f2 << std::endl;
		std::cout << "-- Min --" << std::endl;
		std::cout << Fixed::min(f1, f2) << std::endl;
		std::cout << "-- Max --" << std::endl;
		std::cout << Fixed::max(f1, f2) << std::endl;

		if (f1 < f2)
			std::cout << "< test passed" << std::endl;
		if (f1 <= f2)
			std::cout << "<= test passed" << std::endl;
		if (!(f1 > f2))
			std::cout << "> test passed" << std::endl;
		if (!(f1 >= f2))
			std::cout << ">= test passed" << std::endl;
		if (!(f1 == f2))
			std::cout << "== test passed" << std::endl;
		if (f1 != f2)
			std::cout << "!= test passed" << std::endl;

		std::cout << "" << std::endl;
		Fixed f3 = f1 + f2;
		std::cout << "f3(f1 + f2): " << f3<< std::endl;
		f3 = f1 - f2;
		std::cout << "f3(f1 - f2): " << f3<< std::endl;
		f3 = f1 * f2;
		std::cout << "f3(f1 * f2): " << f3<< std::endl;
		f3 = f1 / f2;
		std::cout << "f3(f1 / f2): " << f3<< std::endl;

		f3++;
		std::cout << "increment f3: " << f3 << std::endl;
		f3--;
		std::cout << "decrement f3: " << f3 << std::endl;		
	}
	{
		std::cout << std::endl;
		std::cout << "basic tests --------------" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << "a\n";
	}
	// fdsal;nfasdofasdnoijasdfasdibvapisdfhubapsfdasduifpauhwef
	return (0);
}
