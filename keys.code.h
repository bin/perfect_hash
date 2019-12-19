
#define NK  255       /* number of keys */
#define NG  429       /* number of vertices */
#define NS  4       /* length of array T1 and T2 */

int T1[] = { 203, 398, 326, 50 };

int T2[] = { 4, 139, 330, 154 };

int G[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 
    0, 0, 0, 0, 0, 0, 255, 0, 366, 0, 0, 0, 388, 335, 269, 0, 49, 0, 53, 0, 
    71, 279, 0, 217, 0, 318, 0, 0, 0, 0, 109, 0, 0, 168, 186, 0, 187, 0, 0, 
    0, 0, 374, 52, 137, 0, 14, 273, 0, 0, 0, 0, 223, 0, 311, 0, 0, 0, 40, 
    133, 0, 140, 0, 0, 428, 0, 0, 112, 248, 0, 0, 43, 373, 385, 208, 188, 
    264, 69, 0, 0, 372, 417, 0, 0, 0, 252, 0, 0, 329, 260, 243, 0, 0, 0, 
    278, 157, 0, 0, 291, 219, 0, 230, 360, 98, 87, 0, 248, 275, 0, 0, 34, 
    0, 240, 270, 103, 383, 122, 0, 0, 0, 106, 337, 0, 244, 0, 190, 0, 101, 
    0, 0, 0, 199, 0, 139, 406, 375, 161, 81, 215, 2, 257, 289, 0, 333, 0, 
    0, 284, 207, 0, 173, 327, 187, 0, 0, 0, 5, 19, 0, 0, 62, 345, 69, 0, 0, 
    400, 253, 103, 0, 0, 112, 0, 250, 90, 227, 233, 279, 0, 391, 160, 0, 
    206, 0, 46, 402, 28, 365, 0, 109, 54, 245, 287, 4, 0, 0, 300, 117, 287, 
    0, 0, 75, 81, 228, 244, 0, 0, 365, 0, 42, 423, 0, 183, 203, 0, 0, 22, 
    0, 0, 0, 362, 424, 123, 0, 0, 0, 386, 0, 415, 397, 195, 0, 14, 51, 0, 
    167, 286, 203, 175, 38, 100, 0, 403, 0, 27, 1, 96, 218, 7, 0, 0, 101, 
    241, 85, 355, 0, 156, 73, 166, 8, 0, 59, 234, 0, 63, 221, 0, 0, 263, 
    200, 92, 0, 112, 236, 54, 186, 90, 0, 415, 0, 154, 61, 195, 161, 107, 
    32, 128, 0, 42, 371, 0, 0, 0, 109, 142, 74, 25, 0, 0, 0, 320, 43, 0, 
    365, 304, 297, 201, 0, 0, 365, 251, 0, 152, 152, 116, 0, 0, 180, 0, 0, 
    313, 318, 237, 0, 204, 150, 165, 23, 156, 273, 0, 89, 0, 0, 399, 28, 0, 
    0, 332, 0, 212, 35, 254, 7, 71, 0, 405, 98, 0, 138, 0, 179, 338, 29, 0, 
    0, 0, 229, 310, 165, 0, 118, 146, 424, 21, 37, 0, 195, 64, 0, 0, 343, 
    204, 343, 16, 102, 0, 189, 0, 219, 44, 86, 203, 147, 0, 0, 15, 324, 0, 
    396, 36, 375, 87, 109, 0, 262, 67, 117, 183, 376, 96, 185, 130, 0, 151, 
    187, 0, 114, 180, 202, 223, 270, 144, 82 };

char *K[] = { "deep", "that", "with", "this", "they", "from", "will", 
    "just", "when", "them", "into", "than", "like", "then", "also", "many", 
    "back", "even", "good", "down", "year", "over", "last", "take", "life", 
    "much", "most", "same", "such", "each", "look", "work", "next", "city", 
    "part", "tell", "went", "took", "give", "both", "fact", "case", "head", 
    "home", "help", "ever", "keep", "long", "feel", "kind", "best", "once", 
    "news", "face", "book", "area", "body", "able", "door", "name", "line", 
    "game", "food", "care", "idea", "else", "free", "live", "data", "gave", 
    "full", "play", "gone", "half", "town", "open", "love", "plan", "left", 
    "goes", "stay", "stop", "move", "less", "view", "park", "late", "land", 
    "soon", "gets", "upon", "thus", "easy", "fire", "form", "film", "rate", 
    "risk", "fine", "race", "army", "jobs", "test", "list", "king", "hope", 
    "deal", "type", "dark", "heat", "lost", "bill", "star", "bank", "cost", 
    "fish", "skin", "page", "loss", "kept", "held", "club", "goal", "rock", 
    "send", "cars", "wide", "fell", "trip", "term", "safe", "edge", "fall", 
    "lake", "arts", "fear", "tree", "rich", "save", "seat", "grew", "gold", 
    "grow", "task", "tiny", "legs", "post", "laws", "pass", "song", "firm", 
    "salt", "cool", "card", "warm", "soft", "pull", "join", "hill", "fund", 
    "neck", "camp", "unit", "note", "paid", "shot", "vote", "boat", "runs", 
    "fast", "lots", "path", "ship", "spot", "fans", "farm", "text", "tend", 
    "desk", "moon", "thin", "fuel", "snow", "tall", "shop", "tour", "golf", 
    "plus", "uses", "pool", "puts", "rare", "dogs", "gift", "soil", "flat", 
    "tape", "milk", "rice", "vast", "draw", "push", "miss", "code", "busy", 
    "cups", "asks", "crew", "sits", "rise", "drop", "host", "eggs", "glad", 
    "mass", "pink", "dust", "yard", "ages", "tone", "cook", "sand", "luck", 
    "roof", "hurt", "hang", "drew", "ears", "duty", "bike", "corn", "bags", 
    "clip", "navy", "gain", "cuts", "lies", "lock", "meal", "sing", "pure", 
    "boss", "palm", "dirt", "pace", "hero", "knee", "oven", "stir", "fees", 
    "gear", "item", "shut", "belt", "mile" };

