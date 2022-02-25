#include "stats.h"

#include<bits/stdc++.h>

//template<typename T> Statistics::Stats<>::Stats(){}
//template<typename T> Statistics::Stats<T,T,T>::Stats(T Average,T Max,T Min):Average(Average),Max(Max),Min(Min){}
//template<typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& data)
Statistics::Stats::Stats(){}
Statistics::Stats::Stats(float Average,float Max,float Min):average(Average),max(Max),min(Min){}
Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& data)

{
    Stats st;
    if(data.size()==0)
    {
       st.average=NAN;
       st.max=NAN;
       st.min=NAN;
    }
    
    //st.max=*max_element(data.begin(),data.end());
    st.max = data[0];
    for (int i=1;i<data.size();i++)
    {
        if(data[i]>st.max)
        {
            st.max =data[i];
        }
    }    
    
    st.min = data[0];
    for (int i=1;i<data.size();i++)
    {
        if(data[i]<st.max)
        {
            st.max =data[i];
        }
    }
    
    float sum=0.0;
    for (int i=0;i<data.size();i++)
    {
       sum = sum+data[i];
    }
    st.average=(sum/data.size());
    //st.min=*min_element(data.begin(),data.end());
    //float sum=accumulate(data.begin(), data.end() , 0);
    //st.average=(sum/data.size());
    return st;
   // float maxi=*max_element(data.begin(),data.end());
    //float mini=*min_element(data.begin(),data.end());
    //float sum=accumulate(data.begin(), data.end() , 0);
    //float avg=sum/data.size();
    //return Statistics::Stats(avg,maxi,mini);

    
}
