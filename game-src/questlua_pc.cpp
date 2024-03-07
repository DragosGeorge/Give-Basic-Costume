Add:

	int pc_give_basic_costume(lua_State* L)
	{
		LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();
		if(ch)
			ch->SetBasicCostume(ch);
		return 0;
	}


	int pc_give_basic_hair(lua_State* L)
	{
		LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();
		if(ch)
			ch->SetBasicCostumeHair(ch);
		return 0;
	}
	
And:

			{ "give_basic_costume", pc_give_basic_costume },
			{ "give_basic_hair", pc_give_basic_hair },