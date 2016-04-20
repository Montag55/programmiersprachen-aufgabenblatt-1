#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b){
	int c = 0;
	while (b != 0){
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int checksum(int a){
	int b = 0, c = 0;
	while (a != 0){
		b = a%10;
		a = a/10;
		c = c + b;
	}
	return c;
}

int sumMultiples(){
	int a = 0;
	for (int i = 1; i <= 1000; ++i){
		if (i%3 == 0 || i%5 == 0)
			a = a+i;
	}
	return a;
}

double fract(double a){
	int b = a;
	double c = a - (double)b;
	return c;
}

double zyl (double h, double r){
	double v = 2*M_PI*r*h;
	double o = 2*(M_PI*r*r)+(2*r*M_PI*h);
	return v, o;
}


TEST_CASE("describe_gcd", "[gcd]"){
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("describe_checksum", "[checksum]"){
	REQUIRE(checksum(116232) == 15);
	REQUIRE(checksum(62) == 8);
	REQUIRE(checksum(123456789) == 45);
}

TEST_CASE("describe_sumMultipes", "[sumMultiples]"){
	REQUIRE(sumMultiples() == 234168);
}

TEST_CASE("describe_fract", "[fract]"){
	REQUIRE(fract(1.123) == Approx(0.123));
	REQUIRE(fract(3.333) == Approx(0.333));
	REQUIRE(fract(1.122343) == Approx(0.122343));
}

TEST_CASE("describe_zyl", "[zyl]"){
	REQUIRE(zyl(1, 1) == (Approx(6.283), Approx(12.5663706144)));
}

int main(int argc, char* argv[]){
	return Catch::Session().run( argc, argv);
}