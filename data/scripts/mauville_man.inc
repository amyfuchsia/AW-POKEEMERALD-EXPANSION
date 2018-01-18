MauvilleCity_PokemonCenter_1F_EventScript_28E066:: @ 828E066
	special sub_81201DC
	switch VAR_RESULT
	case 0, MauvilleCity_PokemonCenter_1F_EventScript_28E0A6
	case 1, MauvilleCity_PokemonCenter_1F_EventScript_28E167
	case 2, MauvilleCity_PokemonCenter_1F_EventScript_28E4D4
	case 3, MauvilleCity_PokemonCenter_1F_EventScript_29014A
	case 4, MauvilleCity_PokemonCenter_1F_EventScript_2902F6
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0A6:: @ 828E0A6
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_29038E, 5
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E0C7
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E0EA
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0C7:: @ 828E0C7
	setvar VAR_0x8004, 0
	special sub_8120340
	delay 60
	special sub_81201F4
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E0F4
	msgbox MauvilleCity_PokemonCenter_1F_Text_2903E6, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0EA:: @ 828E0EA
	msgbox MauvilleCity_PokemonCenter_1F_Text_2903C0, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0F4:: @ 828E0F4
	msgbox MauvilleCity_PokemonCenter_1F_Text_290421, 5
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E113
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E15D
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E113:: @ 828E113
	setvar VAR_0x8004, 6
	call MauvilleCity_PokemonCenter_1F_EventScript_271E7C
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E15D
	msgbox MauvilleCity_PokemonCenter_1F_Text_2904C1, 4
	setvar VAR_0x8004, 1
	special sub_8120340
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_2904EB, 5
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E113
	special sub_8120210
	msgbox MauvilleCity_PokemonCenter_1F_Text_290514, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E15D:: @ 828E15D
	msgbox MauvilleCity_PokemonCenter_1F_Text_29049B, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E167:: @ 828E167
	lock
	faceplayer
	setflag FLAG_SYS_HIPSTER_MEET
	msgbox MauvilleCity_PokemonCenter_1F_Text_29054C, 4
	special sub_8120358
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E18C
	msgbox MauvilleCity_PokemonCenter_1F_Text_290598, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E18C:: @ 828E18C
	special sub_812038C
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E1A4
	msgbox MauvilleCity_PokemonCenter_1F_Text_290602, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E1A4:: @ 828E1A4
	msgbox MauvilleCity_PokemonCenter_1F_Text_290666, 4
	special sub_8120374
	release
	end

MauvilleCity_PokemonCenter_1F_Text_28E1B1: @ 828E1B1
	.string "Hi, I’m the TRADER.\n"
	.string "Want to trade decorations with me?$"

MauvilleCity_PokemonCenter_1F_Text_28E1E8: @ 828E1E8
	.string "Oh…\n"
	.string "You’ve left me feeling the blues…$"

MauvilleCity_PokemonCenter_1F_Text_28E20E: @ 828E20E
	.string "But we’ve traded decorations already,\n"
	.string "you and I.$"

MauvilleCity_PokemonCenter_1F_Text_28E23F: @ 828E23F
	.string "If you see any decorative item that\n"
	.string "you want of mine, speak up.$"

MauvilleCity_PokemonCenter_1F_Text_28E27F: @ 828E27F
	.string "You don’t want anything?\n"
	.string "I feel unwanted…$"

MauvilleCity_PokemonCenter_1F_Text_28E2A9: @ 828E2A9
	.string "That decorative item once belonged\n"
	.string "to {STR_VAR_1}.\p"
	.string "Do you want it?$"

MauvilleCity_PokemonCenter_1F_Text_28E2E3: @ 828E2E3
	.string "Uh… Wait a second. You don’t have a\n"
	.string "single piece of decoration!$"

MauvilleCity_PokemonCenter_1F_Text_28E323: @ 828E323
	.string "Okay, pick the decoration that you’ll\n"
	.string "trade to me.$"

MauvilleCity_PokemonCenter_1F_Text_28E356: @ 828E356
	.string "You won’t trade with me?\n"
	.string "I feel unwanted…$"

MauvilleCity_PokemonCenter_1F_Text_28E380: @ 828E380
	.string "You’ve got all the {STR_VAR_2}S that can\n"
	.string "be stored. You’ve no room for this.$"

MauvilleCity_PokemonCenter_1F_Text_28E3C4: @ 828E3C4
	.string "Okay, so we’ll trade my {STR_VAR_3}\n"
	.string "for your {STR_VAR_2}?$"

MauvilleCity_PokemonCenter_1F_Text_28E3EC: @ 828E3EC
	.string "That piece of decoration is in use.\n"
	.string "You can’t trade it.$"

MauvilleCity_PokemonCenter_1F_Text_28E424: @ 828E424
	.string "Then we’ll trade!\n"
	.string "I’ll send my decoration to your PC.$"

MauvilleCity_PokemonCenter_1F_Text_28E45A: @ 828E45A
	.string "Oops! Sorry! That’s a really rare\n"
	.string "piece of decoration.\l"
	.string "I can’t trade that one away!\p"
	.string "Can I interest you in something else?$"

MauvilleCity_PokemonCenter_1F_EventScript_28E4D4:: @ 828E4D4
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E1B1, 5
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E503
	special sub_8133CD8
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E50D
	message MauvilleCity_PokemonCenter_1F_Text_28E23F
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E517
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E503:: @ 828E503
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E1E8, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E50D:: @ 828E50D
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E20E, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E517:: @ 828E517
	special sub_8133EC0
	waitstate
	compare VAR_0x8004, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E558
	compare VAR_0x8004, 65535
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E562
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E2A9, 5
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E56E
	special sub_8133CF4
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E57A
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E584
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E558:: @ 828E558
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E27F, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E562:: @ 828E562
	message MauvilleCity_PokemonCenter_1F_Text_28E45A
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E517
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E56E:: @ 828E56E
	message MauvilleCity_PokemonCenter_1F_Text_28E23F
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E517
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E57A:: @ 828E57A
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E2E3, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E584:: @ 828E584
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E323, 4
	special sub_8133D8C
	waitstate
	compare VAR_0x8006, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E5D4
	compare VAR_0x8006, 65535
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E5DE
	special sub_8133D2C
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E5EC
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E3C4, 5
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_28E584
	special sub_8133E38
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E424, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E5D4:: @ 828E5D4
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E356, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E5DE:: @ 828E5DE
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E3EC, 4
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E584
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E5EC:: @ 828E5EC
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E380, 4
	release
	end

MauvilleCity_PokemonCenter_1F_Text_28E5F6: @ 828E5F6
	.string "I’m the STORYTELLER.\n"
	.string "I’ll tell you tales of legendary\l"
	.string "TRAINERS.\p"
	.string "Will you hear my tale?$"

MauvilleCity_PokemonCenter_1F_Text_28E64D: @ 828E64D
	.string "Oh…\n"
	.string "You’ve left me feeling the blues…$"

MauvilleCity_PokemonCenter_1F_Text_28E673: @ 828E673
	.string "I know of these legends.\n"
	.string "Which tale will you have me tell?$"

MauvilleCity_PokemonCenter_1F_Text_28E6AE: @ 828E6AE
	.string "But, I know of no legendary TRAINERS.\n"
	.string "Hence, I know no tales.\p"
	.string "Where does one find a TRAINER worthy\n"
	.string "of a legendary tale?$"

MauvilleCity_PokemonCenter_1F_Text_28E726: @ 828E726
	.string "What’s that?!\n"
	.string "You… You…\p"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1} time(s)?!\p"
	.string "That is indeed magnificent!\n"
	.string "It’s the birth of a new legend!$"

MauvilleCity_PokemonCenter_1F_Text_28E78A: @ 828E78A
	.string "It gets me thinking, could there be\n"
	.string "other TRAINERS with more impressive\l"
	.string "legends awaiting discovery?$"

MauvilleCity_PokemonCenter_1F_Text_28E7EE: @ 828E7EE
	.string "Are you a TRAINER?\p"
	.string "Then tell me, have you any tales that\n"
	.string "are even remotely legendary?$"

MauvilleCity_PokemonCenter_1F_Text_28E844: @ 828E844
	.string "Incidentally… Would you care to hear\n"
	.string "another legendary tale?$"

MauvilleCity_PokemonCenter_1F_Text_28E881: @ 828E881
	.string "Hmm…\n"
	.string "I’m not satisfied…\p"
	.string "I wish you would bring me news worthy\n"
	.string "of being called a legend.$"

MauvilleCity_PokemonCenter_1F_Text_28E8D9: @ 828E8D9
	.string "I wish more people would be interested\n"
	.string "in hearing my epic tales of legendary\l"
	.string "TRAINERS.$"

	.string "The Save-Happy TRAINER$"

	.string "Saved the game$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER saved the game\n"
	.string "{STR_VAR_1} times!\p"
	.string "A more cautious TRAINER than\n"
	.string "{STR_VAR_3} one will never find!$"

	.string "The Trendsetter TRAINER$"

	.string "Started trends$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER started new trends\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is setting trends for all\n"
	.string "the HOENN region!$"

	.string "The BERRY-Planting TRAINER$"

	.string "Planted BERRIES$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER planted BERRIES\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a legendary lover of\n"
	.string "BERRIES!$"

	.string "The BIKE-Loving TRAINER$"

	.string "Traded BIKES$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER swapped BIKES\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love BIKES deeply\n"
	.string "and passionately!$"

	.string "The Interviewed TRAINER$"

	.string "Got interviewed$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER got interviewed\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who’s\n"
	.string "attracting much attention!$"

	.string "The Battle-Happy TRAINER$"

	.string "Battled$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER battled {STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who can\n"
	.string "never refuse a chance to battle!$"

	.string "The POKéMON-Catching TRAINER$"

	.string "Caught POKéMON$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER caught\n"
	.string "{STR_VAR_1} POKéMON!\p"
	.string "{STR_VAR_3} is a legendary catcher of\n"
	.string "wild POKéMON!$"

	.string "The Fishing TRAINER$"

	.string "Caught POKéMON with a ROD$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER caught\n"
	.string "{STR_VAR_1} POKéMON while fishing!\p"
	.string "{STR_VAR_3} is a legendary fishing\n"
	.string "expert!$"

	.string "The EGG-Warming TRAINER$"

	.string "Hatched EGGS$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER hatched {STR_VAR_1} POKéMON\n"
	.string "from EGGS!\p"
	.string "{STR_VAR_3} is a legendary warmer\n"
	.string "of EGGS!$"

	.string "The Evolver TRAINER$"

	.string "Evolved POKéMON$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER made {STR_VAR_1} POKéMON\n"
	.string "evolve!\p"
	.string "{STR_VAR_3} is the ultimate evolver\n"
	.string "of POKéMON!$"

	.string "The POKéMON CENTER-Loving TRAINER$"

	.string "Used POKéMON CENTERS$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER healed POKéMON\n"
	.string "{STR_VAR_1} times at POKéMON CENTERS!\p"
	.string "There could be no greater lover of\n"
	.string "POKéMON CENTERS than {STR_VAR_3}!$"

	.string "The Homebody TRAINER$"

	.string "Rested POKéMON at home$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER healed POKéMON\n"
	.string "{STR_VAR_1} times at home!\p"
	.string "There could be no more of a homebody\n"
	.string "than {STR_VAR_3}!$"

	.string "The SAFARI-Loving TRAINER$"

	.string "Entered the SAFARI ZONE$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER went into the SAFARI ZONE\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER whose wild side\n"
	.string "must come out in the SAFARI ZONE!$"

	.string "The CUT-Frenzy TRAINER$"

	.string "Used CUT$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used CUT\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who just must\n"
	.string "love to CUT!$"

	.string "The ROCK-SMASHING TRAINER$"

	.string "Smashed rocks$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used ROCK SMASH\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who\n"
	.string "can’t leave a stone unsmashed!$"

	.string "The Move-Loving TRAINER$"

	.string "Moved the SECRET BASE$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER moved the SECRET BASE\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who loves\n"
	.string "to move houses often!$"

	.string "The SPLASH-Happy TRAINER$"

	.string "Used SPLASH$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used SPLASH\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who must love\n"
	.string "SPLASHING around!$"

	.string "The Tenacious TRAINER$"

	.string "Resorted to using STRUGGLE$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER had to rely on STRUGGLE\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a tenacious TRAINER\n"
	.string "who never gives in to adversity!$"

	.string "The SLOT Champ$"

	.string "Won the jackpot on the SLOTS$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won the jackpot on\n"
	.string "the SLOTS {STR_VAR_1} times.\p"
	.string "{STR_VAR_3} is a TRAINER who was lucky\n"
	.string "on the SLOTS!$"

	.string "The ROULETTE Champ$"

	.string "Had consecutive ROULETTE wins of$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won in ROULETTE\n"
	.string "{STR_VAR_1} times in a row.\p"
	.string "{STR_VAR_3} was lucky when the ball\n"
	.string "bounced in ROULETTE!$"

	.string "The BATTLE TOWER Challenger$"

	.string "Took the BATTLE TOWER challenge$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER took the BATTLE TOWER\n"
	.string "challenge {STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who aspires\n"
	.string "for excellence in the BATTLE TOWER!$"

	.string "The Blend-Loving TRAINER$"

	.string "Made {POKEBLOCK}S$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER made {POKEBLOCK}S\n"
	.string "{STR_VAR_1} times!\p"
	.string "There is none better at using a BERRY\n"
	.string "BLENDER than {STR_VAR_3}!$"

	.string "The CONTEST-Loving TRAINER$"

	.string "Entered CONTESTS$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER entered CONTESTS\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love showing off\n"
	.string "POKéMON to others!$"

	.string "The CONTEST Master$"

	.string "Won CONTESTS$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won CONTESTS\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be an incredible\n"
	.string "CONTEST master!$"

	.string "The Happy Shopper$"

	.string "Shopped$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER bought items in shops\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be one of those\n"
	.string "people who are born to shop.$"

	.string "The Item-Finding TRAINER$"

	.string "Used an ITEMFINDER$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used an ITEMFINDER\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must enjoy scouring the\n"
	.string "ground for hidden items!$"

	.string "The Rain-Soaked TRAINER$"

	.string "Got rained on$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER got soaked by rain\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3}’s charisma must even\n"
	.string "attract rain!$"

	.string "The Avid POKéDEX Reader$"

	.string "Checked a POKéDEX$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER checked a POKéDEX\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love inspecting\n"
	.string "POKéMON in a POKéDEX!$"

	.string "The RIBBON Collector$"

	.string "Received RIBBONS$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER received RIBBONS\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who\n"
	.string "loves to collect RIBBONS!$"

	.string "The Ledge-Jumping TRAINER$"

	.string "Jumped down ledges$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER jumped down ledges\n"
	.string "{STR_VAR_1} times!\p"
	.string "If there’s a ledge to be jumped,\n"
	.string "{STR_VAR_3} can’t ignore it!$"

	.string "The Legendary TV Viewer$"

	.string "Watched TV$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER watched TV\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love watching TV!$"

	.string "The Time-Conscious TRAINER$"

	.string "Checked the time$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER checked the time\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a punctual TRAINER\n"
	.string "who’s conscious of the time.$"

	.string "The POKéMON LOTTERY Wizard$"

	.string "Won POKéMON LOTTERIES$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won POKéMON LOTTERIES\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must have many friends\n"
	.string "to trade POKéMON with!$"

	.string "The DAY CARE-Using Trainer$"

	.string "Left POKéMON at the DAY CARE$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER left POKéMON with the\n"
	.string "DAY CARE {STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a real go-getter\n"
	.string "who raises POKéMON aggressively!$"

	.string "The CABLE CAR-Loving TRAINER$"

	.string "Rode the CABLE CAR$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER rode the CABLE CAR\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a busy TRAINER\n"
	.string "who’s up and down all the time!$"

	.string "The Hot Spring-Loving TRAINER$"

	.string "Bathed in hot springs$"

	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER bathed in hot springs\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER with\n"
	.string "baby-smooth skin!$"

MauvilleCity_PokemonCenter_1F_EventScript_29014A:: @ 829014A
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E5F6, 5
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290219
	specialvar VAR_RESULT, sub_81213B0
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_2901DA
	message MauvilleCity_PokemonCenter_1F_Text_28E673
	waitmessage
	special sub_8121388
	waitstate
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_2901B7
	setvar VAR_0x8008, 1
	special sub_812139C
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, sub_81213D8
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_2901BD
	goto MauvilleCity_PokemonCenter_1F_EventScript_29020F

MauvilleCity_PokemonCenter_1F_EventScript_2901B7:: @ 82901B7
	goto MauvilleCity_PokemonCenter_1F_EventScript_290219
	end

MauvilleCity_PokemonCenter_1F_EventScript_2901BD:: @ 82901BD
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E78A, 4
	specialvar VAR_RESULT, sub_8121424
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_29022D
	goto MauvilleCity_PokemonCenter_1F_EventScript_2901E2

MauvilleCity_PokemonCenter_1F_EventScript_2901DA:: @ 82901DA
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E6AE, 4

MauvilleCity_PokemonCenter_1F_EventScript_2901E2:: @ 82901E2
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E7EE, 5
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290219
	specialvar VAR_RESULT, sub_8121450
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_29020F
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E881, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_29020F:: @ 829020F
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E726, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_290219:: @ 8290219
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E64D, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_290223:: @ 8290223
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E8D9, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_29022D:: @ 829022D
	release
	end

MauvilleCity_PokemonCenter_1F_Text_29022F: @ 829022F
	.string "I’m GIDDY!\n"
	.string "I have a scintillating story for you!\p"
	.string "Would you like to hear my story?$"

MauvilleCity_PokemonCenter_1F_Text_290281: @ 8290281
	.string "Oh…\n"
	.string "You’ve left me feeling the blues…$"

MauvilleCity_PokemonCenter_1F_Text_2902A7: @ 82902A7
	.string "Also, I was thinking…$"

MauvilleCity_PokemonCenter_1F_Text_2902BD: @ 82902BD
	.string "That’s about it, I think…\p"
	.string "We should chat again!\n"
	.string "Bye-bye!$"

MauvilleCity_PokemonCenter_1F_EventScript_2902F6:: @ 82902F6
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_29022F, 5
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290317
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_29037A
	end

MauvilleCity_PokemonCenter_1F_EventScript_290317:: @ 8290317
	special sub_81203C4
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290359
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290384
	end

MauvilleCity_PokemonCenter_1F_EventScript_290331:: @ 8290331
	special sub_81203C4
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_29034B
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290384
	end

MauvilleCity_PokemonCenter_1F_EventScript_29034B:: @ 829034B
	msgbox MauvilleCity_PokemonCenter_1F_Text_2902A7, 4
	goto MauvilleCity_PokemonCenter_1F_EventScript_290359
	end

MauvilleCity_PokemonCenter_1F_EventScript_290359:: @ 8290359
	special sub_81203FC
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	compare VAR_RESULT, 1
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290331
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_PokemonCenter_1F_EventScript_290331
	end

MauvilleCity_PokemonCenter_1F_EventScript_29037A:: @ 829037A
	msgbox MauvilleCity_PokemonCenter_1F_Text_290281, 4
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_290384:: @ 8290384
	msgbox MauvilleCity_PokemonCenter_1F_Text_2902BD, 4
	release
	end

MauvilleCity_PokemonCenter_1F_Text_29038E: @ 829038E
	.string "Hi, I’m the BARD.\n"
	.string "Would you like to hear my song?$"

MauvilleCity_PokemonCenter_1F_Text_2903C0: @ 82903C0
	.string "Oh…\n"
	.string "You’ve left me feeling the blues…$"

MauvilleCity_PokemonCenter_1F_Text_2903E6: @ 82903E6
	.string "Oh, what a moving song…\n"
	.string "I wish I could play it for others…$"

MauvilleCity_PokemonCenter_1F_Text_290421: @ 8290421
	.string "So?\n"
	.string "How do you like my song?\p"
	.string "But I’m none too happy about\n"
	.string "the lyrics.\p"
	.string "How would you like to write some\n"
	.string "new lyrics for me?$"

MauvilleCity_PokemonCenter_1F_Text_29049B: @ 829049B
	.string "Oh…\n"
	.string "You’ve left me feeling the blues…$"

MauvilleCity_PokemonCenter_1F_Text_2904C1: @ 82904C1
	.string "Thank you kindly!\n"
	.string "Let me sing it for you.$"

MauvilleCity_PokemonCenter_1F_Text_2904EB: @ 82904EB
	.string "Was that how you wanted your song\n"
	.string "to go?$"

MauvilleCity_PokemonCenter_1F_Text_290514: @ 8290514
	.string "Okay! That’s it, then.\n"
	.string "I’ll sing this song for a while.$"

MauvilleCity_PokemonCenter_1F_Text_29054C: @ 829054C
	.string "Hey, yo! They call me the HIPSTER.\n"
	.string "I’ll teach you what’s hip and happening.$"

MauvilleCity_PokemonCenter_1F_Text_290598: @ 8290598
	.string "But, hey, I taught you what’s hip and\n"
	.string "happening already.\p"
	.string "I’d like to spread the good word to\n"
	.string "other folks.$"

MauvilleCity_PokemonCenter_1F_Text_290602: @ 8290602
	.string "But, hey, you already know a lot about\n"
	.string "what’s hip and happening.\p"
	.string "I’ve got nothing new to teach you!$"

MauvilleCity_PokemonCenter_1F_Text_290666: @ 8290666
	.string "Hey, have you heard about\n"
	.string "“{STR_VAR_1}”?\p"
	.string "What’s it mean? Well…\n"
	.string "Ask your daddy or mommy, okay?$"