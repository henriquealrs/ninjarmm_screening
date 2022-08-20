#include "programmer.hpp"


std::string Programmer::GetDescription() const
{
    return _description;
}

void Programmer::DoWork(std::ostream &out) const
{
    out << "My work involves " << _description << "\n";
}
