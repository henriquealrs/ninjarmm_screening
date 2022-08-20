#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "job.hpp"

class Programmer : public Job
{
public:
    explicit Programmer(const std::string& name, const std::string& description, int hours) : _description(description), Job(name, hours) {}
    Programmer() = delete;
    Programmer operator=(Programmer& p) = delete;
    virtual std::string GetDescription() const override;
private:
    virtual void DoWork(std::ostream &out) const override;

    std::string _description;
    // Job interface
};

#endif // PROGRAMMER_H
