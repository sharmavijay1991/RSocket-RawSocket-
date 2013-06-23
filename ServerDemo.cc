/* Will keep on checking for any incoming request and if we get any one then it will pass send object to coming client-request
*/

#include "RSocket.cc"
#include "iostream"

int main()
{
  int send = 10 ;
	bool status ;
	// Pattern of parameter std::string ipAddress, int portNumber, std::string addressFamily
	RSocket rs("10.113.56.76", 7676, "AF_INET") ;
	rs.setLogLevel(0) ;
	status = rs.checkTypeStartCommunication(send) ;
	std::cout << "Finished with Status => "<< status ;	
}
