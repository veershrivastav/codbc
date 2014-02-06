/***

Created by, Veer Shubhranshu Shrivastav
Mail: mail@veershubhranshu.com

Created for Tata Consultancy Services.

This document is copyrighted by Veer S. Shrivastav under Tata Consultancy Services Ltd.
And is prohibited for distribution.

Date of Start: 28 Aug 2013
Date of End: 30th Sep 2013

***/
#ifndef SQLHelperException_H_
#define SQLHelperException_H_

#include<iostream>
using namespace std;

class SQLHelperException
{
     private:
     int ExceptionCode;     
     void setExceptionCode(int);

     public:

     SQLHelperException();
     SQLHelperException(int);

     int getExceptionCode();
     string getExceptionString();
};
#endif
