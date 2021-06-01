/*
 ** 2021-05-29
 **
 ** The author disclaims copyright to this source code.  In place of
 ** a legal notice, here is a blessing:
 **
 **    May you do good and not evil.
 **    May you find forgiveness for yourself and forgive others.
 **    May you share freely, never taking more than you give.
 **
 ******************************************************************************
 **
 ** Wrappers for some C variadic functions used in SQLite to make them
 ** accessible from Swift.
 */

#include "sqlite3.h"

/// Duplicates and returns `s` using memory allocated by `sqlite3_malloc()`
char * csqlite_sqlite3_strdup(const char *s);

// MARK: - SQLite library configuration
// See https://sqlite.org/c3ref/config.html

/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_SINGLETHREAD)`
int csqlite_sqlite3_config_singlethread(sqlite3 *db);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_MULTITHREAD)`
int csqlite_sqlite3_config_multithread(sqlite3 *db);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_SERIALIZED)`
int csqlite_sqlite3_config_serialized(sqlite3 *db);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_MALLOC, x)`
int csqlite_sqlite3_config_malloc(sqlite3 *db, sqlite3_mem_methods *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_GETMALLOC, x)`
int csqlite_sqlite3_config_getmalloc(sqlite3 *db, sqlite3_mem_methods *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_MEMSTATUS, x)`
int csqlite_sqlite3_config_memstatus(sqlite3 *db, int x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_PAGECACHE, x, y, z)`
int csqlite_sqlite3_config_pagecache(sqlite3 *db, void *x, int y, int z);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_HEAP, x, y, z)`
int csqlite_sqlite3_config_heap(sqlite3 *db, void *x, int y, int z);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_MUTEX, x)`
int csqlite_sqlite3_config_mutex(sqlite3 *db, sqlite3_mutex_methods *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_GETMUTEX, x)`
int csqlite_sqlite3_config_getmutex(sqlite3 *db, sqlite3_mutex_methods *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_LOOKASIDE, x, y)`
int csqlite_sqlite3_config_lookaside(sqlite3 *db, int x, int y);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_PCACHE2, x)`
int csqlite_sqlite3_config_pcache2(sqlite3 *db, sqlite3_pcache_methods2 *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_GETPCACHE2, x)`
int csqlite_sqlite3_config_getpcache2(sqlite3 *db, sqlite3_pcache_methods2 *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_LOG, x, y)`
int csqlite_sqlite3_config_log(sqlite3 *db, void(*x)(void *,int,const char *), void *y);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_URI, x)`
int csqlite_sqlite3_config_uri(sqlite3 *db, int x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_COVERING_INDEX_SCAN, x)`
int csqlite_sqlite3_config_covering_index_scan(sqlite3 *db, int x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_SQLLOG, x, y)`
int csqlite_sqlite3_config_sqllog(sqlite3 *db, void(*x)(void *,sqlite3 *,const char *, int), void *y);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_MMAP_SIZE, x, y)`
int csqlite_sqlite3_config_mmap_size(sqlite3 *db, sqlite3_int64 x, sqlite3_int64 y);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_PCACHE_HDRSZ, x)`
int csqlite_sqlite3_config_pcache_hdrsz(sqlite3 *db, int *x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_PMASZ, x)`
int csqlite_sqlite3_config_pmasz(sqlite3 *db, unsigned int x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_STMTJRNL_SPILL, x)`
int csqlite_sqlite3_config_stmtjrnl_spill(sqlite3 *db, int x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_SORTERREF_SIZE, x)`
int csqlite_sqlite3_config_sorterref_size(sqlite3 *db, int x);
/// Equivalent to `sqlite3_config(db, SQLITE_CONFIG_MEMDB_MAXSIZE, x)`
int csqlite_sqlite3_config_memdb_maxsize(sqlite3 *db, sqlite3_int64 x);


// MARK: - Database connection configuration
// See https://sqlite.org/c3ref/db_config.html

/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_ENABLE_FKEY, x, y)`
int csqlite_sqlite3_db_config_enable_fkey(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_ENABLE_TRIGGER, x, y)`
int csqlite_sqlite3_db_config_enable_trigger(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_ENABLE_VIEW, x, y)`
int csqlite_sqlite3_db_config_enable_view(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION, x, y)`
int csqlite_sqlite3_db_config_enable_load_extension(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE, x, y)`
int csqlite_sqlite3_db_config_no_ckpt_on_close(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_ENABLE_QPSG, x, y)`
int csqlite_sqlite3_db_config_enable_qpsg(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_DEFENSIVE, x, y)`
int csqlite_sqlite3_db_config_defensive(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_WRITABLE_SCHEMA, x, y)`
int csqlite_sqlite3_db_config_writable_schema(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_LEGACY_ALTER_TABLE, x, y)`
int csqlite_sqlite3_db_config_legacy_alter_table(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_DQS_DML, x, y)`
int csqlite_sqlite3_db_config_dqs_dml(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_DQS_DDL, x, y)`
int csqlite_sqlite3_db_config_dqs_ddl(sqlite3 *db, int x, int *y);
/// Equivalent to `sqlite3_db_config(db, SQLITE_DBCONFIG_TRUSTED_SCHEMA, x, y)`
int csqlite_sqlite3_db_config_trusted_schema(sqlite3 *db, int x, int *y);