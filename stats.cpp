#include "stats.h"

#include<bits/stdc++.h>
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
        return st;
    }

    st.max = data[0];
    for (long unsigned int i=1;i<data.size();i++)
    {
        if(data[i]>st.max)
        {
            st.max =data[i];
        }
    }    
    
    st.min = data[0];
    for (long unsigned int i=1;i<data.size();i++)
    {
        if(data[i]<st.min)
        {
           st.min =data[i];
        }
    }
    
    float sum=0.0;
    for (long unsigned int i=0;i<data.size();i++)
    {
       sum = sum+data[i];
    }
    st.average=(sum/data.size());
        return st;
}

    void StatsAlerter::checkAndAlert(const std::vector<double>& list_of_numbers) 
    {
        for (auto number: list_of_numbers)
        {
            if (number > maxThreshold) 
            {
                for (auto alertType: alerts)
                    alertType->setAlert(true);
            }
        }
    }   



    

