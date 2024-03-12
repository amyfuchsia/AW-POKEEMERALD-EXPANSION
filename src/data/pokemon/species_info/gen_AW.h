#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenAW[] =
{
#endif

// AW POKEMON START HERE

    [SPECIES_ALPACOIL] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 57,
        .baseSpeed     = 62,
        .baseSpAttack  = 48,
        .baseSpDefense = 47,
        .types = { TYPE_STEEL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_FUR_COAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Alpacoil"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_ALPACOIL,
        .categoryName = _("Steel Wool"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "This little cria loves to cuddle!\n"
            "Though, its fur is very rough and it\n"
            "has a habit of rubbing itself against\n"
            "rocks and polishing them until shiny."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Alpacoil, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Alpacoil,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Alpacoil, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Alpacoil),
        ICON(Alpacoil, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(None),
        //.evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ALPACHROME}),
    },
    [SPECIES_ALPACHROME] =
    {
        .baseHP        = 72,
        .baseAttack    = 57,
        .baseDefense   = 73,
        .baseSpeed     = 78,
        .baseSpAttack  = 63,
        .baseSpDefense = 62,
        .types = { TYPE_STEEL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_FUR_COAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Alpachrome"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_ALPACOIL,
        .categoryName = _("Steel Wool"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "The scarf it wears is made out of\n"
            "metal fibres from its own fur. It is\n"
            "able to spit bits of metal to defend\n"
            "itself, and when that fails, it runs."
            ),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Alpachrome, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Alpachrome,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Alpachrome, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Alpachrome),
        ICON(Alpachrome, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(None),
        //.evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ALPACHROME}),
    },


#ifdef __INTELLISENSE__
};
#endif