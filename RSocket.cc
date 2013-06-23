/* This file will contain all logic for Socket program
*/
#include "all_headers.h"
//using namespace std ; 

//template<class T1>
class RSocket
{
      private:
		struct sockaddr_in socket1 ;
		struct sockaddr_in6 socket2 ;
		int listnfd ; int conffd ;
		int logLevel ;					// 4-> Nothing || 3-> Info  || 2-> Warn  || 1-> Error
		std::string ipvType ;				
    int flag ;					

              

	public:
			RSocket(FILE * fp)
			{
			// Method which will read file provided via argument and store file configurations to local/private variables
			}
			RSocket(struct sockaddr_in temp_obj): socket1(temp_obj)
			{
				// Here we will get socket object and will assign that object to private->socket1 
			}
/*			// Later we will enable this feature. 
			RSocket(struct sockaddr_in6 temp_obj): socket2(temp_obj)
			{
				// Here we will get socket object and will assign that object to private->socket2 
			} 
*/

			RSocket(std::string ipAddress, int portNumber, std::string addressFamily, int temp_flag=0)
			{
				bool defaultLogLevel = setLogLevel(4) ;				// Default, It will not write any type of logs
				ipvType = addressFamily ;
				flag = temp_flag ;
				// Assign coming values to socket1 object
				/*===========================
				============================
				
					Code is not posted for this module, Please contanct sharmavijay1991@gmail.com
					
				*/
} ;





bool RSocket::createSocket()
{
	/*
		if(ipvType == "AF_INET")
			listnfd = socket(AF_INET,struct sockaddr_in *(socket1), 0) ;
		else
			listnfd = socket(AF_INET6, struct sockaddr_in *(socket2), 0) ;
	*/
return true ;
}


template<class T2>
bool RSocket::checkTypeStartCommunication(T2 & objectToSend)
{
	T2 objectToReceive ;
	if(flag ==0)
	{
		
		if(ipvType == "AF_INET")
		{
/*===========================
				============================
				
					Code is not posted for this module, Please contanct sharmavijay1991@gmail.com
					
				*/
	}
	else
		/*===========================
				============================
				
					Code is not posted for this module, Please contanct sharmavijay1991@gmail.com
					
				*/


}
