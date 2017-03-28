// 1v1ADC.cpp : Defines the entry point for the console application.
//Author Austin Boyd. 
//The purpose of this program is to allow the user to enter 2 different champions 
//and their levels, to calculate just autoing each other to death,
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
	double hpEffective;
	double secondsPerAD;//how many seconds/auto as opposed to autos/sec
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
	hp = ((level-1) * hpPerLvl) + hpBase;
}//END calculateHP

public: void calculateAD(double level)// AD
{
	ad = ((level-1) * adPerLvl) + adBase;
}//END calcualteAD

public: void calculateArmor(double level)//Armor
{
	armor = ((level-1) * armorPerLvl) + armorBase;
}//END calcualteArmor

public: void calculateAS(double level)//AS
{
	as = ((level-1) * asPerLvl + 1) * asBase;
}//END calcualteAS

public: void calculate(double level)
{
	//current calcs
	hp = ((level - 1) * hpPerLvl) + hpBase;
	ad = ((level - 1) * adPerLvl) + adBase;
	armor = ((level - 1) * armorPerLvl) + armorBase;
	as = ((level - 1) * asPerLvl + 1) * asBase;		//REMEMBER AS/level is in a percentage (I've written it as 0.5 for 50%)
	//theoretical calcs (used for calcs)
	hpEffective = (((armor / 100) + 1)*hp);
	secondsPerAD = 1 / as;
}//END caculate

public: void display(char firstOrSecond[10])
{
	cout << "your " << firstOrSecond << " champs base stats:" << endl;
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
	adBase = 56;
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

		if (strcmp(answer, "Ashe") == 0 || strcmp(answer, "ashe") == 0)
		{
			champ = new Ashe();
		}
		else if (strcmp(answer, "Caitlyn") == 0 || strcmp(answer, "caitlyn") || strcmp(answer, "Cait") || strcmp(answer, "cait") == 0)
		{
			champ = new Caitlyn();
		}
		else if (strcmp(answer, "Corki") == 0 || strcmp(answer, "corki") == 0)
		{
			champ = new Corki();
		}
		else if (strcmp(answer, "Draven") == 0 || strcmp(answer, "draven") == 0)
		{
			champ = new Draven();
		}
		else if (strcmp(answer, "Ezreal") == 0 || strcmp(answer, "ezreal") || strcmp(answer, "Ez") || strcmp(answer, "ez") == 0)
		{
			champ = new Ezreal();
		}
		else if (strcmp(answer, "Graves") == 0 || strcmp(answer, "graves") == 0)
		{
			champ = new Graves();
		}
		else if (strcmp(answer, "Jhin") == 0 || strcmp(answer, "jhin") == 0)
		{
			champ = new Jhin();
		}
		else if (strcmp(answer, "Jinx") == 0 || strcmp(answer, "jinx") == 0)
		{
			champ = new Jinx();
		}
		else if (strcmp(answer, "Kalista") == 0 || strcmp(answer, "kalista") == 0)
		{
			champ = new Kalista();
		}
		else if (strcmp(answer, "KogMaw") == 0 || strcmp(answer, "kogmaw") || strcmp(answer, "Kog") || strcmp(answer, "kog") == 0)
		{
			champ = new KogMaw();
		}
		else if (strcmp(answer, "Lucian") == 0 || strcmp(answer, "lucian") == 0)
		{
			champ = new Lucian();
		}
		else if (strcmp(answer, "Miss Fortune") == 0 || strcmp(answer, "miss fortune") || strcmp(answer, "MF") || strcmp(answer, "mf") == 0)
		{
			champ = new MissFortune();
		}
		else if (strcmp(answer, "Quinn") == 0 || strcmp(answer, "quinn") == 0)
		{
			champ = new Quinn();
		}
		else if (strcmp(answer, "Sivir") == 0 || strcmp(answer, "sivir") == 0)
		{
			champ = new Sivir();
		}
		else if (strcmp(answer, "Tristana") == 0 || strcmp(answer, "tristana") || strcmp(answer, "Trist") || strcmp(answer, "trist") == 0)
		{
			champ = new Tristana();
		}
		else if (strcmp(answer, "Twitch") == 0 || strcmp(answer, "twitch") == 0)
		{
			champ = new Twitch();
		}
		else if (strcmp(answer, "Urgot") == 0 || strcmp(answer, "urgot") == 0)
		{
			champ = new Urgot();
		}
		else if (strcmp(answer, "Varus") == 0 || strcmp(answer, "varus") == 0)
		{
			champ = new Varus();
		}
		else if (strcmp(answer, "Vayne") == 0 || strcmp(answer, "vayne") == 0)
		{
			champ = new Vayne();
		}
		else
		{
			cout << "Invalid Entry. You boosted animal" << endl;
			--pass;
		}
	} while (pass != 1);//END do while

	return champ;
}//END search


int verifyLevel(int lvl)
{
	while (lvl > 18 || lvl < 1)
	{
		cout << "invalid level, please re-enter your level (1-18)" << endl;
		cin >> lvl;
		cin.clear();
		cin.ignore();
	}//end while
	return lvl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------- V-MAIN-V


int main()
{
	cout << "This program will allow you to compare ADCs base damage 1v1 against another ADC" << endl;
	cout << "You'll be prompted to choose the ADC and level, then the next ADC and level to compare" << endl;
	cout << "(this is without runes/masteries/items/abilities)" << endl;

	Champion **champs;
	champs = new Champion * [2];
	int level;
	int hitsToKill1;
	int hitsToKill2;
	double timeToKill1;
	double timeToKill2;
	
	//SELECTION

	//CHAMP 1
	champs[0] = search("first");
	cout << "What level do you want this champion to be?" << endl;
	cin >>level;
	cin.clear();
	cin.ignore();
	//verify level/calculate
	level = verifyLevel(level);
	champs[0]->calculate(level);					//this takes the place of all the calculate functions. all 4 are included
	//display (for my peace of mind/troubleshooting)
	champs[0]->display("first");//TESTING DISPLAY
	cout << "your first champs level " << level << " HP = " << champs[0]->hp << endl;
	cout << "your first champs level " << level << " AD = " << champs[0]->ad << endl;
	cout << "your first champs level " << level << " AS = " << champs[0]->as << endl;
	cout << "your first champs level " << level << " ARMOR = " << champs[0]->armor << endl;
	cout << "your first champs level " << level << " Effective HP = " << champs[0]->hpEffective << endl;
	cout << "at level " << level << " your first champ auto attacks every " << champs[0]->secondsPerAD << " seconds." << endl;


	//CHAMP 2
	champs[1] = search("second");
	cout << "What level do you want this champion to be?" << endl;
	cin >> level;
	cin.clear();
	cin.ignore();
	//verify level/calulate
	level = verifyLevel(level);
	champs[1]->calculate(level);					//this takes the place of all the calculate functions. all 4 are included
	//display (for my peace of mind/troubleshooting)
	champs[1]->display("second");//TESTING DISPLAY
	cout << "your second champs level " << level << " HP = " << champs[1]->hp << endl;
	cout << "your second champs level " << level << " AD = " << champs[1]->ad << endl;
	cout << "your second champs level " << level << " AS = " << champs[1]->as << endl;
	cout << "your second champs level " << level << " ARMOR = " << champs[1]->armor << endl;
	cout << "your second champs level " << level << " Effective HP = " << champs[1]->hpEffective << endl;
	cout << "at level " << level << " your second champ auto attacks every " << champs[1]->secondsPerAD << " seconds." << endl;


	//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvTHIS SHIT NEEDS MORE TESTING BUT SEEMS FINEvvvvvvvv
	//the 1v1
	//calculate time/hits to die (1 is to KILL the first champ)
	hitsToKill1 = champs[0]->hpEffective / champs[1]->ad;
	hitsToKill2 = champs[1]->hpEffective / champs[0]->ad;
	timeToKill1 = hitsToKill1 * champs[1]->secondsPerAD;
	timeToKill2 = hitsToKill2 * champs[0]->secondsPerAD;
	//who wins? display                                                           ADD HP-LEFT AND SHIT TO THIS
	if (timeToKill1 < timeToKill2)
	{
		cout << "\n congratulations! champ 2 wins!" << endl;
		cout << " champ 1 dies in " << timeToKill1 << " seconds and " << hitsToKill1 << " hits!" << endl;
		cout << " champ 2 survives!\n" << endl;
	}
	else if (timeToKill2 < timeToKill1)
	{
		cout << "\n congratulations! champ 1 wins!" << endl;
		cout << " champ 2 dies in " << timeToKill2 << " seconds and " << hitsToKill2 << " hits!" << endl;
		cout << " champ 1 survives!\n" << endl;
	}
	else
	{
		cout << "\n wtf its an exact tie...........\n" << endl;
	}
	

	

	return 0;
}
