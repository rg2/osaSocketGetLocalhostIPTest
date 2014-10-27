
#include <iostream>

#include <cisstOSAbstraction/osaSocket.h>

int main(int argc, char* argv[])
{
  // Print any errors to stderr; none were printed when an empty string was
  // returned
  cmnLogger::AddChannel(std::cerr, CMN_LOG_ALLOW_ALL);
  
  std::cout << "Local IP: " << osaSocket::GetLocalhostIP() << std::endl;
  
  return 0;
}
