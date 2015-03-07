//
//  DBManager.h
//  SQLite3DBSample
//
//  Created by Tereshkin Sergey on 24/12/14.
//  Copyright (c) 2014 App To You. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

#define DATABASE_NAME @"sampledb.sql"

@interface DBManager : NSObject

@property (nonatomic, strong) NSMutableArray *arrColumnNames;

@property (nonatomic) int affectedRows;
@property (nonatomic) long long lastInsertedRowID;

-(instancetype)initWithDatabaseFilename:(NSString *)dbFilename;
-(void)executeQuery:(NSString *)query;
-(NSArray *)loadDataFromDB:(NSString *)query;

/*
 
 ### | CREATING DATABASE FROM TERMINAL | ###

 sqlite3 databaseName.sql
 sqlite> CREATE TABLE name(column_id integer primary key, column_1 text, column_2 text, column_3 integer);
 sqlite> .quit
 
 sqlite> .tables
 peopleInfo
 
 sqlite> .schema peopleInfo
 CREATE TABLE peopleInfo(peopleInfoId integer primary key, firstname text, lastname text,age integer);
 sqlite>
 
*/

@end


