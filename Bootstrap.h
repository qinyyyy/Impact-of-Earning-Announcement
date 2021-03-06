#pragma once
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

namespace std {


	class BootStrap {
	private:
		int n_samples;
	public:
		BootStrap() :n_samples(80) {};
		~BootStrap() {};

		void setN(int n) {
			n_samples = n;

		}

		int getN() {
			return n_samples;
		}
	
		vector<string> resample(vector<string> vec);


	};

}
