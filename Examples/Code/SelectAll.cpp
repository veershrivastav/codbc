/***
Created by: Veer Shubhranshu Shrivastav
Mail: veer@veershubhranshu.com
Copyright: Veer S. Shrivastav

SQLHelper version1.0

SQLHelper - SelectAll.cpp

In this file, I am trying to show you how to use `select * from table_name`
command from the database. this is one of the best way to use
this library for select option. If you are using this library then save
your time writing this code. Just pass the name of the table to a function
and get all the data from a table in a 2-D String Vector.

Steps:

1. An object of SQLHelper is created with passing the username and
   password to it. And 2-D String Vector is declared to fetch data.

2. Under try-catch block, the connection to the database is opened.
   (try-catch as while establishing a connection, there may be some error,
   to avoid the program terminating from the regular flow, this is placed
   inside of the try-catch block.)

3. A function is called, `selectAll` which is makes a query as ->
   `select * from tableName`. This way you can fetch all the rows in
   2-D String Vector.

4. Now use the 2D String vector to display the data fetched.

****/
#include<iostream>
#include<vector>
using namespace std;
#include "../../SQLHelper/SQLHelper.h"
#include "../../SQLHelperException/SQLHelperException.h"

int main()
{
     SQLHelper	DB("h11orauser3d@unixdb","tcshyd");
     vector< vector<string> > rowData;
     try
     {
          DB.openDB();
          if(DB.checkDBStatus())
          {
               rowData = DB.selectAll("veer_test");
               if(rowData.size()>0)
               {
                    cout<<rowData.size();
                    if(rowData.size()==1)
                         cout<<" row fetched"<<endl;
                    else
                         cout<<" rows fetched"<<endl;

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
                    cout<<"No Rows Fetched"<<endl;
               }
          }
          else
          {
               cout<<"Not Connected to Database Server"<<endl;
          }
     }
     catch(SQLHelperException sqlExp)
     {
          cout<<sqlExp.getExceptionCode()<<" : "<<sqlExp.getExceptionString()<<endl;
     }
	return 0;
}

