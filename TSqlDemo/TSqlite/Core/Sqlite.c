//
//  Sqlite.c
//  TSqlDemo
//
//  Created by 李浩 on 2017/4/15.
//  Copyright © 2017年 李浩. All rights reserved.
//

#include "Sqlite.h"
#include <pthread/pthread.h>

SqliteRef sqlite_create(const char* path)
{
    if (path == NULL || strlen(path) <= 0) return NULL;
    
    SqliteRef sqlite = malloc(sizeof(sqlite));
    sqlite->db_cache = CFDictionaryCreateMutable(CFAllocatorGetDefault(), 10, NULL, NULL);
    sqlite->sqlite_path = strdup(path);
    return sqlite;
}

bool sqlite_open(SqliteRef sqlite)
{
    if (sqlite == NULL) return false;
    sqlite3* db = NULL;
    int result = sqlite3_open(sqlite->sqlite_path, &db);
    if (result == SQLITE_OK) {
        pthread_t p = pthread_self();
        CFDictionarySetValue(sqlite->db_cache, p, db);
        return true;
    }
    sqlite3_close(db);
    return false;
}
