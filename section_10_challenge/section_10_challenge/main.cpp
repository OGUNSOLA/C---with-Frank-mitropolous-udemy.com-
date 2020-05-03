//
//  main.cpp
//  section_10_challenge
//
//  Created by Olubukola Ogunsola on 2020-05-02.
//  Copyright © 2020 Olubukola Ogunsola. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

string DecodeIt()
{
    
    cout << "Enter a secret code"<< endl;
    string secret{};
    getline(cin, secret);
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string decoded{};
      string encoded{};
      size_t found{};
      
      for( size_t i=0;i< secret.length(); i++)
      {
          if (isspace(secret.at(i)))
          {
              decoded = decoded + " ";
          }
          found = alphabet.find(secret.at(i));
          if(found != string::npos)
          {
             
              decoded =decoded + key.at(found);
          }
      }
      cout << decoded<< endl;
    return decoded ;
}


string EncodeIt()
{
    
    cout << "Enter what to encode"<< endl;
    string toEncode{};
    getline(cin, toEncode);
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  
      string encoded{};
      size_t found{};
      
      for( size_t i=0;i< toEncode.length(); i++)
      {
          if (isspace(toEncode.at(i)))
          {
              encoded = encoded + " ";
          }
          found = key.find(toEncode.at(i));
          if(found != string::npos)
          {
              
              encoded =encoded + alphabet.at(found);
          }
      }
      cout << encoded<< endl;
    return encoded ;
}


int main(int argc, const char * argv[]) {
   
    
    
    
  
    DecodeIt();
    EncodeIt();
    
    return 0;
}
