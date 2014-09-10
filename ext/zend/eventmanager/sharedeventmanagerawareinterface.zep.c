
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
/**
 * Interface to automate setter injection for a SharedEventManagerInterface instance
 */
ZEPHIR_INIT_CLASS(Zend_EventManager_SharedEventManagerAwareInterface) {

	ZEPHIR_REGISTER_INTERFACE(Zend\\EventManager, SharedEventManagerAwareInterface, zend, eventmanager_sharedeventmanagerawareinterface, zend_eventmanager_sharedeventmanagerawareinterface_method_entry);

	return SUCCESS;

}

/**
 * Inject a SharedEventManager instance
 *
 * @param  SharedEventManagerInterface $sharedEventManager
 * @return SharedEventManagerAwareInterface
 */
ZEPHIR_DOC_METHOD(Zend_EventManager_SharedEventManagerAwareInterface, setSharedManager);

/**
 * Get shared collections container
 *
 * @return SharedEventManagerInterface
 */
ZEPHIR_DOC_METHOD(Zend_EventManager_SharedEventManagerAwareInterface, getSharedManager);

/**
 * Remove any shared collections
 *
 * @return void
 */
ZEPHIR_DOC_METHOD(Zend_EventManager_SharedEventManagerAwareInterface, unsetSharedManager);

