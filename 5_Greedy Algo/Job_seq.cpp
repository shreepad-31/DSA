#include <bits/stdc++.h>
using namespace std;

// We have given job id, deadline and profits for each job.
// Each job takes 1d to be done and can't be performed after deadline day.
// We have to maximise the profit.


// Class Job to Store Job ID / Salary / Deadline
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

// Camparator for Sorting
bool camparision(job a, job b){
    return a.salary > b.salary;
}

// Solution
vector<int> job_maxxing(vector<job> jobs, int n){
    sort(jobs.begin(), jobs.end(), camparision);
    vector <int> temp(n, -1);

    for(int i = 0; i < n; i++){
        
    }

    return temp;
}

void display(vector<int> arr){
    int n = arr.size();
    cout << "Perform Job in Following Order: " << endl;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main(){

    int n; cout << "Enter a Number: ";
    cin >> n;
    vector<job> jobs;

    // Taking User TestCase: 
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b  >> c;
        
        jobs.push_back(job(a, b, c));
    }

    // Final Solution:
    vector<int> job_seq = job_maxxing(jobs, n);

    // Displaying to User:
    display(job_seq);

    return 0;
}