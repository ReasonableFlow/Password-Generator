#include <iostream>
#include <vector>
#include <string>
#include <random>





using namespace std;



class PasswordGen {


private:

	string password;
	vector<char> pass;



public:

	void generator() {


		char singlePass;
		int counter;


		random_device rd; // obtain a random number from hardware
		mt19937 gen(rd()); // seed the generator
		uniform_int_distribution<> distr(32, 126); // define the range

		

		for (int i = 0; i < 20; i++) {

			counter = distr(gen);
			singlePass = static_cast<char>(counter);
			pass.push_back(singlePass);



		}
	}


	string printPassword() {



		for (int i = 0; i < pass.size(); i++) {

			password += pass[i];

		}

		return password;

	}

};


int main() {


	PasswordGen g;
	g.generator();
	cout << "Here is the generated password: " << g.printPassword() << "\n\n";

	return 0;
}