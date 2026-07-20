#include<bits/stdc++.h>
using namespace std;

class job{
    public:
        int jobid;
        int salary;
        int deadline;

        job(int i, int s, int d){
            jobid = i;
            salary = s;
            deadline = d;
        }
};

// Helps in sorting "job" wrt "salary" in "Descending Order"
bool camparision(job a, job b){
    return a.salary > b.salary;
}

int main(){
    
    

    return 0;
}