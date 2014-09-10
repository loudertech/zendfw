
extern zend_class_entry *zend_mvc_applicationinterface_ce;

ZEPHIR_INIT_CLASS(Zend_Mvc_ApplicationInterface);

ZEPHIR_INIT_FUNCS(zend_mvc_applicationinterface_method_entry) {
	PHP_ABSTRACT_ME(Zend_Mvc_ApplicationInterface, getServiceManager, NULL)
	PHP_ABSTRACT_ME(Zend_Mvc_ApplicationInterface, getRequest, NULL)
	PHP_ABSTRACT_ME(Zend_Mvc_ApplicationInterface, getResponse, NULL)
	PHP_ABSTRACT_ME(Zend_Mvc_ApplicationInterface, run, NULL)
  PHP_FE_END
};
