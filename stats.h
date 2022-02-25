#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics
{
    
	template <typename T=double>	//default
	class Stats
   	 {
	   public:
		T average;
		T max;
		T min;

		Stats();
		Stats(T average,T max,T min);
	};
	template<typename T=double>
	Stats<T> ComputeStatistics(const std::vector<T>& );
}
