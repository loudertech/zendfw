
extern zend_class_entry *zend_eventmanager_eventmanagerawareinterface_ce;

ZEPHIR_INIT_CLASS(Zend_EventManager_EventManagerAwareInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_eventmanager_eventmanagerawareinterface_seteventmanager, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, eventManager, Zend\\EventManager\\EventManagerInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zend_eventmanager_eventmanagerawareinterface_method_entry) {
	PHP_ABSTRACT_ME(Zend_EventManager_EventManagerAwareInterface, setEventManager, arginfo_zend_eventmanager_eventmanagerawareinterface_seteventmanager)
  PHP_FE_END
};
