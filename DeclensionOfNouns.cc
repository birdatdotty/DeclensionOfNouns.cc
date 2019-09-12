// from https://punbb.info/t-286.html#p577
#include "DeclensionOfNouns.h"
#include <string>

using std::string;

  string DeclensionOfNouns::get(int count)
  {
    int rest = count % 10;
    int number = count % 100;
    if (rest == 1 && number != 11)
      return form2;
    if (((rest == 2) || (rest == 3) || (rest == 4)) && !((rest == 12) || (rest == 13) || (rest == 14)))
      return form1;
    
    return form3;
  }
  
  DeclensionOfNouns::DeclensionOfNouns(string form1, string form2, string form3)
  {
    this->form1 = form1;
    this->form2 = form2;
    this->form3 = form3;
  }

