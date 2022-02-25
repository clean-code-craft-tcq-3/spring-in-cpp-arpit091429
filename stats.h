#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
namespace Statistics
{
    
	//template <typename T=double>	//default
	class Stats
   	 {
	   public:
		//T Average;
		//T Max;
		//T Min;
		float average;
		float max;
		float min;
		Stats();//empty array
		Stats(float avg,float max,float min);
		//Stats(T average,T Max,T Min);
	};
	//template<typename T=double>
	//Stats<T> ComputeStatistics(const std::vector<T>& );
	Stats ComputeStatistics(const std::vector<float>&);
}

Stats ComputeStatistics(const std::vector<double>& );
}

class IAlerter {
public:
    virtual void setAlert(bool isAlert) = 0;
};

class EmailAlert : public IAlerter {
public:
    bool emailSent = false;
    virtual void setAlert(bool isAlert) {
        emailSent = isAlert;
    }
};

class LEDAlert : public IAlerter {
public:
    bool ledGlows = false;
    virtual void setAlert(bool isAlert) {
        ledGlows = isAlert;
    }
};

class StatsAlerter {
    float maxThreshold;
    std::vector<IAlerter*> alerts;
public:
    StatsAlerter(float maxThreshold, std::vector<IAlerter*>& alerts) {
        this->maxThreshold = maxThreshold;
        this->alerts = alerts;
    }

    void checkAndAlert(const std::vector<double>& );
};
