/***
Created by: Veer Shubhranshu Shrivastav
Mail: veer@veershubhranshu.com
Copyright: Veer S. Shrivastav

SQLHelper version1.0

SQLHelper - ObjectOriented.cpp

In this file, I am trying to show you how to connect to the
database, and how the API safely disconnects you from the database.
Here I will make a connection to the database, and the API will
automatically disconnect you.

****/
#include<iostream>
using namespace std;
#include "../../SQLHelper/SQLHelper.h"
#include "../../SQLHelperException/SQLHelperException.h"


class DatabaseHelper
{
     private:
     SQLHelper DB;
     public:
     DatabaseHelper()
     {
          DB.setUserName("veer@unixdb");
          DB.setPassword("veer");
     }
     DatabaseHelper(string userName, string Password)
     {
          DB.setUserName(userName);
          DB.setPassword(Password);
     }
     ~DatabaseHelper()
     {
          cout<<"SQLHelper Disconnecting"<<endl;
     }
     void connect()
     {
          try
          {
               DB.openDB();
          }
          catch(SQLHelperException sqlExp)
          {
               cout<<sqlExp.getExceptionCode()<<" : "<<sqlExp.getExceptionString()<<endl;
          }
     }
     void execDB(string sql)
     {
          try
          {
               DB.execSQL(sql);
          }
          catch(SQLHelperException sqlExp)
          {
               cout<<sqlExp.getExceptionCode()<<" : "<<sqlExp.getExceptionString()<<endl;
          }
     }
};
class A
{
     public:
     A()
     {}
     void callSQL(string sql)
     {
          DatabaseHelper DB("test@unixdb","test");
          DB.connect();
          cout<<"Connected to Database"<<endl;
          DB.execDB(sql);
     }
};

int main()
{
	A a;
     string id, name;
     for(int i=0;i<3;i++)
     {
          cout<<"ID: ";
          cin>>id;
          cout<<"Name: ";
          cin>>name;
          a.callSQL("insert into veer_test values("+id+",'"+name+"')");
     }
	return 0;
}

