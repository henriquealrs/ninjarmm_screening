#include "pilot.hpp"


std::string Pilot::GetDescription() const
{
    return _description;
}

void Pilot::DoWork(std::ostream &out) const
{
    out << "My work involves: " << _description << "\n";
}
