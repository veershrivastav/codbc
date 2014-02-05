/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    "SQLHelper.pc"
};


static unsigned int sqlctx = 328699;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned char  *sqhstv[4];
   unsigned long  sqhstl[4];
            int   sqhsts[4];
            short *sqindv[4];
            int   sqinds[4];
   unsigned long  sqharm[4];
   unsigned long  *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {12,4};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(unsigned char *, signed int *); }

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,1,8,0,
5,0,0,0,0,0,27,58,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,24,99,0,0,1,1,0,1,0,1,97,0,0,
55,0,0,3,0,0,29,101,0,0,0,0,0,1,0,
70,0,0,4,0,0,30,116,0,0,0,0,0,1,0,
85,0,0,0,0,0,90,232,0,64,0,0,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,
116,0,0,0,0,0,90,233,0,64,0,0,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,
148,0,0,5,0,0,17,244,0,0,1,1,0,1,0,1,97,0,0,
167,0,0,5,0,0,19,249,0,64,0,0,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,
198,0,0,0,0,0,92,250,0,64,1,0,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,2,3,0,0,
233,0,0,0,0,0,92,257,0,64,2,1,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,257,3,0,0,3842,97,0,0,
272,0,0,0,0,0,93,263,0,64,4,4,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,257,3,0,0,513,3,0,0,769,3,0,0,3329,97,0,0,
319,0,0,5,0,0,11,268,0,64,0,0,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,
350,0,0,5,0,0,20,273,0,64,0,0,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,
382,0,0,0,0,0,92,274,0,64,1,0,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,2,3,0,0,
418,0,0,0,0,0,92,281,0,64,2,1,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,257,3,0,0,3842,97,0,0,
458,0,0,0,0,0,93,283,0,64,3,3,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,257,3,0,0,513,3,0,0,769,3,0,0,
502,0,0,5,0,0,14,293,0,128,0,0,17,111,117,116,112,117,116,95,100,101,115,99,
114,105,112,116,111,114,1,0,
534,0,0,0,0,0,92,297,0,64,3,1,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,257,3,0,0,3330,97,0,0,3074,3,0,0,
578,0,0,5,0,0,15,319,0,0,0,0,0,1,0,
593,0,0,6,0,0,29,320,0,0,0,0,0,1,0,
608,0,0,0,0,0,91,322,0,64,0,0,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,
639,0,0,0,0,0,91,323,0,64,0,0,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,
671,0,0,5,0,0,15,328,0,0,0,0,0,1,0,
686,0,0,7,0,0,29,329,0,0,0,0,0,1,0,
701,0,0,0,0,0,91,330,0,64,0,0,16,105,110,112,117,116,95,100,101,115,99,114,105,
112,116,111,114,1,0,
732,0,0,0,0,0,91,331,0,64,0,0,17,111,117,116,112,117,116,95,100,101,115,99,114,
105,112,116,111,114,1,0,
};


/***

Created by, Veer Shubhranshu Shrivastav
Mail: mail@veershubhranshu.com

This document is copyrighted by Veer S. Shrivastav under Tata Consultancy Services Ltd.
And is prohibited for distribution.

***/
#include<iostream>
#include<sqlca.h>
#include<vector>
#include<cstring>
#include "../SQLHelperException/SQLHelperException.h"
#include "SQLHelper.h"
using namespace std;


SQLHelper::SQLHelper()
{ 
     DBStatus=-15454;
     MAX_VAR_SIZE=255;
     MAX_NAME_SIZE=31;
}
SQLHelper::SQLHelper(string p_userName, string p_password)
{
     DBUserName = p_userName;
     MAX_NAME_SIZE=31;
     MAX_VAR_SIZE=255;
     DBPassword = p_password;
     DBStatus=-15454;
}
void SQLHelper::setUserName(string userName)
{
     DBUserName=userName;
}
void SQLHelper::setPassword(string password)
{
     DBPassword=password;
}
int SQLHelper::openDB()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 


        char *h_userName;
        char *h_userPassword;

    /* EXEC SQL END DECLARE SECTION; */ 

    
    h_userName = new char[DBUserName.length()];
    h_userPassword = new char[DBPassword.length()];

    strcpy(h_userName, (char *)DBUserName.c_str());
    strcpy(h_userPassword, (char *)DBPassword.c_str());

    /* EXEC SQL CONNECT :h_userName IDENTIFIED BY :h_userPassword; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)h_userName;
    sqlstm.sqhstl[0] = (unsigned long )0;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)h_userPassword;
    sqlstm.sqhstl[1] = (unsigned long )0;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    setLastSQLStatus(sqlca.sqlcode);
    setDBStatus(sqlca.sqlcode);

    if(sqlca.sqlcode!=0)
    {
          throw SQLHelperException(sqlca.sqlcode);
    }
    else
    {
          return sqlca.sqlcode;
    }
}
void SQLHelper::setDBStatus(int p_status)
{
     DBStatus=p_status;
}
bool SQLHelper::checkDBStatus()
{
     if(DBStatus==0)
          return true;
     else
          return false;
}
int SQLHelper::getDBStatus()
{
     return DBStatus;
}
int SQLHelper::execSQL(string p_sql)
{
     /* EXEC SQL BEGIN DECLARE SECTION; */ 


     char *h_sql;

     /* EXEC SQL END DECLARE SECTION; */ 


     h_sql = new char[p_sql.length()];
     
     strcpy(h_sql, (char *)p_sql.c_str());

     /* EXEC SQL EXECUTE IMMEDIATE :h_sql; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )36;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (unsigned char  *)h_sql;
     sqlstm.sqhstl[0] = (unsigned long )0;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         short *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned long )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



     /* EXEC SQL COMMIT; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )55;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



     setLastSQLStatus(sqlca.sqlcode);
     
     if(sqlca.sqlcode==0)
     {
          return(sqlca.sqlcode);
     }
     else
     {
          throw SQLHelperException(sqlca.sqlcode);
     }
}
SQLHelper::~SQLHelper()
{
     /* EXEC SQL COMMIT WORK RELEASE; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )70;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}
int SQLHelper::getLastSQLStatus()
{
     return lastSQLStatus;
}
void SQLHelper::setLastSQLStatus(int p_status)
{
     lastSQLStatus=p_status;
}
int SQLHelper::insertDB(string p_tableName, vector<string> p_Values)
{
     int l_itterator=0;
     
     if(p_Values.size()>0)
     {
          string l_sql = "INSERT INTO " + p_tableName + " VALUES( ";

          int l_pValuesSize = p_Values.size();

          for(; l_itterator<l_pValuesSize-1 ; l_itterator++)
          {
               l_sql = l_sql + "'"+p_Values.at(l_itterator)+"', ";
          }
          l_sql = l_sql + "'"+p_Values.at(l_itterator)+"')";

          try
          {
               execSQL(l_sql);
          }
          catch(SQLHelperException &sqlExp)
          {
               throw sqlExp;
          }
          return(getLastSQLStatus());
     }
     else
     {
          throw SQLHelperException(888);
     }
}
int SQLHelper::insertDB(string p_tableName,vector<string> p_colums, vector<string> p_Values)
{
     int l_itterator=0;
     
     if(p_colums.size() != p_Values.size())
     {
          throw SQLHelperException(889);
     }
     else
     {
          string l_sql = "INSERT INTO " + p_tableName + "( ";

          for(l_itterator=0; l_itterator<p_colums.size() - 1;l_itterator++)
          {
              l_sql = " '" + p_colums.at(l_itterator) + "' ,";
          }

          l_sql = l_sql + "'"+p_colums.at(l_itterator) + "') VALUES (";

          for(l_itterator=0; l_itterator<p_Values.size()-1 ; l_itterator++)
          { 
               l_sql = l_sql + "'"+p_Values.at(l_itterator)+"', ";
          }

          l_sql = l_sql + "'"+p_Values.at(l_itterator)+"')";

          try
          {
               execSQL(l_sql);
          }
          catch(SQLHelperException &sqlExp)
          {
               throw sqlExp;
          }
     }
     return(getLastSQLStatus());
}
void SQLHelper::initiateSelect(int max_var_len, int max_name_len)
{
     MAX_VAR_SIZE=max_var_len;
     MAX_NAME_SIZE=max_name_len;
}
vector< vector<string> > SQLHelper::selectDB(string sql)
{
          int i=0;
          vector<string> row;
	     vector< vector<string> > rowData;

          /** End select statement **/
          
/*           EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */
/*           EXEC SQL INCLUDE SQLDA;
 */ 
/*
 * $Header: sqlda.h 08-may-2007.05:58:33 ardesai Exp $ sqlda.h 
 */

/***************************************************************
*      The SQLDA descriptor definition                         *
*--------------------------------------------------------------*
*      VAX/3B Version                                          *
*                                                              *
* Copyright (c) 1987, 2007, Oracle. All rights reserved.  *
***************************************************************/


/* NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************
*/

/*  MODIFIED
    ardesai    05/08/07  - Bug[6037057] Undef Y
    apopat     05/08/02  - [2362423] MVS PE to make lines shorter than 79
    apopat     07/31/99 -  [707588] TAB to blanks for OCCS
    lvbcheng   10/27/98 -  change long to int for sqlda
    lvbcheng   08/15/97 -  Move sqlda protos to sqlcpr.h
    lvbcheng   06/25/97 -  Move sqlda protos to this file
    jbasu      01/29/95 -  correct typo
    jbasu      01/27/95 -  correct comment - ub2->sb2
    jbasu      12/12/94 - Bug 217878: note this is an SOSD file
    Morse      12/01/87 - undef L and S for v6 include files
    Richey     07/13/87 - change int defs to long 
    Clare      09/13/84 - Port: Ch types to match SQLLIB structs
    Clare      10/02/86 - Add ifndef SQLDA
*/

#ifndef SQLDA_
#define SQLDA_ 1
 
#ifdef T
# undef T
#endif
#ifdef F
# undef F
#endif

#ifdef S
# undef S
#endif
#ifdef L
# undef L
#endif

#ifdef Y
 # undef Y
#endif
 
struct SQLDA {
  /* ub4    */ int        N; /* Descriptor size in number of entries        */
  /* text** */ char     **V; /* Ptr to Arr of addresses of main variables   */
  /* ub4*   */ int       *L; /* Ptr to Arr of lengths of buffers            */
  /* sb2*   */ short     *T; /* Ptr to Arr of types of buffers              */
  /* sb2**  */ short    **I; /* Ptr to Arr of addresses of indicator vars   */
  /* sb4    */ int        F; /* Number of variables found by DESCRIBE       */
  /* text** */ char     **S; /* Ptr to Arr of variable name pointers        */
  /* ub2*   */ short     *M; /* Ptr to Arr of max lengths of var. names     */
  /* ub2*   */ short     *C; /* Ptr to Arr of current lengths of var. names */
  /* text** */ char     **X; /* Ptr to Arr of ind. var. name pointers       */
  /* ub2*   */ short     *Y; /* Ptr to Arr of max lengths of ind. var. names*/
  /* ub2*   */ short     *Z; /* Ptr to Arr of cur lengths of ind. var. names*/
  };
 
typedef struct SQLDA SQLDA;
 
#endif

/* ----------------- */
/* defines for sqlda */
/* ----------------- */

#define SQLSQLDAAlloc(arg1, arg2, arg3, arg4) sqlaldt(arg1, arg2, arg3, arg4) 

#define SQLSQLDAFree(arg1, arg2) sqlclut(arg1, arg2) 





          /* EXEC SQL BEGIN DECLARE SECTION; */ 


          char *sqlStatement; //for prepare statement.
          int occurs, type, len,  output_count, input_count, input_len, in_occurs;
          short indi;

          char *data;
          char *name;
          char *in_name;
          char *input_buf;

          /* EXEC SQL END DECLARE SECTION; */ 


            data = new char[MAX_VAR_SIZE];
            name = new char[MAX_NAME_SIZE];
            in_name = new char[MAX_NAME_SIZE];
            input_buf = new char[MAX_VAR_SIZE];

          /* EXEC SQL WHENEVER SQLERROR GOTO throwException; */ 


          /** Allocating descriptor **/

          /* EXEC SQL ALLOCATE DESCRIPTOR 'input_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )85;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )100;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL ALLOCATE DESCRIPTOR 'output_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )116;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )100;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}



          /** Allocating Descriptor **/

          /**convert sql string into sql char[] ***/
          sqlStatement = new char[sql.length()];
          strcpy(sqlStatement, (char *)sql.c_str());
          /**convert sql string into sql char[] ***/


          //Prepare Statement for further calculation.
          /* EXEC SQL PREPARE S from :sqlStatement; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )148;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (unsigned char  *)sqlStatement;
          sqlstm.sqhstl[0] = (unsigned long )0;
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqphss = sqlstm.sqhsts;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqpins = sqlstm.sqinds;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlstm.sqpadto = sqlstm.sqadto;
          sqlstm.sqptdso = sqlstm.sqtdso;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL DECLARE C CURSOR FOR S; */ 



          /** Process Input **/
          /* EXEC SQL DESCRIBE INPUT S USING DESCRIPTOR 'input_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )167;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL GET DESCRIPTOR 'input_descriptor' :input_count = COUNT; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )198;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (unsigned char  *)&input_count;
          sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqphss = sqlstm.sqhsts;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqpins = sqlstm.sqinds;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlstm.sqpadto = sqlstm.sqadto;
          sqlstm.sqptdso = sqlstm.sqtdso;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}



          type=97;

          for(i=0;i<input_count;i++)
          {
               in_occurs=i+1;
               /* EXEC SQL GET DESCRIPTOR 'input_descriptor' VALUE :in_occurs :in_name = NAME; */ 

{
               struct sqlexd sqlstm;
               sqlstm.sqlvsn = 12;
               sqlstm.arrsiz = 4;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )233;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)4352;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (unsigned char  *)&in_occurs;
               sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         short *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned long )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (unsigned char  *)in_name;
               sqlstm.sqhstl[1] = (unsigned long )0;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         short *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned long )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqphss = sqlstm.sqhsts;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqpins = sqlstm.sqinds;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
               sqlstm.sqpadto = sqlstm.sqadto;
               sqlstm.sqptdso = sqlstm.sqtdso;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
               if (sqlca.sqlcode < 0) goto throwException;
}



               input_buf[0]='\0';

               input_len=strlen(input_buf);

               /* EXEC SQL SET DESCRIPTOR 'input_descriptor' VALUE :in_occurs TYPE = :type,
               LENGTH = :input_len, DATA = :input_buf; */ 

{
               struct sqlexd sqlstm;
               sqlstm.sqlvsn = 12;
               sqlstm.arrsiz = 4;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )272;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)4352;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (unsigned char  *)&in_occurs;
               sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         short *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned long )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (unsigned char  *)&type;
               sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         short *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned long )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (unsigned char  *)&input_len;
               sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[2] = (         int  )0;
               sqlstm.sqindv[2] = (         short *)0;
               sqlstm.sqinds[2] = (         int  )0;
               sqlstm.sqharm[2] = (unsigned long )0;
               sqlstm.sqadto[2] = (unsigned short )0;
               sqlstm.sqtdso[2] = (unsigned short )0;
               sqlstm.sqhstv[3] = (unsigned char  *)input_buf;
               sqlstm.sqhstl[3] = (unsigned long )0;
               sqlstm.sqhsts[3] = (         int  )0;
               sqlstm.sqindv[3] = (         short *)0;
               sqlstm.sqinds[3] = (         int  )0;
               sqlstm.sqharm[3] = (unsigned long )0;
               sqlstm.sqadto[3] = (unsigned short )0;
               sqlstm.sqtdso[3] = (unsigned short )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqphss = sqlstm.sqhsts;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqpins = sqlstm.sqinds;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
               sqlstm.sqpadto = sqlstm.sqadto;
               sqlstm.sqptdso = sqlstm.sqtdso;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
               if (sqlca.sqlcode < 0) goto throwException;
}


          }
          /*** Process input **/

          /* EXEC SQL OPEN C USING DESCRIPTOR 'input_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )319;
          sqlstm.selerr = (unsigned short)1;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqcmod = (unsigned int )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}



          /*** Processing Output ***/


          /* EXEC SQL DESCRIBE S USING DESCRIPTOR 'output_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )350;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL GET DESCRIPTOR 'output_descriptor' :output_count=COUNT; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )382;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlstm.sqhstv[0] = (unsigned char  *)&output_count;
          sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
          sqlstm.sqhsts[0] = (         int  )0;
          sqlstm.sqindv[0] = (         short *)0;
          sqlstm.sqinds[0] = (         int  )0;
          sqlstm.sqharm[0] = (unsigned long )0;
          sqlstm.sqadto[0] = (unsigned short )0;
          sqlstm.sqtdso[0] = (unsigned short )0;
          sqlstm.sqphsv = sqlstm.sqhstv;
          sqlstm.sqphsl = sqlstm.sqhstl;
          sqlstm.sqphss = sqlstm.sqhsts;
          sqlstm.sqpind = sqlstm.sqindv;
          sqlstm.sqpins = sqlstm.sqinds;
          sqlstm.sqparm = sqlstm.sqharm;
          sqlstm.sqparc = sqlstm.sqharc;
          sqlstm.sqpadto = sqlstm.sqadto;
          sqlstm.sqptdso = sqlstm.sqtdso;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}



          len=MAX_VAR_SIZE;

          for(i=0;i<output_count;i++)
          {
               occurs=i+1;
               /* EXEC SQL GET DESCRIPTOR 'output_descriptor' VALUE :occurs :name=NAME; */ 

{
               struct sqlexd sqlstm;
               sqlstm.sqlvsn = 12;
               sqlstm.arrsiz = 4;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )418;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)4352;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (unsigned char  *)&occurs;
               sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         short *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned long )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (unsigned char  *)name;
               sqlstm.sqhstl[1] = (unsigned long )0;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         short *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned long )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqphss = sqlstm.sqhsts;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqpins = sqlstm.sqinds;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
               sqlstm.sqpadto = sqlstm.sqadto;
               sqlstm.sqptdso = sqlstm.sqtdso;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
               if (sqlca.sqlcode < 0) goto throwException;
}



               /* EXEC SQL SET DESCRIPTOR 'output_descriptor' VALUE :occurs TYPE = :type , LENGTH = :len; */ 

{
               struct sqlexd sqlstm;
               sqlstm.sqlvsn = 12;
               sqlstm.arrsiz = 4;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = "";
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )458;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)4352;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (unsigned char  *)&occurs;
               sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         short *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned long )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (unsigned char  *)&type;
               sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         short *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned long )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (unsigned char  *)&len;
               sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
               sqlstm.sqhsts[2] = (         int  )0;
               sqlstm.sqindv[2] = (         short *)0;
               sqlstm.sqinds[2] = (         int  )0;
               sqlstm.sqharm[2] = (unsigned long )0;
               sqlstm.sqadto[2] = (unsigned short )0;
               sqlstm.sqtdso[2] = (unsigned short )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqphss = sqlstm.sqhsts;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqpins = sqlstm.sqinds;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
               sqlstm.sqpadto = sqlstm.sqadto;
               sqlstm.sqptdso = sqlstm.sqtdso;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
               if (sqlca.sqlcode < 0) goto throwException;
}


          }

          /** FETCH AND STORE IN VECTOR **/

          /* EXEC SQL WHENEVER NOT FOUND GOTO end_select; */ 


          for(;;)
          {

               /* EXEC SQL FETCH C INTO DESCRIPTOR 'output_descriptor'; */ 

{
               struct sqlexd sqlstm;
               sqlstm.sqlvsn = 12;
               sqlstm.arrsiz = 4;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )502;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)4352;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqfoff = (         int )0;
               sqlstm.sqfmod = (unsigned int )2;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
               if (sqlca.sqlcode == 1403) goto end_select;
               if (sqlca.sqlcode < 0) goto throwException;
}


	          for(i=0;i<output_count;i++)
               {
                    occurs = i+1;
                    /* EXEC SQL GET DESCRIPTOR 'output_descriptor' VALUE :occurs
		          :data = DATA, :indi = INDICATOR; */ 

{
                    struct sqlexd sqlstm;
                    sqlstm.sqlvsn = 12;
                    sqlstm.arrsiz = 4;
                    sqlstm.sqladtp = &sqladt;
                    sqlstm.sqltdsp = &sqltds;
                    sqlstm.stmt = "";
                    sqlstm.iters = (unsigned int  )1;
                    sqlstm.offset = (unsigned int  )534;
                    sqlstm.cud = sqlcud0;
                    sqlstm.sqlest = (unsigned char  *)&sqlca;
                    sqlstm.sqlety = (unsigned short)4352;
                    sqlstm.occurs = (unsigned int  )0;
                    sqlstm.sqhstv[0] = (unsigned char  *)&occurs;
                    sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
                    sqlstm.sqhsts[0] = (         int  )0;
                    sqlstm.sqindv[0] = (         short *)0;
                    sqlstm.sqinds[0] = (         int  )0;
                    sqlstm.sqharm[0] = (unsigned long )0;
                    sqlstm.sqadto[0] = (unsigned short )0;
                    sqlstm.sqtdso[0] = (unsigned short )0;
                    sqlstm.sqhstv[1] = (unsigned char  *)data;
                    sqlstm.sqhstl[1] = (unsigned long )0;
                    sqlstm.sqhsts[1] = (         int  )0;
                    sqlstm.sqindv[1] = (         short *)0;
                    sqlstm.sqinds[1] = (         int  )0;
                    sqlstm.sqharm[1] = (unsigned long )0;
                    sqlstm.sqadto[1] = (unsigned short )0;
                    sqlstm.sqtdso[1] = (unsigned short )0;
                    sqlstm.sqhstv[2] = (unsigned char  *)&indi;
                    sqlstm.sqhstl[2] = (unsigned long )sizeof(short);
                    sqlstm.sqhsts[2] = (         int  )0;
                    sqlstm.sqindv[2] = (         short *)0;
                    sqlstm.sqinds[2] = (         int  )0;
                    sqlstm.sqharm[2] = (unsigned long )0;
                    sqlstm.sqadto[2] = (unsigned short )0;
                    sqlstm.sqtdso[2] = (unsigned short )0;
                    sqlstm.sqphsv = sqlstm.sqhstv;
                    sqlstm.sqphsl = sqlstm.sqhstl;
                    sqlstm.sqphss = sqlstm.sqhsts;
                    sqlstm.sqpind = sqlstm.sqindv;
                    sqlstm.sqpins = sqlstm.sqinds;
                    sqlstm.sqparm = sqlstm.sqharm;
                    sqlstm.sqparc = sqlstm.sqharc;
                    sqlstm.sqpadto = sqlstm.sqadto;
                    sqlstm.sqptdso = sqlstm.sqtdso;
                    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                    if (sqlca.sqlcode < 0) goto throwException;
}


                    if(indi==-1)
                    {
                         row.push_back(" ");
                    }
                    else
                    {
                         if(strlen(data)>MAX_VAR_SIZE)
                              data[MAX_VAR_SIZE]='\0';
                         //trim(data);
                         row.push_back(trim(data));
                    }
               }
               rowData.push_back(row);
	          row.clear();
          }
          /** FETCH AND STORE IN VECTOR **/
          /*** Processing Output ***/

          end_select:
          
          /* EXEC SQL CLOSE C; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )578;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL COMMIT WORK; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )593;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}



          /* EXEC SQL DEALLOCATE DESCRIPTOR 'input_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )608;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL DEALLOCATE DESCRIPTOR 'output_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )639;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          setLastSQLStatus(sqlca.sqlcode);
          return rowData;

          throwException:
          /* EXEC SQL CLOSE C; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )671;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL COMMIT WORK; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )686;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL DEALLOCATE DESCRIPTOR 'input_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )701;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          /* EXEC SQL DEALLOCATE DESCRIPTOR 'output_descriptor'; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 12;
          sqlstm.arrsiz = 4;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.stmt = "";
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )732;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) goto throwException;
}


          setLastSQLStatus(sqlca.sqlcode);
          throw SQLHelperException(sqlca.sqlcode);
}
vector< vector<string> > SQLHelper::selectDB(string TableName, vector<string> SelectcolumName, vector<string> whereColumName, vector<string> whereValues)
{
     if((whereColumName.size() != whereValues.size()) && whereColumName.size()<1)
     {
          throw SQLHelperException(889);
     }
     else if(SelectcolumName.size()<1)
     {
          throw SQLHelperException(888);
     }
     else
     {	
          int i=0;
	   vector< vector<string> > rowData;

          /** Prepare select statement **/

          string sql = "SELECT ";

          for(i=0;i<SelectcolumName.size()-1;i++)
          {
               sql = sql + SelectcolumName.at(i) + " , ";
          }

          sql = sql + SelectcolumName.at(i) + " FROM " + TableName + " WHERE ";

          for(i=0;i<whereColumName.size()-1;i++)
          {
               sql = sql + whereColumName.at(i) + " = '" +  whereValues.at(i) + "' AND ";
          }

          sql = sql + whereColumName.at(i) + " = '" + whereValues.at(i) + "'";

          try
          {
               rowData=selectDB(sql);
               return rowData;
          }
          catch(SQLHelperException sqlExp)
          {
               throw sqlExp;
          }
    }
}
vector< vector<string> > SQLHelper::selectAll(string tableName)
{
     string sql = "SELECT * FROM " + tableName;
     vector< vector<string> > rowData;
     try
     {
          rowData = selectDB(sql);
          return rowData;
     }
     catch(SQLHelperException sqlExp)
     {
          throw sqlExp;
     }
}  
vector< vector<string> > SQLHelper::selectDB(string TableName, vector<string> SelectcolumName)
{
     int i=0;
     string sql;
     vector< vector<string> > rowData;
     sql = "SELECT ";
     for(i=0;i<SelectcolumName.size()-1;i++)
     {
          sql = sql + SelectcolumName.at(i) + " , ";
     }
     sql = sql + SelectcolumName.at(i) + " FROM " + TableName;
     try
     {
          rowData=selectDB(sql);
          return rowData;
     }
     catch(SQLHelperException sqlExp)
     {
          throw sqlExp;
     }
}
vector< vector<string> > SQLHelper::selectDB(string TableName, vector<string> whereColumName, vector<string> whereValues)
{
     int i;
     vector< vector<string> > rowData;
     string sql = "SELECT * FROM " + TableName + " WHERE ";
     for(i=0;i<whereColumName.size()-1;i++)
     {
          sql = sql + whereColumName.at(i) + " = '" +  whereValues.at(i) + "' AND ";
     }

     sql = sql + whereColumName.at(i) + " = '" + whereValues.at(i) + "'";

     try
     {
          rowData=selectDB(sql);
          return rowData;
     }
     catch(SQLHelperException sqlExp)
     {
          throw sqlExp;
     }
}
string SQLHelper::trim(string l)
{
     char *a;
     a = new char[l.length()];
     strcpy(a,(char *)l.c_str());
     int len=strlen(a);
     char b[len]; int top=0;
     int charFound=0, spaceFound=0;
     for(int i=0;i<len;i++)
     {
          if(a[i]!=' ')
          {
               if(spaceFound)
	       {
	             b[top]=' ';
		     top++;
		     spaceFound=0;
	       }
               charFound=1;
               b[top]=a[i];
               top++;
          }
          else
          {
               if(charFound)
               {
                   spaceFound=1;
               }
          }
     }
     b[top]='\0';
     return b;
}
