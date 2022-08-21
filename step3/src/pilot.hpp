#ifndef PILOT_H
#define PILOT_H

#include "job.hpp"

class Pilot : public Job
{
public:
    Pilot(const std::string& name, const std::string description, int hours) :
           _description(description), Job(name, hours) {}
    Pilot() = delete;
    Pilot operator=(Pilot& p) = delete;

    std::string GetDescription() const override;
private:
    virtual void DoWork(std::ostream &out) const override;
    std::string _description;
};

#endif // PILOT_H
