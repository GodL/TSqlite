//
//  Sqlite.h
//  TSqlDemo
//
//  Created by 李浩 on 2017/4/15.
//  Copyright © 2017年 李浩. All rights reserved.
//

#ifndef Sqlite_h
#define Sqlite_h

#include <stdio.h>
#include <sqlite3.h>
#include <CoreFoundation/CoreFoundation.h>


typedef struct {
    CFMutableDictionaryRef db_cache;
    const char* sqlite_path;
}sqlite;

typedef  sqlite* SqliteRef;

SqliteRef sqlite_create(const char* path);

bool sqlite_open(SqliteRef sqlite);

#endif /* Sqlite_h */
