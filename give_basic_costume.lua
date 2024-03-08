quest give_basic_costume begin
	state start begin
      when login or levelup with pc.get_level() > 9 begin
            if pc.get_level() >= 10 and pc.getqf("basic_costume") == 0 then
                say_title(string.format(locale_quest(14219), pc.level))
                say("")
                say(locale_quest(14220))
                say("")
                local item_vnum
                if pc.get_sex() == 0 then -- MALE
                    item_vnum = 41856
                else -- FEMALE
                    item_vnum = 41858
                end
                pc.give_basic_costume()
                say_item_vnum(item_vnum)
                pc.setqf("basic_costume", 1)
            end
			if pc.get_level() >= 13 and pc.getqf("basic_costume_hair") == 0 then
                say_title(string.format(locale_quest(14219), pc.level))
                say(locale_quest(14220))
                local item_vnum
                if pc.get_sex() == 0 then -- MALE
                    item_vnum = 45596
                else -- FEMALE
                    item_vnum = 45598
                end
                say_item_vnum(item_vnum)
                say_item_vnum(53001)
                pc.give_basic_hair()
                pc.give_item2(53001, 1) -- Fire Phoenix
                pc.setqf("basic_costume_hair", 1)
            end
			if pc.get_level() >= 15 and pc.getqf("basic_costume_weapon") == 0 then
                say_title(string.format(locale_quest(14219), pc.level))
                say(locale_quest(14220))
                say("")
                say("")
                local item_vnum
                if pc.get_job() == 0 then -- Warrior
                    local select = select(locale_quest(1121), locale_quest(1124))
                    if select == 1 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40101
                        say_item_vnum(item_vnum)
                    elseif select == 2 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40104
                        say_item_vnum(item_vnum)
                    end
                elseif pc.get_job() == 2 then -- Sura
                    say("")
                    item_vnum = 40101
                    say_item_vnum(item_vnum)
                    say("")
                    say("")
                elseif pc.get_job() == 3 then -- Shaman
                    local select = select(locale_quest(1127), locale_quest(1126))
                    if select == 1 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40106
                        say_item_vnum(item_vnum)
                    elseif select == 2 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40105
                        say_item_vnum(item_vnum)
                    end
                elseif pc.get_job() == 1 then -- Assassin
                    local select = select(locale_quest(1122), locale_quest(1121), locale_quest(1125))
                    if select == 1 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40102
                        say_item_vnum(item_vnum)
                    elseif select == 2 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40101
                        say_item_vnum(item_vnum)
                    elseif select == 3 then
                        say_title(string.format(locale_quest(14219), pc.level))
                        say(locale_quest(14221))
                        say_reward(locale_quest(14222))
                        say("")
                        item_vnum = 40103
                        say_item_vnum(item_vnum)
                    end
                elseif pc.get_job() == 4 then -- Wolfman
                    say("")
                    item_vnum = 40107
                    say_item_vnum(item_vnum)
                    say("")
                    say("")
                end
                pc.give_item2(item_vnum, 1) -- Riptooth Weapon Skin (F)
                pc.setqf("basic_costume_weapon", 1)
            end
            if pc.get_level() >= 20 and pc.getqf("basic_costume_mount") == 0 then
                say_title(string.format(locale_quest(14219), pc.level))
                say(locale_quest(14220))
                say("")
                say_item_vnum(71233) -- Bernie
                say("")
                say("")
                pc.give_item2(71233, 1) -- Bernie
                pc.setqf("basic_costume_mount", 1)
            end
        end
    end
end
