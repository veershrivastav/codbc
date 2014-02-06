/***

Created by, Veer Shubhranshu Shrivastav
Mail: mail@veershubhranshu.com

Created for Tata Consultancy Services.

This file is a part of Project SQLHelper - An API for Pro*C.

This document is copyrighted by Veer S. Shrivastav.
This is a free distribution API, for ease in work with Pro*C

Date of Start: 28 Aug 2013
Date of End: 30th Sep 2013

***/
#ifndef SQLHelper_H_
#define SQLHelper_H_

#include<iostream>
#include<vector>
using namespace std;
class SQLHelper
{
     private:
     string DBUserName;
     string DBPassword;
     int DBStatus;
     int lastSQLStatus;

     void setLastSQLStatus(int);
     void setDBStatus(int);
     string trim(string);
     
     public:
     int MAX_VAR_SIZE;
     int MAX_NAME_SIZE;
     
     SQLHelper();
     SQLHelper(string , string);
     ~SQLHelper();
     void setUserName(string);
     void setPassword(string);
     int openDB();
     bool checkDBStatus();
     int getDBStatus();
     int execSQL(string);
     int getLastSQLStatus();
     int insertDB(string, vector<string>);
     int insertDB(string, vector<string>, vector<string>);
     void initiateSelect(int,int);
     vector< vector<string> > selectDB(string, vector<string>, vector<string>, vector<string>);
     vector< vector<string> > selectAll(string);
     vector< vector<string> > selectDB(string);
     vector< vector<string> > selectDB(string, vector<string>);
     vector< vector<string> > selectDB(string, vector<string>, vector<string>);
};
#endif
