// Search:

void CInstanceBase::__EffectContainer_DetachEffect(DWORD dwEftKey)

// Add

#ifdef ENABLE_BOSS_EFFECT
void CInstanceBase::__AttachEfektBossa()
{
	if (!__IsExistMainInstance())
		return;	
	
	CInstanceBase* pkInstMain=__GetMainInstancePtr();

	if (IsWarp())
		return;
	if (IsObject())
		return;
	if (IsFlag())
		return;
	if (IsResource())
		return;

	__EffectContainer_AttachEffect(EFEKT_BOSSA);
}
#endif