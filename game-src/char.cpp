Add:

void CHARACTER::SetBasicCostume(LPCHARACTER ch)
{
	int race = GetRaceNum();
	BYTE job = ch->GetJob();
	LPITEM item;
	item = ch->GetWear(WEAR_COSTUME_BODY);
	if (item != NULL)
		ch->UnequipItem(item);
	switch (race)
	{
	case MAIN_RACE_WARRIOR_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(41856);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_WARRIOR_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(41858);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_ASSASSIN_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(41856);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_ASSASSIN_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(41858);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SURA_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(41856);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SURA_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(41858);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SHAMAN_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(41856);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SHAMAN_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(41858);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_WOLFMAN_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(41856);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	}	
}

void CHARACTER::SetBasicCostumeHair(LPCHARACTER ch)
{
	int race = GetRaceNum();
	BYTE job = ch->GetJob();
	LPITEM item;
	item = ch->GetWear(WEAR_COSTUME_HAIR);
	if (item != NULL)
		ch->UnequipItem(item);
	switch (race)
	{
	case MAIN_RACE_WARRIOR_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(45596);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_WARRIOR_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(45598);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_ASSASSIN_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(45596);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_ASSASSIN_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(45598);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SURA_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(45596);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SURA_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(45598);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SHAMAN_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(45596);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_SHAMAN_W:
	{
		item = ITEM_MANAGER::instance().CreateItem(45598);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	case MAIN_RACE_WOLFMAN_M:
	{
		item = ITEM_MANAGER::instance().CreateItem(45596);
		if (!item || !item->EquipTo(ch, item->FindEquipCell(ch)))
			M2_DESTROY_ITEM(item);
	}
	break;
	}	
}