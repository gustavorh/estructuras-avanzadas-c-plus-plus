#include <iostream>

using namespace std;
int main() {
	double total_arica = 0, total_tarapaca = 0, total_antofagasta = 0, total_atacama = 0, total_coquimbo = 0, total_valparaiso = 0, total_metropolitana = 0, total_ohiggins = 0, total_maule = 0, total_nuble = 0, total_biobio = 0, total_araucania = 0, total_rios = 0, total_lagos = 0, total_aysen = 0, total_magallanes = 0;
	double variacion_arica = 0, variacion_tarapaca = 0, variacion_antofagasta = 0, variacion_atacama = 0, variacion_coquimbo = 0, variacion_valparaiso = 0, variacion_metropolitana = 0, variacion_ohiggins = 0, variacion_maule = 0, variacion_nuble = 0, variacion_biobio = 0, variacion_araucania = 0, variacion_rios = 0, variacion_lagos = 0, variacion_aysen = 0, variacion_magallanes = 0;
	double promedio_anual_2006 = 0, promedio_anual_2009 = 0, promedio_anual_2011 = 0, promedio_anual_2013 = 0, promedio_anual_2015 = 0, promedio_anual_2017 = 0, promedio_anual_2020 = 0;
	string regiones[16] = {"Arica y Parinacota", "Tarapaca", "Antofagasta", "Atacama", "Coquimbo", "Valparaiso", "Metropolitana", "O'Higgins", "Maule", "Ñuble", "Biobio", "La Araucania", "Los Rios", "Los Lagos", "Aysen", "Magallanes"};
	double arica[7] = {30.6, 18.8, 21.0, 14.6, 9.7, 8.4, 11.9};
	double tarapaca[7] = {24.0, 24.9, 16.4, 8.2, 7.1, 6.4, 14.0};
	double antofagasta[7] = {12.3, 8.8, 7.1, 4.0, 5.4, 5.1, 9.3};
	double atacama[7] = {22.3, 22.2, 16.3, 7.3, 6.9, 7.9, 9.5};
	double coquimbo[7] = {37.9, 30.6, 26.1, 16.2, 13.8, 11.9, 11.7};
	double valparaiso[7] = {30.6, 24.4, 24.5, 15.6, 12.0, 7.1, 11.3};
	double metropolitana[7] = {20.2, 17.6, 15.7, 9.2, 7.1, 5.4, 9.0};
	double ohiggins[7] = {32.6, 25.8, 19.4, 16.0, 13.7, 10.1, 10.0};
	double maule[7] = {43.9, 38.8, 32.5, 22.3, 18.7, 12.7, 12.3};
	double nuble[7] = {0.0, 0.0, 0.0, 0.0, 0.0, 16.1, 14.7};
	double biobio[7] = {41.3, 35.1, 32.3, 22.3, 17.6, 12.3, 13.2};
	double araucania[7] = {48.5, 48.5, 39.7, 27.9, 23.6, 17.2, 17.4};
	double rios[7] = {45.3, 37.7, 32.0, 23.1, 16.8, 12.1, 12.2};
	double lagos[7] = {29.3, 29.0, 27.0, 17.6, 16.1, 11.7, 11.3};
	double aysen[7] = {23.0, 20.3, 13.3, 6.8, 6.5, 4.6, 6.6};
	double magallanes[7] = {12.8, 10.3, 7.0, 5.6, 4.4, 2.1, 5.7};
	
	double anual_2006[16] = {30.6, 24.0, 12.3, 22.3, 37.9, 30.6, 20.2, 32.6, 43.9, 0.0, 41.3, 48.5, 45.3, 29.3,23.0, 12.8};
	double anual_2009[16] = {18.8, 24.9, 8.8, 22.2, 30.6, 24.4, 17.6, 25.8, 38.8, 0.0, 35.1, 48.5, 37.7, 29.0, 20.3, 10.3};
	double anual_2011[16] = {21.0, 16.4, 7.1, 16.3, 26.1, 24.5, 15.7, 19.4, 32.5, 0.0, 32.3, 39.7, 32.0, 27.0, 13.3, 7.0};
	double anual_2013[16] = {14.6, 8.2, 4.0, 7.3, 16.2, 15.6, 9.2, 16.0, 22.3, 0.0, 22.3, 27.9, 23.1, 17.6, 6.8, 5.6};
	double anual_2015[16] = {9.7, 7.1, 5.4, 6.9, 13.8, 12.0, 7.1, 13.7, 18.7, 0.0, 17.6, 23.6, 16.8, 16.1, 6.5, 4.4};
	double anual_2017[16] = {8.4, 6.4, 5.1, 7.9, 11.9, 7.1, 5.4, 10.1, 12.7, 16.1, 12.3, 17.2, 12.1, 11.7, 4.6, 2.1};
	double anual_2020[16] = {11.9, 14.0, 9.3, 9.5, 11.7, 11.3, 9.0, 10.0, 12.3, 14.7, 13.2, 17.4, 12.2, 11.3, 6.6, 5.7};
	
	for (int i = 0; i < 16; i++) { // For loop que recorrerá el nombre de las regiones
		cout << "-----------------------------------------------------------" << endl;
		cout << regiones[i] << endl;
		if (regiones[i] == "Arica y Parinacota") {
			for (int j = 0; j < 6; j++) { // For loop que recorrerá el array por región
				variacion_arica = (arica[j+1] - arica[j]);
				total_arica = total_arica + (arica[j+1] - arica[j]);
				cout << "La variacion por año de la region de Arica y Parinacota es: " << variacion_arica << endl;
			}
		} else if (regiones[i] == "Tarapaca") {
			for (int j = 0; j < 6; j++) {
				variacion_tarapaca = (tarapaca[j+1] - tarapaca[j]);
				total_tarapaca = total_tarapaca + (tarapaca[j+1] - tarapaca[j]);
				cout << "La variacion por año de la region de Tarapaca es: " << variacion_tarapaca << endl;
			}
		} else if (regiones[i] == "Antofagasta") {
			for (int j = 0; j < 6; j++) {
				variacion_antofagasta = (antofagasta[j+1] - antofagasta[j]);
				total_antofagasta = total_antofagasta + (antofagasta[j+1] - antofagasta[j]);
				cout << "La variacion por año de la region de Antofagasta es: " << variacion_antofagasta << endl;
			}
		} else if (regiones[i] == "Atacama") {
			for (int j = 0; j < 6; j++) {
				variacion_atacama = (atacama[j+1] - atacama[j]);
				total_atacama = total_atacama + (atacama[j+1] - atacama[j]);
				cout << "La variacion por año de la region de Atacama es: " << variacion_atacama << endl;
			}
		} else if (regiones[i] == "Coquimbo") {
			for (int j = 0; j < 6; j++) {
				variacion_coquimbo = (coquimbo[j+1] - coquimbo[j]);
				total_coquimbo = total_coquimbo + (coquimbo[j+1] - coquimbo[j]);
				cout << "La variacion por año de la region de Coquimbo es: " << variacion_coquimbo << endl;
			}
		} else if (regiones[i] == "Valparaiso") {
			for (int j = 0; j < 6; j++) {
				variacion_valparaiso = (valparaiso[j+1] - valparaiso[j]);
				total_valparaiso = total_valparaiso + (valparaiso[j+1] - valparaiso[j]);
				cout << "La variacion por año de la region de Valparaiso es: " << variacion_valparaiso << endl;
			}
		} else if (regiones[i] == "Metropolitana") {
			for (int j = 0; j < 6; j++) {
				variacion_metropolitana = (metropolitana[j+1] - metropolitana[j]);
				total_metropolitana = total_metropolitana + (metropolitana[j+1] - metropolitana[j]);
				cout << "La variacion por año de la region Metropolitana es: " << variacion_metropolitana << endl;
			}
		} else if (regiones[i] == "O'Higgins") {
			for (int j = 0; j < 6; j++) {
				variacion_ohiggins = (ohiggins[j+1] - ohiggins[j]);
				total_ohiggins = total_ohiggins + (ohiggins[j+1] - ohiggins[j]);
				cout << "La variacion por año de la region de O'higgins es: " << variacion_ohiggins << endl;
			}
		} else if (regiones[i] == "Maule") {
			for (int j = 0; j < 6; j++) {
				variacion_maule = (maule[j+1] - maule[j]);
				total_maule = total_maule + (maule[j+1] - maule[j]);
				cout << "La variacion por año de la region del Maule es: " << variacion_maule << endl;
			}
		} else if (regiones[i] == "Ñuble") {
			for (int j = 0; j < 6; j++) {
				variacion_nuble = (nuble[j+1] - nuble[j]);
				total_nuble = total_nuble + (nuble[j+1] - nuble[j]);
				cout << "La variacion por año de la region del Ñuble es: " << variacion_nuble << endl;
			}
		} else if (regiones[i] == "Biobio") {
			for (int j = 0; j < 6; j++) {
				variacion_biobio = (biobio[j+1] - biobio[j]);
				total_biobio = total_biobio + (biobio[j+1] - biobio[j]);
				cout << "La variacion por año de la region del BioBio es: " << variacion_biobio << endl;
			}
		} else if (regiones[i] == "La Araucania") {
			for (int j = 0; j < 6; j++) {
				variacion_araucania = (araucania[j+1] - araucania[j]);
				total_araucania = total_araucania + (araucania[j+1] - araucania[j]);
				cout << "La variacion por año de la region de la Araucania es: " << variacion_araucania << endl;
			}
		} else if (regiones[i] == "Los Rios") {
			for (int j = 0; j < 6; j++) {
				variacion_rios = (rios[j+1] - rios[j]);
				total_rios = total_rios + (rios[j+1] - rios[j]);
				cout << "La variacion por año de la region de Los Rios es: " << variacion_rios << endl;
			}
		} else if (regiones[i] == "Los Lagos") {
			for (int j = 0; j < 6; j++) {
				variacion_lagos = (lagos[j+1] - lagos[j]);
				total_lagos = total_lagos + (lagos[j+1] - lagos[j]);
				cout << "La variacion por año de la region de Los Lagos es: " << variacion_lagos << endl;
			}
		} else if (regiones[i] == "Aysen") {
			for (int j = 0; j < 6; j++) {
				variacion_aysen = (aysen[j+1] - aysen[j]);
				total_aysen = total_aysen + (aysen[j+1] - aysen[j]);
				cout << "La variacion por año de la region de Aysen es: " << variacion_aysen << endl;
			}
		} else if (regiones[i] == "Magallanes") {
			for (int j = 0; j < 6; j++) {
				variacion_magallanes = (magallanes[j+1] - magallanes[j]);
				total_magallanes = total_magallanes + (magallanes[j+1] - magallanes[j]);
				cout << "La variacion por año de la region de Magallanes es: " << variacion_magallanes << endl;
			}
		}
		promedio_anual_2006 = promedio_anual_2006 + anual_2006[i];
		promedio_anual_2009 = promedio_anual_2009 + anual_2009[i];
		promedio_anual_2011 = promedio_anual_2011 + anual_2011[i];
		promedio_anual_2013 = promedio_anual_2013 + anual_2013[i];
		promedio_anual_2015 = promedio_anual_2015 + anual_2015[i];
		promedio_anual_2017 = promedio_anual_2017 + anual_2017[i];
		promedio_anual_2020 = promedio_anual_2020 + anual_2020[i];
	}
	cout << "-----------------------------------------------------------" << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Arica y Parinacota es: " << (total_arica / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Tarapaca es: " << (total_tarapaca / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Antofagasta es: " << (total_antofagasta / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Atacama es: " << (total_atacama / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Coquimbo es: " << (total_coquimbo / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Valparaiso es: " << (total_valparaiso / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Metropolitana es: " << (total_metropolitana / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de O'Higgins es: " << (total_ohiggins / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region del Maule es: " << (total_maule / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Ñuble es: " << (total_nuble / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de BioBio es: " << (total_biobio / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de la Araucania es: " << (total_araucania / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Los Rios es: " << (total_rios / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Los Lagos es: " << (total_lagos / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Aysen es: " << (total_aysen / 6) << endl;
	cout << "El promedio de la incidencia de la probreza en la region de Magallanes es: " << (total_magallanes / 6) << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << "El promedio anual del año 2006 es: " << (promedio_anual_2006 / 16) << endl;
	cout << "El promedio anual del año 2009 es: " << (promedio_anual_2009 / 16) << endl;
	cout << "El promedio anual del año 2011 es: " << (promedio_anual_2011 / 16) << endl;
	cout << "El promedio anual del año 2013 es: " << (promedio_anual_2013 / 16) << endl;
	cout << "El promedio anual del año 2015 es: " << (promedio_anual_2015 / 16) << endl;
	cout << "El promedio anual del año 2017 es: " << (promedio_anual_2017 / 16) << endl;
	cout << "El promedio anual del año 2020 es: " << (promedio_anual_2020 / 16) << endl;
	
	return 0;
}
