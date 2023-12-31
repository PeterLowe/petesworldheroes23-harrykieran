// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Harry Knight
// Kieran Arets
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	

	if (letter == 'b' || letter == 'B') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "Bahrain, Bangladesh, Bhutan, Brunei" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "There are no countries starting with B in the other areas of the world." << std::endl;
		}
	}

	if (letter == 'c' || letter == 'C') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Canada, Cayman Islands, Chile, Colombia, Costa Rica, Cuba" << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Croatia, Cyprus, Czech Republic" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo, Congo, C�te D'ivoire" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos Islands" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "Cook Islands" << std::endl;
		}
	}

	if (letter == 'd' || letter == 'D') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Dominica, Dominican Rep." << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "No D countries in Asia" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "No D countries in the rest of the world" << std::endl;
		}
	}

	if (letter == 'e' || letter == 'E') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Ecuador, El Salvador, " << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "East Timor" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "No E countries in the rest of the world" << std::endl;
		}
	}

	if (letter == 'f' || letter == 'F') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Falkland Islands, French Guiana" << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Faroe Islands, Finland, France" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "No F countries in Africa" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "French Southern Territories" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "Fiji, French Polynesia" << std::endl;
		}
	}

	if (letter == 'g' || letter == 'G') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Greenland, Grenada, Guadeloupe, Guatemala, Guyana" << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Germany, Gibraltar, Greece" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "Gabon, The Gambia, Ghana, Guinea, Guinea-Bissau" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "Georgia, " << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "Guam" << std::endl;
		}
	}

	if (letter == 'h' || letter == 'H') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "Haiti, Honduras" << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Holy See, Hungary" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "No H countries in Africa" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "Hong Kong" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "No H countries in the rest of the world" << std::endl;
		}
	}

	if (letter == 'i' || letter == 'I') // Written by Harry
	{
		if (region == 1)//Americas
		{
			std::cout << "No I countries in the Americas" << std::endl;
		}
		if (region == 2)//Europe
		{
			std::cout << "Iceland, Ireland, Italy" << std::endl;
		}
		if (region == 3)//Africa
		{
			std::cout << "Ivory Coast" << std::endl;
		}
		if (region == 4)//Asia
		{
			std::cout << "India, Indonesia, Iran, Iraq, Israel" << std::endl;
		}
		if (region == 5)//ROW
		{
			std::cout << "No I countries in the rest of the world" << std::endl;
		}
	}

	if (letter == 't' || letter == 'T') // written by Kieran
	{
		if (region == 1)
		{
			std::cout << "Trinidad and Tobago, Turks and Caicos Islands" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ts in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tanzania, Togo, Tunisia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Taiwan, Tajikistan, Thailand, Tibet, Timor-Leste, Turkey, Turkmenistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tonga, Tuvalu" << std::endl;
		}

	if (letter == 'u' || letter == 'U') // written by Kieran
	{
		if (region == 1)
		{
			std::cout << "United States of America, Uruguay" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Ukraine, United Kingdom" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "United Arab Emirates, Uzbekistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Us in the rest of the world" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') //written by Kieran
	{
		if (region == 1)
		{
			std::cout << "Venezuela, British Virgin Islands, U.S. Virgin Islands" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu" << std::endl;
		}
	}

	if (letter == 'w' || letter == 'W') //written by Kieran
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Fortuna Islands" << std::endl;
		}
	}

	if (letter == 'x' || letter == 'X') //written by Kieran
	{
		if (region == 1)
		{
			std::cout << "There are no Xs in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Xs in the rest of the world" << std::endl;
		}
	}


	if (letter == 'y' || letter == 'Y') //written by Kieran
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world" << std::endl;
		}

	}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}