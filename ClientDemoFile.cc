/* Demo code for client, means this will try to access code on below mentioned ip
and from there it will get an object in rec(this is coming from server.
*/


// Note:- Please maintain that data type of rec should be same which Server is sending(Other wise error handler wil handle it
// and it will through not-proper-data from communication error.

#include "RSocket.cc"
#include "iostream"

int main()
{
  int rec ;
	bool status ;
	// Pattern of parameter std::string ipAddress, int portNumber, std::string addressFamily
	RSocket rs("XX.1XX.XX.XX", 7676, "AF_INET",1) ;
	rs.setLogLevel(0) ;
	status = rs.checkTypeStartCommunication(rec) ;
	std::cout << "Data Comming from Server is =>"<< rec ;	
}
