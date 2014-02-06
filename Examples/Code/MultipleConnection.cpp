/***
Created by: Veer Shubhranshu Shrivastav
Mail: veer@veershubhranshu.com
Copyright: Veer S. Shrivastav

SQLHelper version1.0

SQLHelper - SelectDBExample.cpp

In this file, I am trying to show you how to use Multiple connection
with the database. this is one of the best way to use this library 
for creating multiple connection. Somehow, there may be some memory error
which is yet to be sorted. You can use this library for your use to create multiple
connections.

**Note:
     If you look closely at the structure
     of program you will find that I have
     declared the two databases but have
     not opened it without use. When you
     open a database, the previous connection
     is lost. Good part in this is you don't 
     need to explicitely close the connection.
     It is handled automatically.

**Suggestion:
     Try to use this library with only one database.
     If you need to access another database, try to use
     synonyms in that case. 

     Do not switch database unnecessarily. It is a
     good habbit to fetch data just from one table.
     Else it can result in massive outputs.

This program works in following manner:

1. Connection to databases are declared BUT NOT CONNECTED.

2. Under try-catch block the connection is opened for first database.

3. Value is fetched and used.

4. Again when the other SQLHelper Object makes a connection, the previous
   connection is closed and the connection is re-written over the
   previous connection pointer.

5. Again the Data is fetched from the newly connected database.

**Explanation:
     SQLHelper can make multiple connection, however it holds one
     connection at a time. That is, when you will write a normal
     program, before connecting to the database, you have to disconnect
     from the current database being used.

     Here you don't need to bother about closing the connection.
     It is handled automatically. Just create the new connection and
     it will close the previous connection.

     You can think it another way also, you can hold only one connection
     at a time, when using Oracle Database - sqlplus. To make another 
     connection you have to open a new SSH connection to the server over
     new window.

****/
#include<iostream>
#include<vector>
using namespace std;
#include "../../SQLHelper/SQLHelper.h"
#include "../../SQLHelperException/SQLHelperException.h"

int main()
{
     SQLHelper DB("h11orauser3d@unixdb","tcshyd");
     SQLHelper DB2("h11orauser2d@unixdb","tcshyd");
     vector< vector<string> > rowData;
     try
     {
          DB.openDB();
          if(DB.checkDBStatus())
          {
               cout<<"connected"<<endl;
          }
          rowData=DB.selectDB("select * from veer_date");
          if(rowData.size()>0)
          {
               for(int i=0;i<rowData.size();i++)
               {
                    for(int j=0;j<rowData.at(i).size();j++)
                    {
                         cout<<rowData.at(i).at(j)<<"\t";
                    }
                    cout<<endl;
               }
          }
          else
          {
               cout<<"No rows fetched"<<endl;
          }

          DB2.openDB(); 
          rowData = DB2.selectDB("select to_char(sysdate) from dual");
          if(rowData.size()>0)
          {
               for(int i=0;i<rowData.size();i++)
               {
                    for(int j=0;j<rowData.at(i).size();j++)
                    {
                         cout<<rowData.at(i).at(j);
                    }
                    cout<<endl;
               }
          }
          else
          {
               cout<<"No rows fetched"<<endl;
          }
          DB.openDB();
          rowData=DB.selectDB("select * from veer_date");
          if(rowData.size()>0)
          {
               for(int i=0;i<rowData.size();i++)
               {
                    for(int j=0;j<rowData.at(i).size();j++)
                    {
                         cout<<rowData.at(i).at(j)<<"\t";
                    }
                    cout<<endl;
               }
          }
          else
          {
               cout<<"No rows fetched"<<endl;
          }

     }
     catch(SQLHelperException sqlExp)
     {
          cout<<sqlExp.getExceptionString()<<endl;
     }
	return 0;
}

