#ifndef __JOB_H
#define __JOB_H

#include <iostream>
#include <string>

class Job {
public:
    virtual void DoWork(std::ostream& out = std::cout) const = 0;
    virtual std::string GetDescription() const = 0;

    std::string GetName() const {
        return _name;
    }

    int GetHours() {
        return _hours;
    }

    virtual ~Job() {}
protected:
    explicit Job(const std::string& name, int hours) :
        _name(name),
        _hours(hours) {}
private:
        std::string _name;
        int _hours;
};

#endif  // __JOB_H
