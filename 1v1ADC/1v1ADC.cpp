// 1v1ADC.cpp : Defines the entry point for the console application.
//Author Austin Boyd. 
//The purpose of this program is to allow the user to enter 2 different champions 
//and their level, to calculate just autoing each other to death,
//who would win. this is assuming 0 runes/masteries/items and assuming they start
//autoing each other at the same time

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

class Champion //champ class
{
public:
	//actual values to be used for current stats
	double hp;
	double ad;
	double as;
	double armor;
protected:
	//constants for each champ
	double hpBase;
	double hpPerLvl;
	double adBase;
	double adPerLvl;
	double asBase;
	double asPerLvl;
	double armorBase;
	double armorPerLvl;
	//FIX THESEvvvvvvvvvvvvvv
public: void calculateHP(double level)// HP
{
	hp = (level * hpPerLvl) + hpBase;
}//END calculateHP

public: double calculateAD(double level)// AD
{
	double temp;
	temp = (level * adPerLvl) + adBase;
	return temp;
}//END calcualteAD

public: double calculateArmor(double level)//Armor
{
	double temp;
	temp = (level * armorPerLvl) + armorBase;
	return temp;
}//END calcualteArmor

public: double calculateAS(double level)//AS
{
	double temp;
	temp = (level * asPerLvl + 1) * asBase;
	return temp;
}//END calcualteAS

public: void display(char firstOrSecond[10])
{
	cout << "YOUR " << firstOrSecond << " CHAMP STATS:" << endl;
	printf(" hp: %3.2f\n hp/level: %3.2f\n ad: %3.2f\n ad/level: %3.2f\n as: %3.3f\n as/level: %3.4f\n armor: %3.2f\n armor/level: %3.2f\n",
		hpBase, hpPerLvl, adBase, adPerLvl, asBase, asPerLvl, armorBase, armorPerLvl);
}
};//END champ parent class










class Ashe : public Champion
{
public: Ashe()
{
	hpBase = 527.72;
	hpPerLvl = 79;
	adBase = 56.508;
	adPerLvl = 2.26;
	asBase = 0.658;
	asPerLvl = 0.0333;
	armorBase = 21.212;
	armorPerLvl = 3.4;
}
};

class Caitlyn : public Champion
{
public: Caitlyn()
{
	hpBase = 524.4;
	hpPerLvl = 80;
	adBase = 53.66;
	adPerLvl = 2.18;
	asBase = 0.568;
	asPerLvl = 0.04;
	armorBase = 22.88;
	armorPerLvl = 3.5;
}
};

class Corki : public Champion
{
public: Corki()
{
	hpBase = 512.76;
	hpPerLvl = 82;
	adBase = 53;
	adPerLvl = 3.5;
	asBase = 0.625;
	asPerLvl = 0.023;
	armorBase = 23.38;
	armorPerLvl = 3.5;
}
};

class Draven : public Champion
{
public: Draven()
{
	hpBase = 557.76;
	hpPerLvl = 82;
	adBase = 55.8;
	adPerLvl = 2.91;
	asBase = 0.679;
	asPerLvl = 0.027;
	armorBase = 25.544;
	armorPerLvl = 3.3;
}
};

class Ezreal : public Champion
{
public: Ezreal()
{
	hpBase = 484.4;
	hpPerLvl = 80;
	adBase = 55.66;
	adPerLvl = 2.41;
	asBase = 0.625;
	asPerLvl = 0.028;
	armorBase = 21.88;
	armorPerLvl = 3.5;
}
};

class Graves : public Champion
{
public: Graves()
{
	hpBase = 551.12;
	hpPerLvl = 84;
	adBase = 60.83;
	adPerLvl = 2.41;
	asBase = 0.481;
	asPerLvl = 0.026;
	armorBase = 24.376;
	armorPerLvl = 3.4;
}
};

class Jhin : public Champion
{
public: Jhin()
{
	hpBase = 540;
	hpPerLvl = 85;
	adBase = 53;
	adPerLvl = 4;
	asBase = 0.625;
	asPerLvl = 0;
	armorBase = 20;
	armorPerLvl = 3.5;
}
};

class Jinx : public Champion
{
public: Jinx()
{
	hpBase = 517.76;
	hpPerLvl = 82;
	adBase = 58.46;
	adPerLvl = 2.41;
	asBase = 0.625;
	asPerLvl = 0.01;
	armorBase = 22.88;
	armorPerLvl = 3.5;
}
};

class Kalista : public Champion
{
public: Kalista()
{
	hpBase = 517.76;
	hpPerLvl = 83;
	adBase = 63;
	adPerLvl = 2.9;
	asBase = 0.644;
	asPerLvl = 0.025;
	armorBase = 19.012;
	armorPerLvl = 3.5;
}
};

class KogMaw : public Champion
{
public: KogMaw()
{
	hpBase = 517.76;
	hpPerLvl = 82;
	adBase = 57.46;
	adPerLvl = 2.41;
	asBase = 0.665;
	asPerLvl = 0.0265;
	armorBase = 19.88;
	armorPerLvl = 3.5;
}
};

class Lucian : public Champion
{
public: Lucian()
{
	hpBase = 554.4;
	hpPerLvl = 80;
	adBase = 57.46;
	adPerLvl = 2.41;
	asBase = 0.638;
	asPerLvl = 0.033;
	armorBase = 24.04;
	armorPerLvl = 3;
}
};

class MissFortune : public Champion
{
public: MissFortune()
{
	hpBase = 530;
	hpPerLvl = 85;
	adBase = 46;
	adPerLvl = 1;
	asBase = 0.656;
	asPerLvl = 0.03;
	armorBase = 24.04;
	armorPerLvl = 3;
}
};

class Quinn : public Champion
{
public: Quinn()
{
	hpBase = 532.8;
	hpPerLvl = 85;
	adBase = 54.46;
	adPerLvl = 2.41;
	asBase = 0.668;
	asPerLvl = 0.031;
	armorBase = 23.38;
	armorPerLvl = 3.5;
}
};

class Sivir : public Champion
{
public: Sivir()
{
	hpBase = 515.76;
	hpPerLvl = 82;
	adBase = 57.46;
	adPerLvl = 2.41;
	asBase = 0.625;
	asPerLvl = 0.016;
	armorBase = 22.21;
	armorPerLvl = 3.25;
}
};

class Tristana : public Champion
{
public: Tristana()
{
	hpBase = 542.76;
	hpPerLvl = 82;
	adBase = 56.96;
	adPerLvl = 2.41;
	asBase = 0.656;
	asPerLvl = 0.015;
	armorBase = 22;
	armorPerLvl = 3;
}
};

class Twitch : public Champion
{
public: Twitch()
{
	hpBase = 525.08;
	hpPerLvl = 81;
	adBase = 55.46;
	adPerLvl = 2.41;
	asBase = 0.679;
	asPerLvl = 0.0338;
	armorBase = 23.04;
	armorPerLvl = 3;
}
};

class Urgot : public Champion
{
public: Urgot()
{
	hpBase = 586.52;
	hpPerLvl = 89;
	adBase = 54.05;
	adPerLvl = 3.6;
	asBase = 0.644;
	asPerLvl = 0.029;
	armorBase = 24.544;
	armorPerLvl = 3.3;
}
};

class Varus : public Champion
{
public: Varus()
{
	hpBase = 537.76;
	hpPerLvl = 82;
	adBase = 54.66;
	adPerLvl = 2.41;
	asBase = 0.658;
	asPerLvl = 0.03;
	armorBase = 23.212;
	armorPerLvl = 3.4;
}
};

class Vayne : public Champion
{
public: Vayne()
{
	hpBase = 498.44;
	hpPerLvl = 83;
	adBase = 55.88;
	adPerLvl = 1.66;
	asBase = 0.658;
	asPerLvl = 0.04;
	armorBase = 19.012;
	armorPerLvl = 3.4;
}
};


Champion* search(char firstOrSecond[10])
{
	Champion *champ;
	char answer[20];
	int pass;//ends the do-while
	do
	{
		pass = 1;
		cout << "Enter the name of the " << firstOrSecond << " ADC to 1v1" << endl;
		gets_s(answer);

		if (strcmp(answer, "Ashe") == 0)
		{
			champ = new Ashe();
		}
		else if (strcmp(answer, "Caitlyn") == 0)
		{
			champ = new Caitlyn();
		}
		else if (strcmp(answer, "Corki") == 0)
		{
			champ = new Corki();
		}
		else if (strcmp(answer, "Draven") == 0)
		{
			champ = new Draven();
		}
		else if (strcmp(answer, "Ezreal") == 0)
		{
			champ = new Ezreal();
		}
		else if (strcmp(answer, "Graves") == 0)
		{
			champ = new Graves();
		}
		else if (strcmp(answer, "Jhin") == 0)
		{
			champ = new Jhin();
		}
		else if (strcmp(answer, "Jinx") == 0)
		{
			champ = new Jinx();
		}
		else if (strcmp(answer, "Kalista") == 0)
		{
			champ = new Kalista();
		}
		else if (strcmp(answer, "KogMaw") == 0)
		{
			champ = new KogMaw();
		}
		else if (strcmp(answer, "Lucian") == 0)
		{
			champ = new Lucian();
		}
		else if (strcmp(answer, "Miss Fortune") == 0)
		{
			champ = new MissFortune();
		}
		else if (strcmp(answer, "Quinn") == 0)
		{
			champ = new Quinn();
		}
		else if (strcmp(answer, "Sivir") == 0)
		{
			champ = new Sivir();
		}
		else if (strcmp(answer, "Tristana") == 0)
		{
			champ = new Tristana();
		}
		else if (strcmp(answer, "Twitch") == 0)
		{
			champ = new Twitch();
		}
		else if (strcmp(answer, "Urgot") == 0)
		{
			champ = new Urgot();
		}
		else if (strcmp(answer, "Varus") == 0)
		{
			champ = new Varus();
		}
		else if (strcmp(answer, "Vayne") == 0)
		{
			champ = new Vayne();
		}
		else
		{
			cout << "Invalid Entry. Please try again" << endl;
			--pass;
		}
	} while (pass != 1);//END do while, this is selecting the first champ

	return champ;
}//END search

//----------------------------------------------------------------------------------------------------------------------------------------------- V-MAIN-V


int main()
{
	cout << "This program will allow you to compare ADCs base damage 1v1 against another ADC" << endl;
	cout << "You'll be prompted to choose the ADC and level, then the next ADC and level to compare" << endl;
	cout << "(this is without runes/masteries/items/abilities)" << endl;

	Champion **champs;
	champs = new Champion * [2];
	champs[0] = search("first");
	champs[1] = search("second");

	champs[0]->display("first");//TESTING DISPLAY
	champs[1]->display("second");//TESTING DISPLAY
	//champs[0]->calculateHP(2);
	//cout << "your champs level 2 hp = " << champs[0]->hp <<endl;

	
	return 0;
}
