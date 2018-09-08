//Rhye
#ifndef CVRHYES_H
#define CVRHYES_H

using namespace std;
typedef list<char*> LISTCHAR;

// rhyes.h
#define EARTH_X					(124)
#define EARTH_Y					(68)

#define MAX_COM_SHRINE			(20)

#define BEGIN_WONDERS				(166) // increment if normal building (not for wonders) is added
#define BEGIN_GREAT_WONDERS			(BEGIN_WONDERS+11)

#define NUM_MAJOR_PLAYERS		(45)
#define NUM_MINORS				(5)	 // Independent, Independent2, Natives, Celtia, Barbarians
#define NUM_CIVS				(52)

#define NUM_ERAS				(ERA_DIGITAL+1)

#define PAGAN_TEMPLE			((BuildingTypes)GC.getInfoTypeForString("BUILDING_PAGAN_TEMPLE"))
#define BUILDING_PALACE			((BuildingClassTypes)0)
#define BUILDING_PLAGUE			((BuildingTypes)GC.getInfoTypeForString("BUILDING_PLAGUE"))

#define UNITCLASS_SLAVE			((UnitClassTypes)GC.getInfoTypeForString("UNITCLASS_SLAVE"))

enum DoCTechs
{
	TANNING,
	MINING,
	POTTERY,
	PASTORALISM,
	AGRICULTURE,
	MYTHOLOGY,
	SAILING,

	SMELTING,
	MASONRY,
	LEVERAGE,
	PROPERTY,
	CEREMONY,
	DIVINATION,
	SEAFARING,

	ALLOYS,
	CONSTRUCTION,
	RIDING,
	ARITHMETICS,
	WRITING,
	CALENDAR,
	SHIPBUILDING,

	BLOOMERY,
	CEMENT,
	MATHEMATICS,
	CONTRACT,
	LITERATURE,
	PRIESTHOOD,
	NAVIGATION,

	GENERALSHIP,
	ENGINEERING,
	AESTHETICS,
	CURRENCY,
	LAW,
	PHILOSOPHY,
	MEDICINE,

	NOBILITY,
	STEEL,
	ARCHITECTURE,
	ARTISANRY,
	POLITICS,
	SCHOLARSHIP,
	ETHICS,

	FEUDALISM,
	FORTIFICATION,
	MACHINERY,
	ALCHEMY,
	GUILDS,
	CIVIL_SERVICE,
	THEOLOGY,

	COMMUNE,
	CROP_ROTATION,
	PAPER,
	COMPASS,
	PATRONAGE,
	EDUCATION,
	DOCTRINE,

	GUNPOWDER,
	COMPANIES,
	FINANCE,
	CARTOGRAPHY,
	HUMANITIES,
	PRINTING,
	JUDICIARY,

	FIREARMS,
	LOGISTICS,
	EXPLORATION,
	OPTICS,
	ACADEMIA,
	STATECRAFT,
	HERITAGE,

	COMBINED_ARMS,
	ECONOMICS,
	GEOGRAPHY,
	SCIENTIFIC_METHOD,
	URBAN_PLANNING,
	CIVIL_LIBERTIES,
	HORTICULTURE,

	REPLACEABLE_PARTS,
	HYDRAULICS,
	PHYSICS,
	GEOLOGY,
	MEASUREMENT,
	SOCIOLOGY,
	SOCIAL_CONTRACT,

	MACHINE_TOOLS,
	THERMODYNAMICS,
	METALLURGY,
	CHEMISTRY,
	BIOLOGY,
	REPRESENTATION,
	NATIONALISM,

	BALLISTICS,
	ENGINE,
	RAILROAD,
	ELECTRICITY,
	REFRIGERATION,
	LABOUR_UNIONS,
	JOURNALISM,

	PNEUMATICS,
	ASSEMBLY_LINE,
	REFINING,
	FILM,
	MICROBIOLOGY,
	CONSUMERISM,
	CIVIL_RIGHTS,

	INFRASTRUCTURE,
	FLIGHT,
	SYNTHETICS,
	RADIO,
	PSYCHOLOGY,
	MACROECONOMICS,
	SOCIAL_SERVICES,

	AVIATION,
	ROCKETRY,
	FISSION,
	ELECTRONICS,
	TELEVISION,
	POWER_PROJECTION,
	GLOBALISM,

	RADAR,
	SPACEFLIGHT,
	NUCLEAR_POWER,
	LASER,
	COMPUTERS,
	TOURISM,
	ECOLOGY,

	AERODYNAMICS,
	SATELLITES,
	SUPERCONDUCTORS,
	ROBOTICS,
	TELECOMMUNICATIONS,
	RENEWABLE_ENERGY,
	GENETICS,

	SUPERMATERIALS,
	FUSION,
	NANTECHNOLOGY,
	AUTOMATION,
	BIOTECHNOLOGY,

	UNIFIED_THEORY,
	ARTIFICIAL_INTELLIGENCE,

	TRANSHUMANISM,
};

enum DoCBuildings
{
	TRADING_COMPANY = BEGIN_WONDERS,
	IBERIAN_TRADING_COMPANY, 
	NATIONAL_MONUMENT, 
	NATIONAL_THEATRE, 
	NATIONAL_GALLERY, 
	NATIONAL_COLLEGE, 
	MILITARY_ACADEMY,
	SECRET_SERVICE, 

	IRONWORKS, 
	RED_CROSS, 
	NATIONAL_PARK, 
	CENTRAL_BANK, 
	GREAT_SPHINX, 
	PYRAMIDS, 
	ORACLE, 
	GREAT_WALL, 
	ISHTAR_GATE, 
	TERRACOTTA_ARMY, 

	HANGING_GARDENS, 
	GREAT_COTHON, 
	DUJIANGYAN, 
	APADANA_PALACE, 
	COLOSSUS, 
	STATUE_OF_ZEUS, 
	GREAT_MAUSOLEUM, 
	PARTHENON, 
	TEMPLE_OF_ARTEMIS, 
	GREAT_LIGHTHOUSE, 

	MOAI_STATUES, 
	COLOSSEUM, 
	AQUA_APPIA, 
	AL_KHAZNEH, 
	TEMPLE_OF_KUKULKAN, 
	MACHU_PICCHU, 
	GREAT_LIBRARY, 
	FLOATING_GARDENS, 
	GONDESHAPUR, 
	JETAVANAMARAYA,

	NALANDA, 
	THEODOSIAN_WALLS, 
	HAGIA_SOPHIA, 
	BOROBUDUR, 
	MEZQUITA, 
	SHWEDAGON_PAYA, 
	MOUNT_ATHOS, 
	IRON_PILLAR, 
	PRAMBANAN, 
	SALSAL_BUDDHA, 

	CHEOMSEONGDAE, 
	HIMEJI_CASTLE, 
	GRAND_CANAL, 
	WAT_PREAH_PISNULOK, 
	KHAJURAHO, 
	SPIRAL_MINARET, 
	DOME_OF_THE_ROCK, 
	HOUSE_OF_WISDOM, 
	KRAK_DES_CHEVALIERS,
	MONOLITHIC_CHURCH, 

	UNIVERSITY_OF_SANKORE, 
	NOTRE_DAME, 
	OLD_SYNAGOGUE, 
	SAINT_SOPHIA, 
	SILVER_TREE_FOUNTAIN, 
	SANTA_MARIA_DEL_FIORE, 
	ALAMUT, 
	SAN_MARCO_BASILICA, 
	SISTINE_CHAPEL, 
	PORCELAIN_TOWER,

	TOPKAPI_PALACE, 
	KREMLIN, 
	SAINT_THOMAS_CHURCH, 
	VIJAYA_STAMBHA, 
	GUR_E_AMIR, 
	RED_FORT, 
	TAJ_MAHAL, 
	FORBIDDEN_PALACE, 
	VERSAILLES, 
	BLUE_MOSQUE,

	ESCORIAL, 
	TORRE_DE_BELEM, 
	POTALA_PALACE, 
	OXFORD_UNIVERSITY, 
	HARMANDIR_SAHIB, 
	SAINT_BASILS_CATHEDRAL, 
	BOURSE, 
	ITSUKUSHIMA_SHRINE, 
	IMAGE_OF_THE_WORLD_SQUARE, 
	LOUVRE,

	EMERALD_BUDDHA, 
	SHALIMAR_GARDENS, 
	TRAFALGAR_SQUARE, 
	HERMITAGE, 
	GUADALUPE_BASILICA, 
	SALT_CATHEDRAL, 
	AMBER_ROOM, 
	STATUE_OF_LIBERTY, 
	BRANDENBURG_GATE, 
	ABBEY_MILLS,

	CHAPULTEPEC_CASTLE,
	BELL_ROCK_LIGHTHOUSE, 
	EIFFEL_TOWER, 
	WESTMINSTER_PALACE, 
	TRIUMPHAL_ARCH, 
	MENLO_PARK, 
	CRYSTAL_PALACE, 
	TSUKIJI_FISH_MARKET, 
	BROOKLYN_BRIDGE, 
	HOLLYWOOD, 

	EMPIRE_STATE_BUILDING,
	LAS_LAJAS_SANCTUARY, 
	PALACE_OF_NATIONS, 
	MOLE_ANTONELLIANA, 
	NEUSCHWANSTEIN, 
	FRONTENAC,
	WEMBLEY, 
	LUBYANKA, 
	CRISTO_REDENTOR, 
	METROPOLITAIN, 

	NOBEL_PRIZE, 
	GOLDEN_GATE_BRIDGE, 
	BLETCHLEY_PARK, 
	SAGRADA_FAMILIA, 
	CERN, 
	ITAIPU_DAM, 
	GRACELAND, 
	CN_TOWER, 
	PENTAGON, 
	UNITED_NATIONS, 

	CRYSTAL_CATHEDRAL, 
	MOTHERLAND_CALLS,
	BERLAYMONT, 
	WORLD_TRADE_CENTER, 
	ATOMIUM, 
	IRON_DOME, 
	HARBOUR_OPERA, 
	LOTUS_TEMPLE, 
	GLOBAL_SEED_VAULT, 
	GARDENS_BY_THE_BAY, 

	BURJ_KHALIFA, 
	HUBBLE_SPACE_TELESCOPE,
	CHANNEL_TUNNEL, 
	SKYTREE, 
	ORIENTAL_PEARL_TOWER, 
	DELTA_WORKS, 
	SPACE_ELEVATOR, 
	LARGE_HADRON_COLLIDER, 
	ITER
};

enum DoCEras
{
	ERA_ANCIENT,
	ERA_CLASSICAL,
	ERA_MEDIEVAL,
	ERA_RENAISSANCE,
	ERA_INDUSTRIAL,
	ERA_GLOBAL,
	ERA_DIGITAL,
	ERA_MIDDLE_EAST,
	ERA_EAST_ASIA,
	ERA_SOUTH_ASIA,
};

enum Regions
{
	REGION_BRITAIN,
	REGION_IBERIA,
	REGION_ITALY,
	REGION_BALKANS,
	REGION_EUROPE,
	REGION_SCANDINAVIA,
	REGION_RUSSIA,
	REGION_ANATOLIA,
	REGION_MESOPOTAMIA,
	REGION_ARABIA,
	REGION_EGYPT,
	REGION_MAGHREB,
	REGION_PERSIA,
	REGION_INDIA,
	REGION_DECCAN,
	REGION_INDOCHINA,
	REGION_INDONESIA,
	REGION_CHINA,
	REGION_KOREA,
	REGION_JAPAN,
	REGION_MANCHURIA,
	REGION_TIBET,
	REGION_CENTRAL_ASIA,
	REGION_SIBERIA,
	REGION_AUSTRALIA,
	REGION_OCEANIA,
	REGION_ETHIOPIA,
	REGION_WEST_AFRICA,
	REGION_SOUTH_AFRICA,
	REGION_CANADA,
	REGION_ALASKA,
	REGION_UNITED_STATES,
	REGION_CARIBBEAN,
	REGION_MESOAMERICA,
	REGION_BRAZIL,
	REGION_ARGENTINA,
	REGION_PERU,
	REGION_COLOMBIA,
	NUM_REGIONS
};

enum ECSArtStyles
{
	ARTSTYLE_AFRICA,
	ARTSTYLE_ANGLO_AMERICA,
	ARTSTYLE_ARABIA,
	ARTSTYLE_ASIA,
	ARTSTYLE_BARBARIAN,
	ARTSTYLE_CRESCENT,
	ARTSTYLE_EGYPT,
	ARTSTYLE_EUROPE,
	ARTSTYLE_GRECO_ROMAN,
	ARTSTYLE_INDIA,
	ARTSTYLE_IBERIA,
	ARTSTYLE_JAPAN,
	ARTSTYLE_MESO_AMERICA,
	ARTSTYLE_MONGOLIA,
	ARTSTYLE_NATIVE_AMERICA,
	ARTSTYLE_NORSE,
	ARTSTYLE_RUSSIA,
	ARTSTYLE_SOUTH_AMERICA,
	ARTSTYLE_SOUTH_EAST_ASIA,
	ARTSTYLE_SOUTH_PACIFIC,
};

#endif	// CVRHYES_H

static const int lTechLeaderPenalty[NUM_ERAS] = {0, 0, 20, 25, 30, 40, 50};
static const int lTechBackwardsBonus[NUM_ERAS] = {0, 20, 30, 40, 50, 60, 75};

// Leoreth: order of persecution
static const int persecutionOrder[NUM_RELIGIONS][NUM_RELIGIONS-1] = 
{
	// Judaism
	{HINDUISM, BUDDHISM, TAOISM, CONFUCIANISM, ZOROASTRIANISM, ISLAM, PROTESTANTISM, CATHOLICISM, ORTHODOXY},
	// Orthodoxy
	{ISLAM, PROTESTANTISM, CATHOLICISM, JUDAISM, ZOROASTRIANISM, HINDUISM, BUDDHISM, CONFUCIANISM, TAOISM},
	// Catholicism
	{ISLAM, PROTESTANTISM, ORTHODOXY, JUDAISM, ZOROASTRIANISM, HINDUISM, BUDDHISM, CONFUCIANISM, TAOISM},
	// Protestantism
	{ISLAM, CATHOLICISM, ORTHODOXY, JUDAISM, ZOROASTRIANISM, HINDUISM, BUDDHISM, CONFUCIANISM, TAOISM},
	// Islam
	{ZOROASTRIANISM, HINDUISM, PROTESTANTISM, CATHOLICISM, ORTHODOXY, JUDAISM, BUDDHISM, CONFUCIANISM, TAOISM},
	// Hinduism
	{ISLAM, ORTHODOXY, PROTESTANTISM, CATHOLICISM, JUDAISM, CONFUCIANISM, TAOISM, ZOROASTRIANISM, BUDDHISM},
	// Buddhism
	{ORTHODOXY, PROTESTANTISM, CATHOLICISM, JUDAISM, ZOROASTRIANISM, TAOISM, ISLAM, CONFUCIANISM, HINDUISM},
	// Confucianism
	{ISLAM, ORTHODOXY, PROTESTANTISM, CATHOLICISM, JUDAISM, ZOROASTRIANISM, HINDUISM, BUDDHISM, TAOISM},
	// Taoism
	{ISLAM, ORTHODOXY, PROTESTANTISM, CATHOLICISM, JUDAISM, ZOROASTRIANISM, HINDUISM, BUDDHISM, CONFUCIANISM},
	// Zoroastrianism
	{ISLAM, PROTESTANTISM, CATHOLICISM, ORTHODOXY, JUDAISM, HINDUISM, BUDDHISM, CONFUCIANISM, TAOISM},
};

// Leoreth: persecution priority
static const int persecutionValue[NUM_RELIGIONS][NUM_RELIGIONS] =
{
	// JUD ORT CAT PRO ISL HIN BUD CON TAO ZOR
	{  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }, // Judaism
	{   1, -1,  3,  3,  4,  1,  1,  1,  1,  2 }, // Orthodoxy
	{   2,  2, -1,  3,  4,  1,  1,  1,  1,  2 }, // Catholicism
	{   3,  2,  3, -1,  4,  1,  1,  1,  1,  2 }, // Protestantism
	{   1,  2,  2,  2, -1,  3,  1,  1,  1,  4 }, // Islam
	{   1,  3,  3,  3,  4, -1,  0,  1,  1,  2 }, // Hinduism
	{   1,  3,  3,  3,  4,  0, -1,  1,  1,  2 }, // Buddhism
	{   1,  2,  2,  2,  3,  1,  1, -1,  0,  1 }, // Confucianism
	{   1,  2,  2,  2,  3,  1,  1,  0, -1,  1 }, // Taoism
	{   1,  3,  3,  3,  4,  1,  1,  1,  1, -1 }, // Zoroastrianism
};