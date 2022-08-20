#include <iostream>
#include <vector>
#include <memory>

#include "job.hpp"

using std::cout;
using std::vector;
using std::shared_ptr;
using JobPtr = shared_ptr<Job>;

static vector<JobPtr> GetJobs();

int main()
{
    vector<JobPtr> jobs = GetJobs();
    for(auto& job : jobs) {
        cout << job->GetName() << "; ";
        cout << job->GetDescription() << "; ";
        cout << job->GetHours() << "\n";
        job->DoWork(cout);
    }

    return 0;
}


#include "programmer.hpp"

static vector<JobPtr> GetJobs()
{
    vector<JobPtr> ret;
    ret.push_back(std::make_shared<Programmer>("Programmer1", "Code text editor", 10));
    return ret;
}
