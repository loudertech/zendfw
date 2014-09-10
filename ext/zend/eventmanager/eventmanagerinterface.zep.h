
extern zend_class_entry *zend_eventmanager_eventmanagerinterface_ce;

ZEPHIR_INIT_CLASS(Zend_EventManager_EventManagerInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_trigger, 0, 0, 1)
	ZEND_ARG_INFO(0, event)
	ZEND_ARG_INFO(0, target)
	ZEND_ARG_INFO(0, argv)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_triggeruntil, 0, 0, 2)
	ZEND_ARG_INFO(0, event)
	ZEND_ARG_INFO(0, target)
	ZEND_ARG_INFO(0, argv)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_attach, 0, 0, 1)
	ZEND_ARG_INFO(0, event)
	ZEND_ARG_INFO(0, callback)
	ZEND_ARG_INFO(0, priority)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_detach, 0, 0, 1)
	ZEND_ARG_INFO(0, listener)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_getlisteners, 0, 0, 1)
	ZEND_ARG_INFO(0, event)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_clearlisteners, 0, 0, 1)
	ZEND_ARG_INFO(0, event)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_seteventclass, 0, 0, 1)
	ZEND_ARG_INFO(0, class)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_setidentifiers, 0, 0, 1)
	ZEND_ARG_INFO(0, identifiers)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_addidentifiers, 0, 0, 1)
	ZEND_ARG_INFO(0, identifiers)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_attachaggregate, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, aggregate, Zend\\EventManager\\ListenerAggregateInterface, 0)
	ZEND_ARG_INFO(0, priority)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerinterface_detachaggregate, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, aggregate, Zend\\EventManager\\ListenerAggregateInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zend_eventmanager_eventmanagerinterface_method_entry) {
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, trigger, arginfo_zend_eventmanager_eventmanagerinterface_trigger)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, triggerUntil, arginfo_zend_eventmanager_eventmanagerinterface_triggeruntil)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, attach, arginfo_zend_eventmanager_eventmanagerinterface_attach)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, detach, arginfo_zend_eventmanager_eventmanagerinterface_detach)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, getEvents, NULL)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, getListeners, arginfo_zend_eventmanager_eventmanagerinterface_getlisteners)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, clearListeners, arginfo_zend_eventmanager_eventmanagerinterface_clearlisteners)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, setEventClass, arginfo_zend_eventmanager_eventmanagerinterface_seteventclass)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, getIdentifiers, NULL)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, setIdentifiers, arginfo_zend_eventmanager_eventmanagerinterface_setidentifiers)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, addIdentifiers, arginfo_zend_eventmanager_eventmanagerinterface_addidentifiers)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, attachAggregate, arginfo_zend_eventmanager_eventmanagerinterface_attachaggregate)
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerInterface, detachAggregate, arginfo_zend_eventmanager_eventmanagerinterface_detachaggregate)
  PHP_FE_END
};
