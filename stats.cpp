#include "stats.h"

#include<bits/stdc++.h>

template<typename T> Statistics::Stats<>::Stats(){}
template<typename T> Statistics::Stats<T,T,T>::Stats(T average,T max,T min):average(average),max(max),min(min){}
template<typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& data)
{
    stats<T> st;
    if(data.size()==0)
    {
       st.average=NAN;
       st.max=NAN;
       st.min=NAN;
    }
    
    st.max=*max_element(data.begin(),data.end());
    st.min=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    st.average=(sum/data.size());
    return st;  
}
