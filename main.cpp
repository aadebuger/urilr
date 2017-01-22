#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <network/uri.hpp>
int main( void )
{
    std::error_code ec;
  network::uri uri = network::make_uri("I am not a valid URI.", ec);
    
    printf("hello\n");
    std::cout <<"aa"<<std::endl;
  
}
