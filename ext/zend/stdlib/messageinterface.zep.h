
extern zend_class_entry *zend_stdlib_messageinterface_ce;

ZEPHIR_INIT_CLASS(Zend_Stdlib_MessageInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_stdlib_messageinterface_setmetadata, 0, 0, 1)
	ZEND_ARG_INFO(0, spec)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_stdlib_messageinterface_getmetadata, 0, 0, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_stdlib_messageinterface_setcontent, 0, 0, 1)
	ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zend_stdlib_messageinterface_method_entry) {
	PHP_ABSTRACT_ME(Zend_Stdlib_MessageInterface, setMetadata, arginfo_zend_stdlib_messageinterface_setmetadata)
	PHP_ABSTRACT_ME(Zend_Stdlib_MessageInterface, getMetadata, arginfo_zend_stdlib_messageinterface_getmetadata)
	PHP_ABSTRACT_ME(Zend_Stdlib_MessageInterface, setContent, arginfo_zend_stdlib_messageinterface_setcontent)
	PHP_ABSTRACT_ME(Zend_Stdlib_MessageInterface, getContent, NULL)
  PHP_FE_END
};
