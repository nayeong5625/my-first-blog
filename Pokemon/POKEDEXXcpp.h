#include <iostream>
using namespace std;

#include "POKEDEX.h"

int POKEMON_INFO::Get_Number() {
	return no;
}

string POKEMON_INFO::Get_Name() {
	return name;
}

string POKEMON_INFO::Get_Species() {
	return species;
}

void POKEMON_INFO::Get_Type() {
	for (int i = 0; type[i].length != 0; i++)
		cout << type[i];
}

double POKEMON_INFO::Get_Height() {
	return height;
}

double POKEMON_INFO::Get_Weight() {
	return weight;
}

string POKEMON_INFO::Get_Category() {
	return category;
}

string POKEMON_INFO::Get_Abilities() {
	return abilities;
}

string POKEMON_INFO::Get_Hidden_Ability() {
	return hidden_ability;
}

int POKEMON_INFO::Get_Catch_Rate() {
	return catch_rate;
}

void POKEMON_INFO::Get_Egg_Groups() {
	for (int i = 0; egg_groups[i].length != 0; i++)
		cout << egg_groups[i];
}

string POKEMON_INFO::Get_Pokedex_Color() {
	return pokedex_color;
}

string POKEMON_INFO::Get_Habitat() {
	return habitat;
}

string POKEMON_INFO::Get_Description() {
	return description;
}

string POKEMON_INFO::Get_Evolutionary_Line() {
	return evolutionary_line;
}