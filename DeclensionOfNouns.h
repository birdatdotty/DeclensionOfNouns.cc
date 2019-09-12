// from https://punbb.info/t-286.html#p577
#include <string>

class DeclensionOfNouns
{
  public:
    std::string get(int count);
    DeclensionOfNouns(std::string form1="", std::string form2="", std::string form3="");

  private:
    std::string form1, form2, form3;
};
