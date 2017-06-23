#include <iostream>
#include <cmath>
#include <random>

int euklides(int m, int a){
	if(0 < a && a < m){
		for(int r = m % a; r != 0; r = m % a){
			m = a; a = r;
			}
		return a;
	} else
		throw "hibás paraméterek az euklidesz függvénynél";
}

/*
/// a * b '=' b (mod m)
int solve_linear_congruence_with_Euklides(int a, int b, int m){
	if(0 < a && b < m){
		int M = m, s = 0, t = 0;
		while(true){
			t = m/a;
			r = m % a;
			if(r == 0){
				b % a == 0 ? 
			}
		}
	}
}*/

///Ismételt négyzetreemelések módszere
int ismetelt_negyzetreemelesek_modszere(int a, int b, int m){
	if(a < 0 && a < m && b >= 1){
		int c = 1;
		while(b != 0){
			if(b % 2 == 0)
				c = (c*a)%m;
			b = b/2;
			a = (a*a)%m;
		}
		return c;
	} else
		throw "rosszak a parameterek az ismetelt negyzetreemelesnel";
}

bool Miller_Rabin(int m){
	if(m % 2 == 0){
		for(int i = 0; i<100; i++){
			int constans = 0;
			while((m-1) / (int) std::pow(2, constans+1) == 0){
				constans++;
			}
			
			///Generate random number [START]
			std::random_device randomNumberGenerator;
			randomNumberGenerator.min(1); randomNumberGenerator.max(m-1);
			int a = randomNumberGenerator();
			///Generate random number [END]
			
			if(euklidesz(a, m) != 1 )
				return false;
				
			int t = (m-1) / std::pow(2, constans)
			if(ismetelt_negyzetreemelesek_modszere(a, constans, m) != 1){
				for(int k = 1; k <= t-1; k++){
					
				}
			}
			
			
				if()
				
				if( ismetelt_negyzetreemelesek_modszere(a, constans*std::pow(2, k), m) != -1 &&
					){
						return false;
				}
			}
			
		}
		
	}
	else
		throw "MillerRabin csak páratlan egészt kaphat, mivel minden prím páratlan.";
	return false;
}



int main(){
	std::cout << "hello world\n";
	std::cout << euklidesz(49, 28) << std::endl;
	{
		int k  = 0;
		int m = 561;
		for(k = 0; (m-1)% (int)std::pow(2, k+1) == 0; k++)
			std::cout << "k = " << k+1 << "and m-1/2^k = " << (m-1) /std::pow(2, k+1) << std::endl;
		std::cout << "k = " << k << "and m-1/2^k = " << (m-1) /std::pow(2, k) << std::endl;
	}

}
