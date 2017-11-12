
#include "header.h"
#include <stdio.h>
#include <sys/socket.h>
#import <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int connect(){
     //  创建 客户端 socket
   int clientSocket = socket(PF_INET,SOCK_STREAM,0);
   printf("%d",clientSocket);
 // 创建 服务器端 socket
  
   return 1;

   
}

