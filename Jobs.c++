#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int,int>> jobs(n); // deadline, duration
        for(i=0;i<n;i++) cin>>jobs[i].first;
        for(i=0;i<n;i++) cin>>jobs[i].second;
        jobs.push_back({0,0}); // dummy job

        sort(jobs.rbegin(), jobs.rend()); // sort in decreasing order of deadlines

        int ans=0;
        priority_queue<int> min_heap; // push negatives of durations;

        min_heap.push(-jobs[0].second);
        for(i=1;i<jobs.size();i++)
        {
            int interval = jobs[i-1].first - jobs[i].first;
            // use this time to find out how much of the minimum 
            // duration job in the heap could have been completed.
            while(interval>0 and !min_heap.empty())
            {
                int duration = -min_heap.top();
                min_heap.pop();
                int spend_time = min(interval, duration);
                interval-=spend_time;
                duration -= spend_time;
                if(duration>0) min_heap.push(-duration); // push remaining job time back
                else ans++; //job can be completed
            }

            // push this new job into heap
            min_heap.push(-jobs[i].second);
        }

        cout<< ans<<'\n';
    }
}