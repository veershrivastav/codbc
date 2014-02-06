/***
Created by: Veer Shubhranshu Shrivastav
Mail: veer@veershubhranshu.com
Copyright: Veer S. Shrivastav

SQLHelper version1.0

SQLHelper - ConnectDisconnect.cpp

In this file, I am trying to show you how to connect to the
database, and how the API safely disconnects you from the database.
Here I will make a connection to the database, and the API will
automatically disconnect you.

**Explanation:
SQLHelper is written in such a way that it connects when user
wants, but disconnects only when the object is destroyed. That is
when the destructor of object is called, the program automatically disconnects.

**Reason for such an implimentation:
When writing a Pro*C code, I got many errors. The major was memory
error. This was because the connection was kept open and the program
terminates. To overcome such an issue SQLHelper is planned in such a way
that if there is any error and the program terminates it will destroy the
object of SQLHelper and thus the connection is also released.

**Word by Developer:
When I was working with Pro*C, my team and I use to face many difficulties, 
regarding connection, fetching and had to write too many lines for just one
operation. To make this easy it was important to figure out some functions
to ease the task. Therefore, I encapsulated all the required functions in one
class, so that the object of this class can be used for database operations.

****/
#include<iostream>
using namespace std;
#include "../../SQLHelper/SQLHelper.h"
#include "../../SQLHelperException/SQLHelperException.h"

int main()
{
     SQLHelper DB("h11orauser3d@unixdb","tcshyd");
     try
     {
          cout<<"Connecting to database using: h11orauser3d@unxidb"<<endl;
          DB.openDB();
          if(DB.checkDBStatus())
          {
               cout<<"Connected to h11orauser3d@unxidb"<<endl;
               cout<<"Now the program will disconnect"<<endl;
               cout<<"As soon as the destructor of SQLHelper is called the program disconnects from database"<<endl;
               cout<<"Disconnecting..."<<endl;
          }
          else
               cout<<"Not able to connect to database"<<endl;
     }
     catch(SQLHelperException sqlExp)
     {
          cout<<sqlExp.getExceptionCode()<<" : "<<sqlExp.getExceptionString()<<endl;
     }
	return 0;
}

