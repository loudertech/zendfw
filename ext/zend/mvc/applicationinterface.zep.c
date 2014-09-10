
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
ZEPHIR_INIT_CLASS(Zend_Mvc_ApplicationInterface) {

	ZEPHIR_REGISTER_INTERFACE_EX(Zend\\Mvc, ApplicationInterface, zend, mvc_applicationinterface, zend_eventmanager_eventscapableinterface_ce, zend_mvc_applicationinterface_method_entry);

	return SUCCESS;

}

/**
 * Get the locator object
 *
 * @return \Zend\ServiceManager\ServiceLocatorInterface
 */
ZEPHIR_DOC_METHOD(Zend_Mvc_ApplicationInterface, getServiceManager);

/**
 * Get the request object
 *
 * @return \Zend\Stdlib\RequestInterface
 */
ZEPHIR_DOC_METHOD(Zend_Mvc_ApplicationInterface, getRequest);

/**
 * Get the response object
 *
 * @return \Zend\Stdlib\ResponseInterface
 */
ZEPHIR_DOC_METHOD(Zend_Mvc_ApplicationInterface, getResponse);

/**
 * Run the application
 *
 * @return self
 */
ZEPHIR_DOC_METHOD(Zend_Mvc_ApplicationInterface, run);

