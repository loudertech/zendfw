
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
 * Interface providing events that can be attached, detached and triggered.
 */
ZEPHIR_INIT_CLASS(Zend_EventManager_EventsCapableInterface) {

	ZEPHIR_REGISTER_INTERFACE(Zend\\EventManager, EventsCapableInterface, zend, eventmanager_eventscapableinterface, zend_eventmanager_eventscapableinterface_method_entry);

	return SUCCESS;

}

/**
 * Retrieve the event manager
 *
 * Lazy-loads an EventManager instance if none registered.
 *
 * @return EventManagerInterface
 */
ZEPHIR_DOC_METHOD(Zend_EventManager_EventsCapableInterface, getEventManager);

