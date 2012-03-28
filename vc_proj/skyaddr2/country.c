//
// country.c -- get code from country
//


// structure of country code
struct _country_code {
	char *ip;
	char *port;
};

int country_code_len=240;

struct _country_code country_code[]=
	{ 		
{ "afghanistan" , "af" },
{ "albania" , "al" },
{ "algeria" , "dz" },
{ "american samoa" , "as" },
{ "andorra" , "ad" },
{ "angola" , "ao" },
{ "anguilla" , "ai" },
{ "antarctica" , "aq" },
{ "antigua and barbuda" , "ag" },
{ "argentina" , "ar" },
{ "armenia" , "am" },
{ "aruba" , "aw" },
{ "australia" , "au" },
{ "austria" , "at" },
{ "azerbaijan" , "az" },
{ "bahamas" , "bs" },
{ "bahrain" , "bh" },
{ "bangladesh" , "bd" },
{ "barbados" , "bb" },
{ "belarus" , "by" },
{ "belgium" , "be" },
{ "belize" , "bz" },
{ "benin" , "bj" },
{ "bermuda" , "bm" },
{ "bhutan" , "bt" },
{ "bolivia" , "bo" },
{ "bosnia and herzegowina" , "ba" },
{ "botswana" , "bw" },
{ "bouvet island" , "bv" },
{ "brazil" , "br" },
{ "british indian ocean territory" , "io" },
{ "brunei darussalam" , "bn" },
{ "bulgaria" , "bg" },
{ "burkina faso" , "bf" },
{ "burundi" , "bi" },
{ "cambodia" , "kh" },
{ "cameroon" , "cm" },
{ "canada" , "ca" },
{ "cape verde" , "cv" },
{ "cayman islands" , "ky" },
{ "central african republic" , "cf" },
{ "chad" , "td" },
{ "chile" , "cl" },
{ "china" , "cn" },
{ "christmas island" , "cx" },
{ "cocos (keeling) islands" , "cc" },
{ "colombia" , "co" },
{ "comoros" , "km" },
{ "congo, democratic republic of (was zaire)" , "cd" },
{ "congo, people's republic of" , "cg" },
{ "cook islands" , "ck" },
{ "costa rica" , "cr" },
{ "cote d'ivoire" , "ci" },
{ "croatia (local name: hrvatska)" , "hr" },
{ "cuba" , "cu" },
{ "cyprus" , "cy" },
{ "czech republic" , "cz" },
{ "denmark" , "dk" },
{ "djibouti" , "dj" },
{ "dominica" , "dm" },
{ "dominican republic" , "do" },
{ "east timor" , "tl" },
{ "ecuador" , "ec" },
{ "egypt" , "eg" },
{ "el salvador" , "sv" },
{ "equatorial guinea" , "gq" },
{ "eritrea" , "er" },
{ "estonia" , "ee" },
{ "ethiopia" , "et" },
{ "falkland islands (malvinas)" , "fk" },
{ "faroe islands" , "fo" },
{ "fiji" , "fj" },
{ "finland" , "fi" },
{ "france" , "fr" },
{ "france, metropolitan" , "fx" },
{ "french guiana" , "gf" },
{ "french polynesia" , "pf" },
{ "french southern territories" , "tf" },
{ "gabon" , "ga" },
{ "gambia" , "gm" },
{ "georgia" , "ge" },
{ "germany" , "de" },
{ "ghana" , "gh" },
{ "gibraltar" , "gi" },
{ "greece" , "gr" },
{ "greenland" , "gl" },
{ "grenada" , "gd" },
{ "guadeloupe" , "gp" },
{ "guam" , "gu" },
{ "guatemala" , "gt" },
{ "guinea" , "gn" },
{ "guinea-bissau" , "gw" },
{ "guyana" , "gy" },
{ "haiti" , "ht" },
{ "heard and mc donald islands" , "hm" },
{ "honduras" , "hn" },
{ "hong kong" , "hk" },
{ "hungary" , "hu" },
{ "iceland" , "is" },
{ "india" , "in" },
{ "indonesia" , "id" },
{ "iran (islamic republic of)" , "ir" },
{ "iraq" , "iq" },
{ "ireland" , "ie" },
{ "israel" , "il" },
{ "italy" , "it" },
{ "jamaica" , "jm" },
{ "japan" , "jp" },
{ "jordan" , "jo" },
{ "kazakhstan" , "kz" },
{ "kenya" , "ke" },
{ "kiribati" , "ki" },
{ "korea, democratic people's republic of" , "kp" },
{ "korea, republic of" , "kr" },
{ "kuwait" , "kw" },
{ "kyrgyzstan" , "kg" },
{ "lao people's democratic republic" , "la" },
{ "latvia" , "lv" },
{ "lebanon" , "lb" },
{ "lesotho" , "ls" },
{ "liberia" , "lr" },
{ "libyan arab jamahiriya" , "ly" },
{ "liechtenstein" , "li" },
{ "lithuania" , "lt" },
{ "luxembourg" , "lu" },
{ "macau" , "mo" },
{ "macedonia, the former yugoslav republic of" , "mk" },
{ "madagascar" , "mg" },
{ "malawi" , "mw" },
{ "malaysia" , "my" },
{ "maldives" , "mv" },
{ "mali" , "ml" },
{ "malta" , "mt" },
{ "marshall islands" , "mh" },
{ "martinique" , "mq" },
{ "mauritania" , "mr" },
{ "mauritius" , "mu" },
{ "mayotte" , "yt" },
{ "mexico" , "mx" },
{ "micronesia, federated states of" , "fm" },
{ "moldova, republic of" , "md" },
{ "monaco" , "mc" },
{ "mongolia" , "mn" },
{ "montserrat" , "ms" },
{ "morocco" , "ma" },
{ "mozambique" , "mz" },
{ "myanmar" , "mm" },
{ "namibia" , "na" },
{ "nauru" , "nr" },
{ "nepal" , "np" },
{ "netherlands" , "nl" },
{ "netherlands antilles" , "an" },
{ "new caledonia" , "nc" },
{ "new zealand" , "nz" },
{ "nicaragua" , "ni" },
{ "niger" , "ne" },
{ "nigeria" , "ng" },
{ "niue" , "nu" },
{ "norfolk island" , "nf" },
{ "northern mariana islands" , "mp" },
{ "norway" , "no" },
{ "oman" , "om" },
{ "pakistan" , "pk" },
{ "palau" , "pw" },
{ "palestinian territory, occupied" , "ps" },
{ "panama" , "pa" },
{ "papua new guinea" , "pg" },
{ "paraguay" , "py" },
{ "peru" , "pe" },
{ "philippines" , "ph" },
{ "pitcairn" , "pn" },
{ "poland" , "pl" },
{ "portugal" , "pt" },
{ "puerto rico" , "pr" },
{ "qatar" , "qa" },
{ "reunion" , "re" },
{ "romania" , "ro" },
{ "russian federation" , "ru" },
{ "rwanda" , "rw" },
{ "saint kitts and nevis" , "kn" },
{ "saint lucia" , "lc" },
{ "saint vincent and the grenadines" , "vc" },
{ "samoa" , "ws" },
{ "san marino" , "sm" },
{ "sao tome and principe" , "st" },
{ "saudi arabia" , "sa" },
{ "senegal" , "sn" },
{ "seychelles" , "sc" },
{ "sierra leone" , "sl" },
{ "singapore" , "sg" },
{ "slovakia (slovak republic)" , "sk" },
{ "slovenia" , "si" },
{ "solomon islands" , "sb" },
{ "somalia" , "so" },
{ "south africa" , "za" },
{ "south georgia and the south sandwich islands" , "gs" },
{ "spain" , "es" },
{ "sri lanka" , "lk" },
{ "st. helena" , "sh" },
{ "st. pierre and miquelon" , "pm" },
{ "sudan" , "sd" },
{ "suriname" , "sr" },
{ "svalbard and jan mayen islands" , "sj" },
{ "swaziland" , "sz" },
{ "sweden" , "se" },
{ "switzerland" , "ch" },
{ "syrian arab republic" , "sy" },
{ "taiwan" , "tw" },
{ "tajikistan" , "tj" },
{ "tanzania, united republic of" , "tz" },
{ "thailand" , "th" },
{ "togo" , "tg" },
{ "tokelau" , "tk" },
{ "tonga" , "to" },
{ "trinidad and tobago" , "tt" },
{ "tunisia" , "tn" },
{ "turkey" , "tr" },
{ "turkmenistan" , "tm" },
{ "turks and caicos islands" , "tc" },
{ "tuvalu" , "tv" },
{ "uganda" , "ug" },
{ "ukraine" , "ua" },
{ "united arab emirates" , "ae" },
{ "united kingdom" , "gb" },
{ "united states" , "us" },
{ "united states minor outlying islands" , "um" },
{ "uruguay" , "uy" },
{ "uzbekistan" , "uz" },
{ "vanuatu" , "vu" },
{ "vatican city state (holy see)" , "va" },
{ "venezuela" , "ve" },
{ "viet nam" , "vn" },
{ "virgin islands (british)" , "vg" },
{ "virgin islands (us)" , "vi" },
{ "wallis and futuna islands" , "wf" },
{ "western sahara" , "eh" },
{ "yemen" , "ye" },
{ "yugoslavia" , "yu" },
{ "zambia" , "zm" },
{ "zimbabwe" , "zw" },

	};
