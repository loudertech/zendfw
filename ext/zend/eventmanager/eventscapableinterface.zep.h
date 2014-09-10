
extern zend_class_entry *zend_eventmanager_eventscapableinterface_ce;

ZEPHIR_INIT_CLASS(Zend_EventManager_EventsCapableInterface);

ZEPHIR_INIT_FUNCS(zend_eventmanager_eventscapableinterface_method_entry) {
	PHP_ABSTRACT_ME(Zend_EventManager_EventsCapableInterface, getEventManager, NULL)
  PHP_FE_END
};
