#include <Windows.h>
#include <iostream>

class Test {

public:

  static int DisplayMessageBox()
  {
       int msgboxID = MessageBox(
          NULL,
          "MessageBox in node native",
          "Information",
          MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
      );

      switch (msgboxID)
      {
      case IDCANCEL:
          std::cout << "Cancel" << std::endl;
          break;
      case IDTRYAGAIN:
          std::cout << "TryAgain" << std::endl;
          break;
      case IDCONTINUE:
          std::cout << "Continue" << std::endl;
          break;
      }

      return msgboxID;
  }

};
