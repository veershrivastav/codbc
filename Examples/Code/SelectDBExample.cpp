/***
Created by: Veer Shubhranshu Shrivastav
Mail: veer@veershubhranshu.com
Copyright: Veer S. Shrivastav

SQLHelper version1.0

SQLHelper - SelectDBExample.cpp

In this file, I am trying to show you how to use select
command from the database. this is one of the best way to use
this library for select option.

Steps:

1. Make an object of SQLHelper Class, passing the username and the password.
   a. You can also set the username and password later by passing username and password
      in string format to functions:   `setUserName(string)` and `setPassword(string)`
   b. There is no as such encryption technique provided. So you have to apply it on your side.

2. Declare a 2-D String Vector. This will be used to store the data retrived from the table.

3. DB.openDB(): This function establishes a connection to the server. There is no explicit function to disconnect
   from the server, as it is mentioned in the destructor of the Class.

4. DB.checkDBStatus: This returns true or false, this is used to check whether the connection is established or not.

5. DB.selectDB(string): This function returns 2-D String Vector which is used to display the value returned.

Apart from select option from SQLHelper, this example shows the correct way to select
sysdate from dual.

If we use: "select sysdate from dual" this will show a memory error. Therefore, selecting in the following manner
will let you escape from any memory errors.

****/
#include<iostream>
#include<vector>
using namespace std;
#include "../../SQLHelper/SQLHelper.h"
#include "../../SQLHelperException/SQLHelperException.h"

int main()
{
     SQLHelper DB("h11orauser2d@unixdb","tcshyd");
     vector< vector<string> > rowData;
     try
     {
          DB.openDB();
          if(DB.checkDBStatus())
          {
               cout<<"connected"<<endl;
          }
          rowData=DB.selectDB("select to_char(sysdate) from dual");
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
     }
     catch(SQLHelperException sqlExp)
     {
          cout<<sqlExp.getExceptionString()<<endl;
     }
	return 0;
}

