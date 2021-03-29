// Search
	PyModule_AddIntConstant(poModule, "EFFECT_WEAPON",				CInstanceBase::EFFECT_WEAPON);

	PyModule_AddIntConstant(poModule, "EFFECT_AFFECT",				CInstanceBase::EFFECT_AFFECT);
	PyModule_AddIntConstant(poModule, "EFFECT_EMOTICON",			CInstanceBase::EFFECT_EMOTICON);
	PyModule_AddIntConstant(poModule, "EFFECT_EMPIRE",				CInstanceBase::EFFECT_EMPIRE);

	PyModule_AddIntConstant(poModule, "EFFECT_REFINED",				CInstanceBase::EFFECT_REFINED);

// Add under
#ifdef ENABLE_BOSS_EFFECT
	PyModule_AddIntConstant(poModule, "EFEKT_BOSSA",				CInstanceBase::EFEKT_BOSSA);
#endif