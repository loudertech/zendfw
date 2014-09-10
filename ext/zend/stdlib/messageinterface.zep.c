
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Zend Framework (http://framework.zend.com/)
 *
 * @link      http://github.com/zendframework/zf2 for the canonical source repository
 * @copyright Copyright (c) 2005-2014 Zend Technologies USA Inc. (http://www.zend.com)
 * @license   http://framework.zend.com/license/new-bsd New BSD License
 */
ZEPHIR_INIT_CLASS(Zend_Stdlib_MessageInterface) {

	ZEPHIR_REGISTER_INTERFACE(Zend\\Stdlib, MessageInterface, zend, stdlib_messageinterface, zend_stdlib_messageinterface_method_entry);

	return SUCCESS;

}

/**
 * Set metadata
 *
 * @param  string|int|array|\Traversable $spec
 * @param  mixed $value
 */
ZEPHIR_DOC_METHOD(Zend_Stdlib_MessageInterface, setMetadata);

/**
 * Get metadata
 *
 * @param  null|string|int $key
 * @return mixed
 */
ZEPHIR_DOC_METHOD(Zend_Stdlib_MessageInterface, getMetadata);

/**
 * Set content
 *
 * @param  mixed $content
 * @return mixed
 */
ZEPHIR_DOC_METHOD(Zend_Stdlib_MessageInterface, setContent);

/**
 * Get content
 *
 * @return mixed
 */
ZEPHIR_DOC_METHOD(Zend_Stdlib_MessageInterface, getContent);

