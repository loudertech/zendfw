
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_ZEND_H
#define PHP_ZEND_H 1

#define ZEPHIR_RELEASE 1

#include "kernel/globals.h"

#define PHP_ZEND_NAME        "zend"
#define PHP_ZEND_VERSION     "0.0.1"
#define PHP_ZEND_EXTNAME     "zend"
#define PHP_ZEND_AUTHOR      ""
#define PHP_ZEND_ZEPVERSION  "0.4.6a"
#define PHP_ZEND_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(zend)

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(zend)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(zend)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(zend_globals_id, zend_zend_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (zend_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_zend_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(zend_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(zend_globals)
#endif

#define zephir_globals_def zend_globals
#define zend_zephir_globals_def zend_zend_globals

extern zend_module_entry zend__module_entry;
#define phpext_zend_ptr &zend__module_entry

#endif
