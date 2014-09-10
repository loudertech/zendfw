
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
 * Interface to automate setter injection for an EventManager instance
 */
ZEPHIR_INIT_CLASS(Zend_EventManager_EventManagerAwareInterface) {

	ZEPHIR_REGISTER_INTERFACE_EX(Zend\\EventManager, EventManagerAwareInterface, zend, eventmanager_eventmanagerawareinterface, zend_eventmanager_eventscapableinterface_ce, zend_eventmanager_eventmanagerawareinterface_method_entry);

	return SUCCESS;

}

/**
 * Inject an EventManager instance
 *
 * @param  EventManagerInterface $eventManager
 * @return void
 */
ZEPHIR_DOC_METHOD(Zend_EventManager_EventManagerAwareInterface, setEventManager);

