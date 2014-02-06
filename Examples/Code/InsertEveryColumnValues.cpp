/***
Created by: Veer Shubhranshu Shrivastav
Mail: veer@veershubhranshu.com
Copyright: Veer S. Shrivastav

SQLHelper version1.0

SQLHelper - InsertEveryColumnValues.cpp

In this file, I am trying to show you how to insert into a database
using this library. This makes the task much more easier and you
don't require to use any `insert` query.

Steps:

1. Declare:
     a. SQLHelper Object with database username and password.
     b. string vector, which will be passed to the function to insert.
     c. string for table name, this keeps the table name.
     d. A temporary string to take values from user, and push back in vector
        that has to be passed.

2. Under try-catch block connect to the databse using `openDB` function.

3. Check the connection to the database, if it is connected to the database
   proceed further.

4. Take table name from user.

5. Take values from the user and push it to the vector.

6. Pass the table name and the vector that stores the value to the function:
   `insertDB(string, vector<string>)`

****/

#include<iostream>
#include<vector>
using namespace std;
#include "../../SQLHelper/SQLHelper.h"
#include "../../SQLHelperException/SQLHelperException.h"

int main()
{
	SQLHelper DB("scott@unixdb","tiger");
     vector<string> values;
     string tableName;
     string vals;
     try
     {
          DB.openDB();
          if(DB.checkDBStatus())
          {
               cout<<"Connected"<<endl;
               cout<<endl;
               cout<<"Table Name: "<<endl;
               cin>>tableName;

               cout<<endl;

               cout<<"Id: ";
               cin>>vals;
               values.push_back(vals);

               cout<<"Name: ";
               cin>>vals;
               values.push_back(vals);

               DB.insertDB(tableName, values);
               
               if(DB.getLastSQLStatus()==0)
                    cout<<"1 row inserted"<<endl;
               else
                    cout<<"Insertion Failed"<<endl;
          }
          else
               cout<<"Database Connection Failed"<<endl;
     }
     catch(SQLHelperException sqlExp)
     {
          cout<<"Error "<<sqlExp.getExceptionCode()<<" : "<<sqlExp.getExceptionString()<<endl;
     }
	return 0;
}

