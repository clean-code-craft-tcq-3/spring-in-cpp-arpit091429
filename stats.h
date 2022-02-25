#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics
{  
	template <typename T=double>	//default
	class stats
	 {
	   public:
		T average;
		T max;
		T min;

		stats();
		stats(T average,T max,T min);
	};
	template<typename T=double>
	stats<T> ComputeStatistics(const std::vector<T>& );
}
