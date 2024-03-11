#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenAW[] =
{
#endif

// AW POKEMON START HERE

#if P_FAMILY_ALPACOIL
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
            "This little cria loves to cuddle!\n",
            "Though, its fur is very rough and it\n",
            "has a habit of rubbing itself against\n",
            "rocks and polishing them until shiny."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CircledQuestionMark, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sprigatito,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CircledQuestionMark, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CircledQuestionMark),
        ICON(QuestionMark, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(None),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ALPACHROME}),
    }
#endif

#ifdef __INTELLISENSE__
};
#endif