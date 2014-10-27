
#include <iostream>

#include <cisstOSAbstraction/osaSocket.h>

int main(int argc, char* argv[])
{
  //cmnLogger::SetMask(CMN_LOG_ALLOW_ALL);
  //cmnLogger::SetMaskFunction(CMN_LOG_ALLOW_ALL);
  cmnLogger::AddChannel(std::cerr, CMN_LOG_ALLOW_ALL);
  
  //CMN_LOG_RUN_ERROR << "hi" << std::endl;
  
  std::cout << "Local IP: " << osaSocket::GetLocalhostIP() << std::endl;
  
  return 0;
}
