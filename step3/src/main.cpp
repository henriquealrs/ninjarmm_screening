#include <iostream>
#include <vector>
#include <memory>
#include <cstdint>
#include <functional>
#include <algorithm>

#include "job.hpp"

using std::cout;
using std::vector;
using std::shared_ptr;
using std::string;
using std::function;
using JobPtr = shared_ptr<Job>;

static vector<JobPtr> GetJobs();

template <typename T>
bool IsInBounds(const T& val, const T& min, const T& max)
{
    return (val >= min && val <= max);
}

int CountMatches(function<bool(const string&)> test, vector<string>& v)
{
    return std::count_if(v.begin(), v.end(), test);
}

int main()
{
    vector<JobPtr> jobs = GetJobs();
    for(auto& job : jobs) {
        cout << job->GetName() << "; ";
        cout << job->GetDescription() << "; ";
        cout << job->GetHours() << "\n";
        job->DoWork(cout);
    }

    cout << "\n-----------------\n";

    std::uint32_t httpResponseCode = 560;
    const std::uint32_t min = 500;
    const std::uint32_t max = 599;
    cout << IsInBounds(httpResponseCode, min, max) << "\n";

    httpResponseCode = 404;
    cout << IsInBounds(httpResponseCode, min, max) << "\n";

    cout << "\n-----------------\n";

    auto theStrings = vector<std::string> { "one", "two", "test", "two"};
    string test = "two";
    cout << CountMatches([&test](const string& tested){
        bool ret = (tested == test);
        return ret;
    }, theStrings);

    cout << "\n-----------------\n";

    return 0;
}


#include "programmer.hpp"
#include "pilot.hpp"

static vector<JobPtr> GetJobs()
{
    vector<JobPtr> ret;
    ret.push_back(std::make_shared<Programmer>("Programmer1", "Develop a text editor", 10));
    ret.push_back(std::make_shared<Pilot>("Pilot 1", "Fly from GRU to JFK", 12));
    return ret;
}
