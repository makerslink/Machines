#include <avr/pgmspace.h>
#include "Configuration_prusa.h"
#include "language_all.h"

#define LCD_WIDTH 20
extern unsigned char lang_selected;

const char MSG_ACTIVE_EXTRUDER_EN[] PROGMEM = "Active Extruder: ";
const char * const MSG_ACTIVE_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_ACTIVE_EXTRUDER_EN
};

const char MSG_ADJUSTZ_EN[] PROGMEM = "Auto adjust Z ?";
const char MSG_ADJUSTZ_CZ[] PROGMEM = "Auto doladit Z ?";
const char MSG_ADJUSTZ_IT[] PROGMEM = "Autoregolare Z?";
const char MSG_ADJUSTZ_ES[] PROGMEM = "Auto Micropaso Z?";
const char MSG_ADJUSTZ_PL[] PROGMEM = "Autodostroic Z?";
const char * const MSG_ADJUSTZ_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_ADJUSTZ_EN,
	MSG_ADJUSTZ_CZ,
	MSG_ADJUSTZ_IT,
	MSG_ADJUSTZ_ES,
	MSG_ADJUSTZ_PL
};

const char MSG_AMAX_EN[] PROGMEM = "Amax ";
const char * const MSG_AMAX_LANG_TABLE[1] PROGMEM = {
	MSG_AMAX_EN
};

const char MSG_AUTHOR_EN[] PROGMEM = " | Author: ";
const char * const MSG_AUTHOR_LANG_TABLE[1] PROGMEM = {
	MSG_AUTHOR_EN
};

const char MSG_AUTO_HOME_EN[] PROGMEM = "Auto home";
const char MSG_AUTO_HOME_IT[] PROGMEM = "Trova origine";
const char MSG_AUTO_HOME_ES[] PROGMEM = "Llevar al origen";
const char * const MSG_AUTO_HOME_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_AUTO_HOME_EN,
	MSG_AUTO_HOME_EN,
	MSG_AUTO_HOME_IT,
	MSG_AUTO_HOME_ES,
	MSG_AUTO_HOME_EN
};

const char MSG_A_RETRACT_EN[] PROGMEM = "A-retract";
const char * const MSG_A_RETRACT_LANG_TABLE[1] PROGMEM = {
	MSG_A_RETRACT_EN
};

const char MSG_BABYSTEPPING_X_EN[] PROGMEM = "Babystepping X";
const char * const MSG_BABYSTEPPING_X_LANG_TABLE[1] PROGMEM = {
	MSG_BABYSTEPPING_X_EN
};

const char MSG_BABYSTEPPING_Y_EN[] PROGMEM = "Babystepping Y";
const char * const MSG_BABYSTEPPING_Y_LANG_TABLE[1] PROGMEM = {
	MSG_BABYSTEPPING_Y_EN
};

const char MSG_BABYSTEPPING_Z_EN[] PROGMEM = "Adjusting Z";
const char * const MSG_BABYSTEPPING_Z_LANG_TABLE[1] PROGMEM = {
	MSG_BABYSTEPPING_Z_EN
};

const char MSG_BABYSTEP_X_EN[] PROGMEM = "Babystep X";
const char * const MSG_BABYSTEP_X_LANG_TABLE[1] PROGMEM = {
	MSG_BABYSTEP_X_EN
};

const char MSG_BABYSTEP_Y_EN[] PROGMEM = "Babystep Y";
const char * const MSG_BABYSTEP_Y_LANG_TABLE[1] PROGMEM = {
	MSG_BABYSTEP_Y_EN
};

const char MSG_BABYSTEP_Z_EN[] PROGMEM = "Live adjust Z";
const char MSG_BABYSTEP_Z_CZ[] PROGMEM = "Doladeni osy Z";
const char MSG_BABYSTEP_Z_IT[] PROGMEM = "Compensazione Z";
const char MSG_BABYSTEP_Z_ES[] PROGMEM = "Micropaso Z";
const char MSG_BABYSTEP_Z_PL[] PROGMEM = "Dostrojenie osy Z";
const char * const MSG_BABYSTEP_Z_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BABYSTEP_Z_EN,
	MSG_BABYSTEP_Z_CZ,
	MSG_BABYSTEP_Z_IT,
	MSG_BABYSTEP_Z_ES,
	MSG_BABYSTEP_Z_PL
};

const char MSG_BABYSTEP_Z_NOT_SET_EN[] PROGMEM = "Distance between tip of the nozzle and the bed surface has not been set yet. Please follow the manual, chapter First steps, section First layer calibration.";
const char MSG_BABYSTEP_Z_NOT_SET_CZ[] PROGMEM = "Neni zkalibrovana vzdalenost trysky od tiskove podlozky. Postupujte prosim podle manualu, kapitola Zaciname, odstavec Nastaveni prvni vrstvy.";
const char MSG_BABYSTEP_Z_NOT_SET_IT[] PROGMEM = "Distanza tra la punta dell'ugello e la superficie del letto non ancora imposta. Si prega di seguire il manuale, capitolo First steps, sezione First layer calibration.";
const char MSG_BABYSTEP_Z_NOT_SET_ES[] PROGMEM = "Distancia entre la punta de la boquilla y la superficie de la cama no fijada aun. Por favor siga el manual, capitulo First steps, seccion First layer calibration.";
const char MSG_BABYSTEP_Z_NOT_SET_PL[] PROGMEM = "Odleglosc dyszy od podkladki nie jest skalibrowana. Postepuj zgodnie z instrukcja rozdzial Zaczynamy, podrozdzial Kalibracja pierwszej warstwy.";
const char * const MSG_BABYSTEP_Z_NOT_SET_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BABYSTEP_Z_NOT_SET_EN,
	MSG_BABYSTEP_Z_NOT_SET_CZ,
	MSG_BABYSTEP_Z_NOT_SET_IT,
	MSG_BABYSTEP_Z_NOT_SET_ES,
	MSG_BABYSTEP_Z_NOT_SET_PL
};

const char MSG_BED_EN[] PROGMEM = "Bed";
const char MSG_BED_IT[] PROGMEM = "Letto";
const char MSG_BED_ES[] PROGMEM = "Base";
const char MSG_BED_PL[] PROGMEM = "Stolik";
const char * const MSG_BED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_EN,
	MSG_BED_EN,
	MSG_BED_IT,
	MSG_BED_ES,
	MSG_BED_PL
};

const char MSG_BED_CORRECTION_FRONT_EN[] PROGMEM = "Front side um";
const char MSG_BED_CORRECTION_FRONT_CZ[] PROGMEM = "Vpredu [um]";
const char MSG_BED_CORRECTION_FRONT_IT[] PROGMEM = "Lato ateriore um";
const char MSG_BED_CORRECTION_FRONT_ES[] PROGMEM = "Adelante  [um]";
const char MSG_BED_CORRECTION_FRONT_PL[] PROGMEM = "Do przodu [um]";
const char * const MSG_BED_CORRECTION_FRONT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_CORRECTION_FRONT_EN,
	MSG_BED_CORRECTION_FRONT_CZ,
	MSG_BED_CORRECTION_FRONT_IT,
	MSG_BED_CORRECTION_FRONT_ES,
	MSG_BED_CORRECTION_FRONT_PL
};

const char MSG_BED_CORRECTION_LEFT_EN[] PROGMEM = "Left side  um";
const char MSG_BED_CORRECTION_LEFT_CZ[] PROGMEM = "Vlevo  [um]";
const char MSG_BED_CORRECTION_LEFT_IT[] PROGMEM = "Lato sinistro um";
const char MSG_BED_CORRECTION_LEFT_ES[] PROGMEM = "Izquierda [um]";
const char MSG_BED_CORRECTION_LEFT_PL[] PROGMEM = "W lewo  [um]";
const char * const MSG_BED_CORRECTION_LEFT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_CORRECTION_LEFT_EN,
	MSG_BED_CORRECTION_LEFT_CZ,
	MSG_BED_CORRECTION_LEFT_IT,
	MSG_BED_CORRECTION_LEFT_ES,
	MSG_BED_CORRECTION_LEFT_PL
};

const char MSG_BED_CORRECTION_MENU_EN[] PROGMEM = "Bed level correct";
const char MSG_BED_CORRECTION_MENU_CZ[] PROGMEM = "Korekce podlozky";
const char MSG_BED_CORRECTION_MENU_IT[] PROGMEM = "Correz. liv.letto";
const char MSG_BED_CORRECTION_MENU_ES[] PROGMEM = "Corr. de la cama";
const char MSG_BED_CORRECTION_MENU_PL[] PROGMEM = "Korekta podkladki";
const char * const MSG_BED_CORRECTION_MENU_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_CORRECTION_MENU_EN,
	MSG_BED_CORRECTION_MENU_CZ,
	MSG_BED_CORRECTION_MENU_IT,
	MSG_BED_CORRECTION_MENU_ES,
	MSG_BED_CORRECTION_MENU_PL
};

const char MSG_BED_CORRECTION_REAR_EN[] PROGMEM = "Rear side  um";
const char MSG_BED_CORRECTION_REAR_CZ[] PROGMEM = "Vzadu  [um]";
const char MSG_BED_CORRECTION_REAR_IT[] PROGMEM = "Lato posteriore";
const char MSG_BED_CORRECTION_REAR_ES[] PROGMEM = "Atras     [um]";
const char MSG_BED_CORRECTION_REAR_PL[] PROGMEM = "Do tylu  [um]";
const char * const MSG_BED_CORRECTION_REAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_CORRECTION_REAR_EN,
	MSG_BED_CORRECTION_REAR_CZ,
	MSG_BED_CORRECTION_REAR_IT,
	MSG_BED_CORRECTION_REAR_ES,
	MSG_BED_CORRECTION_REAR_PL
};

const char MSG_BED_CORRECTION_RESET_EN[] PROGMEM = "Reset";
const char * const MSG_BED_CORRECTION_RESET_LANG_TABLE[1] PROGMEM = {
	MSG_BED_CORRECTION_RESET_EN
};

const char MSG_BED_CORRECTION_RIGHT_EN[] PROGMEM = "Right side um";
const char MSG_BED_CORRECTION_RIGHT_CZ[] PROGMEM = "Vpravo [um]";
const char MSG_BED_CORRECTION_RIGHT_IT[] PROGMEM = "Lato destro um";
const char MSG_BED_CORRECTION_RIGHT_ES[] PROGMEM = "Derecha   [um]";
const char MSG_BED_CORRECTION_RIGHT_PL[] PROGMEM = "W prawo [um]";
const char * const MSG_BED_CORRECTION_RIGHT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_CORRECTION_RIGHT_EN,
	MSG_BED_CORRECTION_RIGHT_CZ,
	MSG_BED_CORRECTION_RIGHT_IT,
	MSG_BED_CORRECTION_RIGHT_ES,
	MSG_BED_CORRECTION_RIGHT_PL
};

const char MSG_BED_DONE_EN[] PROGMEM = "Bed done";
const char MSG_BED_DONE_CZ[] PROGMEM = "Bed OK.";
const char MSG_BED_DONE_IT[] PROGMEM = "Piatto fatto.";
const char MSG_BED_DONE_ES[] PROGMEM = "Base listo.";
const char MSG_BED_DONE_PL[] PROGMEM = "Stolik OK.";
const char * const MSG_BED_DONE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_DONE_EN,
	MSG_BED_DONE_CZ,
	MSG_BED_DONE_IT,
	MSG_BED_DONE_ES,
	MSG_BED_DONE_PL
};

const char MSG_BED_HEATING_EN[] PROGMEM = "Bed Heating";
const char MSG_BED_HEATING_CZ[] PROGMEM = "Zahrivani bed";
const char MSG_BED_HEATING_IT[] PROGMEM = "Piatto riscaldam.";
const char MSG_BED_HEATING_ES[] PROGMEM = "Base Calentando";
const char MSG_BED_HEATING_PL[] PROGMEM = "Grzanie stolika..";
const char * const MSG_BED_HEATING_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_HEATING_EN,
	MSG_BED_HEATING_CZ,
	MSG_BED_HEATING_IT,
	MSG_BED_HEATING_ES,
	MSG_BED_HEATING_PL
};

const char MSG_BED_LEVELING_FAILED_POINT_HIGH_EN[] PROGMEM = "Bed leveling failed. Sensor triggered too high. Waiting for reset.";
const char MSG_BED_LEVELING_FAILED_POINT_HIGH_CZ[] PROGMEM = "Kalibrace Z selhala. Sensor sepnul prilis vysoko. Cekam na reset.";
const char MSG_BED_LEVELING_FAILED_POINT_HIGH_IT[] PROGMEM = "Livellamento letto fallito.Risp sensore troppo prestoIn attesa di reset.";
const char MSG_BED_LEVELING_FAILED_POINT_HIGH_ES[] PROGMEM = "Nivelacion fallada. Sensor funciona demasiado temprano. Esperando reset.";
const char MSG_BED_LEVELING_FAILED_POINT_HIGH_PL[] PROGMEM = "Kalibracja Z nieudana. Sensor dotk. za wysoko. Czekam na reset.";
const char * const MSG_BED_LEVELING_FAILED_POINT_HIGH_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_LEVELING_FAILED_POINT_HIGH_EN,
	MSG_BED_LEVELING_FAILED_POINT_HIGH_CZ,
	MSG_BED_LEVELING_FAILED_POINT_HIGH_IT,
	MSG_BED_LEVELING_FAILED_POINT_HIGH_ES,
	MSG_BED_LEVELING_FAILED_POINT_HIGH_PL
};

const char MSG_BED_LEVELING_FAILED_POINT_LOW_EN[] PROGMEM = "Bed leveling failed. Sensor didnt trigger. Debris on nozzle? Waiting for reset.";
const char MSG_BED_LEVELING_FAILED_POINT_LOW_CZ[] PROGMEM = "Kalibrace Z selhala. Sensor nesepnul. Znecistena tryska? Cekam na reset.";
const char MSG_BED_LEVELING_FAILED_POINT_LOW_IT[] PROGMEM = "Livellamento letto fallito.NoRispSensor Residui su ugello? In attesa di reset.";
const char MSG_BED_LEVELING_FAILED_POINT_LOW_ES[] PROGMEM = "Nivelacion fallada. Sensor no funciona. Escombros en Boqui.? Esperando reset.";
const char MSG_BED_LEVELING_FAILED_POINT_LOW_PL[] PROGMEM = "Kalibracja nieudana. Sensor nie dotknal. Zanieczysz. dysza? Czekam na reset.";
const char * const MSG_BED_LEVELING_FAILED_POINT_LOW_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_LEVELING_FAILED_POINT_LOW_EN,
	MSG_BED_LEVELING_FAILED_POINT_LOW_CZ,
	MSG_BED_LEVELING_FAILED_POINT_LOW_IT,
	MSG_BED_LEVELING_FAILED_POINT_LOW_ES,
	MSG_BED_LEVELING_FAILED_POINT_LOW_PL
};

const char MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_EN[] PROGMEM = "Bed leveling failed. Sensor disconnected or cable broken. Waiting for reset.";
const char MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_CZ[] PROGMEM = "Kalibrace Z selhala. Sensor je odpojeny nebo preruseny kabel. Cekam na reset.";
const char MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_IT[] PROGMEM = "Livellamento letto fallito. Sensore discon. o Cavo Dann. In attesa di reset.";
const char MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_ES[] PROGMEM = "Nivelacion fallada. Sensor desconectado o cables danados. Esperando reset.";
const char MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_PL[] PROGMEM = "Kalibracja nieudana. Sensor odlaczony lub uszkodz. kabel. Czekam na reset.";
const char * const MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_EN,
	MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_CZ,
	MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_IT,
	MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_ES,
	MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_EN[] PROGMEM = "XYZ calibration failed. Front calibration points not reachable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_CZ[] PROGMEM = "Kalibrace XYZ selhala. Predni kalibracni body moc vpredu. Srovnejte tiskarnu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_IT[] PROGMEM = "Calibrazione XYZ fallita. Punti anteriori non raggiungibili.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_ES[] PROGMEM = "Calibracion XYZ fallad. Punto delanteros no alcanzables.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_PL[] PROGMEM = "Kalibr. XYZ nieudana. Przed. punkty kalibr. zbyt do przodu. Wyrownac drukarke.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_EN[] PROGMEM = "XYZ calibration failed. Left front calibration point not reachable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_CZ[] PROGMEM = "Kalibrace XYZ selhala. Levy predni bod moc vpredu. Srovnejte tiskarnu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_IT[] PROGMEM = "Calibrazione XYZ fallita. Punto anteriore sinistro non raggiungibile.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_ES[] PROGMEM = "Calibracion XYZ fallad. Punto delantero izquierdo no alcanzable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_PL[] PROGMEM = "Kalibr. XYZ nieudana. Lewy przedni punkt zbyt do przodu. Wyrownac drukarke.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_EN[] PROGMEM = "XYZ calibration failed. Right front calibration point not reachable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_CZ[] PROGMEM = "Kalibrace XYZ selhala. Pravy predni bod moc vpredu. Srovnejte tiskarnu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_IT[] PROGMEM = "Calibrazione XYZ fallita. Punto anteriore destro non raggiungibile.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_ES[] PROGMEM = "Calibracion XYZ fallad. Punto delantero derecho no alcanzable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_PL[] PROGMEM = "Kalibr. XYZ nieudana. Prawy przedni punkt zbyt do przodu. Wyrownac drukarke.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_EN[] PROGMEM = "XYZ calibration failed. Please consult the manual.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_CZ[] PROGMEM = "Kalibrace XYZ selhala. Nahlednete do manualu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_IT[] PROGMEM = "Calibrazione XYZ fallita. Si prega di consultare il manuale.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_ES[] PROGMEM = "Calibracion XYZ fallada. Consultar el manual por favor.";
const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_PL[] PROGMEM = "Kalibracja XYZ niepowiedziona. Sprawdzic w instrukcji.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_EN[] PROGMEM = "XYZ calibration ok. X/Y axes are perpendicular. Congratulations!";
const char MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_CZ[] PROGMEM = "Kalibrace XYZ v poradku. X/Y osy jsou kolme. Gratuluji!";
const char MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_IT[] PROGMEM = "Calibrazione XYZ OK. Gli assi X/Y sono perpendicolari. Complimenti!";
const char MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_ES[] PROGMEM = "Calibracion XYZ ok. Ejes X/Y perpendiculares. Felicitaciones!";
const char MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_PL[] PROGMEM = "Kalibracja XYZ ok. Osie X/Y sa prostopadle. Gratulacje!";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_PERFECT_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_EN[] PROGMEM = "XYZ calibration failed. Bed calibration point was not found.";
const char MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_CZ[] PROGMEM = "Kalibrace XYZ selhala. Kalibracni bod podlozky nenalezen.";
const char MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_IT[] PROGMEM = "Calibrazione XYZ fallita. Il punto di calibrazione sul letto non e' stato trovato.";
const char MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_ES[] PROGMEM = "Calibracion XYZ fallada. Puntos de calibracion en la cama no encontrados.";
const char MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_PL[] PROGMEM = "Kalibr. XYZ nieudana. Kalibracyjny punkt podkladki nieznaleziony.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_EN[] PROGMEM = "X/Y skewed severly. Skew will be corrected automatically.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_CZ[] PROGMEM = "X/Y osy jsou silne zkosene. Zkoseni bude automaticky vyrovnano pri tisku.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_IT[] PROGMEM = "X/Y fortemente distorto. La distorsione verra' corretta automaticamente.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_ES[] PROGMEM = "X/Y muy distorsionado. La distorsion sera corregida automaticamente.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_PL[] PROGMEM = "Osie X/Y sa mocno skosne. Skos bedzie aut. wyrownany przy druku.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_EN[] PROGMEM = "XYZ calibration all right. X/Y axes are slightly skewed.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_CZ[] PROGMEM = "Kalibrace XYZ v poradku. X/Y osy mirne zkosene.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_IT[] PROGMEM = "Calibrazione XYZ compiuta. Gli assi X/Y sono leggermente distorti.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_ES[] PROGMEM = "Calibracion XYZ conseguida. Ejes X/Y un poco torcidos.";
const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_PL[] PROGMEM = "Kalibracja XYZ w porzadku. Osie X/Y lekko skosne.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_EN[] PROGMEM = "XYZ calibration compromised. Front calibration points not reachable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_CZ[] PROGMEM = "Kalibrace XYZ nepresna. Predni kalibracni body moc vpredu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_IT[] PROGMEM = "Calibrazione XYZ compromessa. Punti anteriori non raggiungibili.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_ES[] PROGMEM = "Calibrazion XYZ comprometida. Punto delanteros no alcanzables.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_PL[] PROGMEM = "Kalibr. XYZ niedokladna. Przednie punkty kalibr. Zbyt wys. do przodu.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_EN[] PROGMEM = "XYZ calibration compromised. Left front calibration point not reachable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_CZ[] PROGMEM = "Kalibrace XYZ nepresna. Levy predni bod moc vpredu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_IT[] PROGMEM = "Calibrazione XYZ compromessa. Punto anteriore sinistro non raggiungibile.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_ES[] PROGMEM = "Calibrazion XYZ comprometida. Punto delantero izquierdo no alcanzable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_PL[] PROGMEM = "Kalibracja XYZ niedokladna. Lewy przedni punkt zbyt wysuniety do przodu.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR_PL
};

const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_EN[] PROGMEM = "XYZ calibration compromised. Right front calibration point not reachable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_CZ[] PROGMEM = "Kalibrace XYZ nepresna. Pravy predni bod moc vpredu.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_IT[] PROGMEM = "Calibrazione XYZ compromessa. Punto anteriore destro non raggiungibile.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_ES[] PROGMEM = "Calibrazion XYZ comprometida. Punto delantero derecho no alcanzable.";
const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_PL[] PROGMEM = "Kalibracja XYZ niedokladna. Prawy przedni punkt zbyt wysuniety do przodu.";
const char * const MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_EN,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_CZ,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_IT,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_ES,
	MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR_PL
};

const char MSG_BEGIN_FILE_LIST_EN[] PROGMEM = "Begin file list";
const char * const MSG_BEGIN_FILE_LIST_LANG_TABLE[1] PROGMEM = {
	MSG_BEGIN_FILE_LIST_EN
};

const char MSG_BROWNOUT_RESET_EN[] PROGMEM = " Brown out Reset";
const char * const MSG_BROWNOUT_RESET_LANG_TABLE[1] PROGMEM = {
	MSG_BROWNOUT_RESET_EN
};

const char MSG_CALIBRATE_BED_EN[] PROGMEM = "Calibrate XYZ";
const char MSG_CALIBRATE_BED_CZ[] PROGMEM = "Kalibrace XYZ";
const char MSG_CALIBRATE_BED_IT[] PROGMEM = "Calibra XYZ";
const char MSG_CALIBRATE_BED_ES[] PROGMEM = "Calibra XYZ";
const char MSG_CALIBRATE_BED_PL[] PROGMEM = "Kalibracja XYZ";
const char * const MSG_CALIBRATE_BED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CALIBRATE_BED_EN,
	MSG_CALIBRATE_BED_CZ,
	MSG_CALIBRATE_BED_IT,
	MSG_CALIBRATE_BED_ES,
	MSG_CALIBRATE_BED_PL
};

const char MSG_CALIBRATE_BED_RESET_EN[] PROGMEM = "Reset XYZ calibr.";
const char MSG_CALIBRATE_BED_RESET_CZ[] PROGMEM = "Reset XYZ kalibr.";
const char MSG_CALIBRATE_BED_RESET_PL[] PROGMEM = "Reset kalibr. XYZ";
const char * const MSG_CALIBRATE_BED_RESET_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CALIBRATE_BED_RESET_EN,
	MSG_CALIBRATE_BED_RESET_CZ,
	MSG_CALIBRATE_BED_RESET_EN,
	MSG_CALIBRATE_BED_RESET_EN,
	MSG_CALIBRATE_BED_RESET_PL
};

const char MSG_CARD_MENU_EN[] PROGMEM = "Print from SD";
const char MSG_CARD_MENU_CZ[] PROGMEM = "Tisk z SD";
const char MSG_CARD_MENU_IT[] PROGMEM = "Stampa da SD";
const char MSG_CARD_MENU_ES[] PROGMEM = "Menu de SD";
const char MSG_CARD_MENU_PL[] PROGMEM = "Druk z SD";
const char * const MSG_CARD_MENU_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CARD_MENU_EN,
	MSG_CARD_MENU_CZ,
	MSG_CARD_MENU_IT,
	MSG_CARD_MENU_ES,
	MSG_CARD_MENU_PL
};

const char MSG_CHANGE_SUCCESS_EN[] PROGMEM = "Change success!";
const char MSG_CHANGE_SUCCESS_CZ[] PROGMEM = "Zmena uspesna!";
const char MSG_CHANGE_SUCCESS_IT[] PROGMEM = "Cambia. riuscito!";
const char MSG_CHANGE_SUCCESS_ES[] PROGMEM = "Cambiar bien!";
const char MSG_CHANGE_SUCCESS_PL[] PROGMEM = "Wymiana ok!";
const char * const MSG_CHANGE_SUCCESS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CHANGE_SUCCESS_EN,
	MSG_CHANGE_SUCCESS_CZ,
	MSG_CHANGE_SUCCESS_IT,
	MSG_CHANGE_SUCCESS_ES,
	MSG_CHANGE_SUCCESS_PL
};

const char MSG_CHANGING_FILAMENT_EN[] PROGMEM = "Changing filament!";
const char MSG_CHANGING_FILAMENT_CZ[] PROGMEM = "Vymena filamentu!";
const char MSG_CHANGING_FILAMENT_IT[] PROGMEM = "Mutevole fil.!";
const char MSG_CHANGING_FILAMENT_ES[] PROGMEM = "Cambiando fil.!";
const char MSG_CHANGING_FILAMENT_PL[] PROGMEM = "Wymiana filamentu";
const char * const MSG_CHANGING_FILAMENT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CHANGING_FILAMENT_EN,
	MSG_CHANGING_FILAMENT_CZ,
	MSG_CHANGING_FILAMENT_IT,
	MSG_CHANGING_FILAMENT_ES,
	MSG_CHANGING_FILAMENT_PL
};

const char MSG_CNG_SDCARD_EN[] PROGMEM = "Change SD card";
const char * const MSG_CNG_SDCARD_LANG_TABLE[1] PROGMEM = {
	MSG_CNG_SDCARD_EN
};

const char MSG_CONFIGURATION_VER_EN[] PROGMEM = " Last Updated: ";
const char * const MSG_CONFIGURATION_VER_LANG_TABLE[1] PROGMEM = {
	MSG_CONFIGURATION_VER_EN
};

const char MSG_CONFIRM_CARRIAGE_AT_THE_TOP_EN[] PROGMEM = "Are left and right Z~carriages all up?";
const char MSG_CONFIRM_CARRIAGE_AT_THE_TOP_CZ[] PROGMEM = "Dojely oba Z voziky k~hornimu dorazu?";
const char MSG_CONFIRM_CARRIAGE_AT_THE_TOP_IT[] PROGMEM = "I carrelli Z sin/des sono altezza max?";
const char MSG_CONFIRM_CARRIAGE_AT_THE_TOP_ES[] PROGMEM = "Carros Z izq./der. estan arriba maximo?";
const char MSG_CONFIRM_CARRIAGE_AT_THE_TOP_PL[] PROGMEM = "Oba wozki dojechaly do gornej ramy?";
const char * const MSG_CONFIRM_CARRIAGE_AT_THE_TOP_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CONFIRM_CARRIAGE_AT_THE_TOP_EN,
	MSG_CONFIRM_CARRIAGE_AT_THE_TOP_CZ,
	MSG_CONFIRM_CARRIAGE_AT_THE_TOP_IT,
	MSG_CONFIRM_CARRIAGE_AT_THE_TOP_ES,
	MSG_CONFIRM_CARRIAGE_AT_THE_TOP_PL
};

const char MSG_CONFIRM_NOZZLE_CLEAN_EN[] PROGMEM = "Please clean the nozzle for calibration. Click when done.";
const char MSG_CONFIRM_NOZZLE_CLEAN_CZ[] PROGMEM = "Pro uspesnou kalibraci ocistete prosim tiskovou trysku. Potvrdte tlacitkem.";
const char MSG_CONFIRM_NOZZLE_CLEAN_IT[] PROGMEM = "Pulire l'ugello per la calibrazione, poi fare click.";
const char MSG_CONFIRM_NOZZLE_CLEAN_ES[] PROGMEM = "Limpiar boquilla para calibracion. Click cuando acabes.";
const char MSG_CONFIRM_NOZZLE_CLEAN_PL[] PROGMEM = "Dla prawidl. kalibracji prosze oczyscic dysze. Potw. guzikiem.";
const char * const MSG_CONFIRM_NOZZLE_CLEAN_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CONFIRM_NOZZLE_CLEAN_EN,
	MSG_CONFIRM_NOZZLE_CLEAN_CZ,
	MSG_CONFIRM_NOZZLE_CLEAN_IT,
	MSG_CONFIRM_NOZZLE_CLEAN_ES,
	MSG_CONFIRM_NOZZLE_CLEAN_PL
};

const char MSG_CONTROL_EN[] PROGMEM = "Control";
const char * const MSG_CONTROL_LANG_TABLE[1] PROGMEM = {
	MSG_CONTROL_EN
};

const char MSG_COOLDOWN_EN[] PROGMEM = "Cooldown";
const char MSG_COOLDOWN_CZ[] PROGMEM = "Zchladit";
const char MSG_COOLDOWN_IT[] PROGMEM = "Raffredda";
const char MSG_COOLDOWN_ES[] PROGMEM = "Enfriar";
const char MSG_COOLDOWN_PL[] PROGMEM = "Wychlodzic";
const char * const MSG_COOLDOWN_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_COOLDOWN_EN,
	MSG_COOLDOWN_CZ,
	MSG_COOLDOWN_IT,
	MSG_COOLDOWN_ES,
	MSG_COOLDOWN_PL
};

const char MSG_CORRECTLY_EN[] PROGMEM = "Changed correctly?";
const char MSG_CORRECTLY_CZ[] PROGMEM = "Vymena ok?";
const char MSG_CORRECTLY_IT[] PROGMEM = "Cambiato corr.?";
const char MSG_CORRECTLY_ES[] PROGMEM = "Cambiado correc.?";
const char MSG_CORRECTLY_PL[] PROGMEM = "Wymiana ok?";
const char * const MSG_CORRECTLY_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_CORRECTLY_EN,
	MSG_CORRECTLY_CZ,
	MSG_CORRECTLY_IT,
	MSG_CORRECTLY_ES,
	MSG_CORRECTLY_PL
};

const char MSG_COUNT_X_EN[] PROGMEM = " Count X: ";
const char * const MSG_COUNT_X_LANG_TABLE[1] PROGMEM = {
	MSG_COUNT_X_EN
};

const char MSG_DISABLE_STEPPERS_EN[] PROGMEM = "Disable steppers";
const char MSG_DISABLE_STEPPERS_CZ[] PROGMEM = "Vypnout motory";
const char MSG_DISABLE_STEPPERS_IT[] PROGMEM = "Disabilit motori";
const char MSG_DISABLE_STEPPERS_ES[] PROGMEM = "Apagar motores";
const char MSG_DISABLE_STEPPERS_PL[] PROGMEM = "Wylaczyc silniki";
const char * const MSG_DISABLE_STEPPERS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_DISABLE_STEPPERS_EN,
	MSG_DISABLE_STEPPERS_CZ,
	MSG_DISABLE_STEPPERS_IT,
	MSG_DISABLE_STEPPERS_ES,
	MSG_DISABLE_STEPPERS_PL
};

const char MSG_DWELL_EN[] PROGMEM = "Sleep...";
const char MSG_DWELL_IT[] PROGMEM = "Sospensione...";
const char MSG_DWELL_ES[] PROGMEM = "Reposo...";
const char * const MSG_DWELL_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_DWELL_EN,
	MSG_DWELL_EN,
	MSG_DWELL_IT,
	MSG_DWELL_ES,
	MSG_DWELL_EN
};

const char MSG_ENDSTOPS_HIT_EN[] PROGMEM = "endstops hit: ";
const char * const MSG_ENDSTOPS_HIT_LANG_TABLE[1] PROGMEM = {
	MSG_ENDSTOPS_HIT_EN
};

const char MSG_ENDSTOP_HIT_EN[] PROGMEM = "TRIGGERED";
const char * const MSG_ENDSTOP_HIT_LANG_TABLE[1] PROGMEM = {
	MSG_ENDSTOP_HIT_EN
};

const char MSG_ENDSTOP_OPEN_EN[] PROGMEM = "open";
const char * const MSG_ENDSTOP_OPEN_LANG_TABLE[1] PROGMEM = {
	MSG_ENDSTOP_OPEN_EN
};

const char MSG_END_FILE_LIST_EN[] PROGMEM = "End file list";
const char * const MSG_END_FILE_LIST_LANG_TABLE[1] PROGMEM = {
	MSG_END_FILE_LIST_EN
};

const char MSG_ERROR_EN[] PROGMEM = "ERROR:";
const char MSG_ERROR_CZ[] PROGMEM = "CHYBA:";
const char MSG_ERROR_PL[] PROGMEM = "BLAD:";
const char * const MSG_ERROR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_ERROR_EN,
	MSG_ERROR_CZ,
	MSG_ERROR_EN,
	MSG_ERROR_EN,
	MSG_ERROR_PL
};

const char MSG_ERR_CHECKSUM_MISMATCH_EN[] PROGMEM = "checksum mismatch, Last Line: ";
const char * const MSG_ERR_CHECKSUM_MISMATCH_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_CHECKSUM_MISMATCH_EN
};

const char MSG_ERR_COLD_EXTRUDE_STOP_EN[] PROGMEM = " cold extrusion prevented";
const char * const MSG_ERR_COLD_EXTRUDE_STOP_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_COLD_EXTRUDE_STOP_EN
};

const char MSG_ERR_KILLED_EN[] PROGMEM = "Printer halted. kill() called!";
const char * const MSG_ERR_KILLED_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_KILLED_EN
};

const char MSG_ERR_LINE_NO_EN[] PROGMEM = "Line Number is not Last Line Number+1, Last Line: ";
const char * const MSG_ERR_LINE_NO_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_LINE_NO_EN
};

const char MSG_ERR_LONG_EXTRUDE_STOP_EN[] PROGMEM = " too long extrusion prevented";
const char * const MSG_ERR_LONG_EXTRUDE_STOP_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_LONG_EXTRUDE_STOP_EN
};

const char MSG_ERR_NO_CHECKSUM_EN[] PROGMEM = "No Checksum with line number, Last Line: ";
const char * const MSG_ERR_NO_CHECKSUM_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_NO_CHECKSUM_EN
};

const char MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM_EN[] PROGMEM = "No Line Number with checksum, Last Line: ";
const char * const MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM_EN
};

const char MSG_ERR_NO_THERMISTORS_EN[] PROGMEM = "No thermistors - no temperature";
const char * const MSG_ERR_NO_THERMISTORS_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_NO_THERMISTORS_EN
};

const char MSG_ERR_STOPPED_EN[] PROGMEM = "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)";
const char * const MSG_ERR_STOPPED_LANG_TABLE[1] PROGMEM = {
	MSG_ERR_STOPPED_EN
};

const char MSG_EXTERNAL_RESET_EN[] PROGMEM = " External Reset";
const char * const MSG_EXTERNAL_RESET_LANG_TABLE[1] PROGMEM = {
	MSG_EXTERNAL_RESET_EN
};

const char MSG_Enqueing_EN[] PROGMEM = "enqueing \"";
const char * const MSG_Enqueing_LANG_TABLE[1] PROGMEM = {
	MSG_Enqueing_EN
};

const char MSG_FACTOR_EN[] PROGMEM = " \002 Fact";
const char * const MSG_FACTOR_LANG_TABLE[1] PROGMEM = {
	MSG_FACTOR_EN
};

const char MSG_FAN_SPEED_EN[] PROGMEM = "Fan speed";
const char MSG_FAN_SPEED_CZ[] PROGMEM = "Rychlost vent.";
const char MSG_FAN_SPEED_IT[] PROGMEM = "Velocita ventola";
const char MSG_FAN_SPEED_ES[] PROGMEM = "Ventilador";
const char MSG_FAN_SPEED_PL[] PROGMEM = "Predkosc went.";
const char * const MSG_FAN_SPEED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_FAN_SPEED_EN,
	MSG_FAN_SPEED_CZ,
	MSG_FAN_SPEED_IT,
	MSG_FAN_SPEED_ES,
	MSG_FAN_SPEED_PL
};

const char MSG_FILAMENTCHANGE_EN[] PROGMEM = "Change filament";
const char MSG_FILAMENTCHANGE_CZ[] PROGMEM = "Vymenit filament";
const char MSG_FILAMENTCHANGE_IT[] PROGMEM = "Camb. filamento";
const char MSG_FILAMENTCHANGE_ES[] PROGMEM = "Cambiar filamento";
const char MSG_FILAMENTCHANGE_PL[] PROGMEM = "Wymienic filament";
const char * const MSG_FILAMENTCHANGE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_FILAMENTCHANGE_EN,
	MSG_FILAMENTCHANGE_CZ,
	MSG_FILAMENTCHANGE_IT,
	MSG_FILAMENTCHANGE_ES,
	MSG_FILAMENTCHANGE_PL
};

const char MSG_FILE_PRINTED_EN[] PROGMEM = "Done printing file";
const char * const MSG_FILE_PRINTED_LANG_TABLE[1] PROGMEM = {
	MSG_FILE_PRINTED_EN
};

const char MSG_FILE_SAVED_EN[] PROGMEM = "Done saving file.";
const char * const MSG_FILE_SAVED_LANG_TABLE[1] PROGMEM = {
	MSG_FILE_SAVED_EN
};

const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_EN[] PROGMEM = "Searching bed calibration point";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_CZ[] PROGMEM = "Hledam kalibracni bod podlozky";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_IT[] PROGMEM = "Ricerca del letto punto di calibraz.";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_ES[] PROGMEM = "Buscando cama punto de calibracion";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_PL[] PROGMEM = "Szukam punktu kalibracyjnego podkladki";
const char * const MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_EN,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_CZ,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_IT,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_ES,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE1_PL
};

const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_EN[] PROGMEM = " of 4";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_CZ[] PROGMEM = " z 4";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_IT[] PROGMEM = " su 4";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_ES[] PROGMEM = " de 4";
const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_PL[] PROGMEM = " z 4";
const char * const MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_EN,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_CZ,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_IT,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_ES,
	MSG_FIND_BED_OFFSET_AND_SKEW_LINE2_PL
};

const char MSG_FLOW_EN[] PROGMEM = "Flow";
const char MSG_FLOW_CZ[] PROGMEM = "Prutok";
const char MSG_FLOW_IT[] PROGMEM = "Flusso";
const char MSG_FLOW_ES[] PROGMEM = "Flujo";
const char MSG_FLOW_PL[] PROGMEM = "Przeplyw";
const char * const MSG_FLOW_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_FLOW_EN,
	MSG_FLOW_CZ,
	MSG_FLOW_IT,
	MSG_FLOW_ES,
	MSG_FLOW_PL
};

const char MSG_FLOW0_EN[] PROGMEM = "Flow 0";
const char * const MSG_FLOW0_LANG_TABLE[1] PROGMEM = {
	MSG_FLOW0_EN
};

const char MSG_FLOW1_EN[] PROGMEM = "Flow 1";
const char * const MSG_FLOW1_LANG_TABLE[1] PROGMEM = {
	MSG_FLOW1_EN
};

const char MSG_FLOW2_EN[] PROGMEM = "Flow 2";
const char * const MSG_FLOW2_LANG_TABLE[1] PROGMEM = {
	MSG_FLOW2_EN
};

const char MSG_FOLLOW_CALIBRATION_FLOW_EN[] PROGMEM = "Printer has not been calibrated yet. Please follow the manual, chapter First steps, section Calibration flow.";
const char MSG_FOLLOW_CALIBRATION_FLOW_CZ[] PROGMEM = "Tiskarna nebyla jeste zkalibrovana. Postupujte prosim podle manualu, kapitola Zaciname, odstavec Postup kalibrace.";
const char MSG_FOLLOW_CALIBRATION_FLOW_IT[] PROGMEM = "Stampante ancora non calibrata. Si prega di seguire il manuale, capitolo PRIMI PASSI, sezione della calibrazione.";
const char MSG_FOLLOW_CALIBRATION_FLOW_ES[] PROGMEM = "Impresora no esta calibrada todavia. Por favor usar el manual, el capitulo First steps, seleccion Calibration flow.";
const char MSG_FOLLOW_CALIBRATION_FLOW_PL[] PROGMEM = "Drukarka nie zostala jeszcze skalibrowana. Prosze kierowac sie instrukcja, rozdzial Zaczynamy, podrozdzial Selftest.";
const char * const MSG_FOLLOW_CALIBRATION_FLOW_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_FOLLOW_CALIBRATION_FLOW_EN,
	MSG_FOLLOW_CALIBRATION_FLOW_CZ,
	MSG_FOLLOW_CALIBRATION_FLOW_IT,
	MSG_FOLLOW_CALIBRATION_FLOW_ES,
	MSG_FOLLOW_CALIBRATION_FLOW_PL
};

const char MSG_FREE_MEMORY_EN[] PROGMEM = " Free Memory: ";
const char * const MSG_FREE_MEMORY_LANG_TABLE[1] PROGMEM = {
	MSG_FREE_MEMORY_EN
};

const char MSG_HEATING_EN[] PROGMEM = "Heating";
const char MSG_HEATING_CZ[] PROGMEM = "Zahrivani";
const char MSG_HEATING_IT[] PROGMEM = "Riscaldamento...";
const char MSG_HEATING_ES[] PROGMEM = "Calentando...";
const char MSG_HEATING_PL[] PROGMEM = "Grzanie...";
const char * const MSG_HEATING_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_HEATING_EN,
	MSG_HEATING_CZ,
	MSG_HEATING_IT,
	MSG_HEATING_ES,
	MSG_HEATING_PL
};

const char MSG_HEATING_COMPLETE_EN[] PROGMEM = "Heating done.";
const char MSG_HEATING_COMPLETE_CZ[] PROGMEM = "Zahrivani OK.";
const char MSG_HEATING_COMPLETE_IT[] PROGMEM = "Riscaldamento fatto.";
const char MSG_HEATING_COMPLETE_ES[] PROGMEM = "Calentando listo.";
const char MSG_HEATING_COMPLETE_PL[] PROGMEM = "Grzanie OK.";
const char * const MSG_HEATING_COMPLETE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_HEATING_COMPLETE_EN,
	MSG_HEATING_COMPLETE_CZ,
	MSG_HEATING_COMPLETE_IT,
	MSG_HEATING_COMPLETE_ES,
	MSG_HEATING_COMPLETE_PL
};

const char MSG_HOMEYZ_EN[] PROGMEM = "Calibrate Z";
const char MSG_HOMEYZ_CZ[] PROGMEM = "Kalibrovat Z";
const char MSG_HOMEYZ_IT[] PROGMEM = "Calibra Z";
const char MSG_HOMEYZ_ES[] PROGMEM = "Calibrar Z";
const char MSG_HOMEYZ_PL[] PROGMEM = "Kalibruj Z";
const char * const MSG_HOMEYZ_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_HOMEYZ_EN,
	MSG_HOMEYZ_CZ,
	MSG_HOMEYZ_IT,
	MSG_HOMEYZ_ES,
	MSG_HOMEYZ_PL
};

const char MSG_HOMEYZ_DONE_EN[] PROGMEM = "Calibration done";
const char MSG_HOMEYZ_DONE_CZ[] PROGMEM = "Kalibrace OK";
const char MSG_HOMEYZ_DONE_IT[] PROGMEM = "Calibrazione OK";
const char MSG_HOMEYZ_DONE_ES[] PROGMEM = "Calibracion OK";
const char MSG_HOMEYZ_DONE_PL[] PROGMEM = "Kalibracja OK";
const char * const MSG_HOMEYZ_DONE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_HOMEYZ_DONE_EN,
	MSG_HOMEYZ_DONE_CZ,
	MSG_HOMEYZ_DONE_IT,
	MSG_HOMEYZ_DONE_ES,
	MSG_HOMEYZ_DONE_PL
};

const char MSG_HOMEYZ_PROGRESS_EN[] PROGMEM = "Calibrating Z";
const char MSG_HOMEYZ_PROGRESS_CZ[] PROGMEM = "Kalibruji Z";
const char MSG_HOMEYZ_PROGRESS_IT[] PROGMEM = "Calibrando Z";
const char MSG_HOMEYZ_PROGRESS_ES[] PROGMEM = "Calibrando Z";
const char MSG_HOMEYZ_PROGRESS_PL[] PROGMEM = "Kalibruje Z";
const char * const MSG_HOMEYZ_PROGRESS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_HOMEYZ_PROGRESS_EN,
	MSG_HOMEYZ_PROGRESS_CZ,
	MSG_HOMEYZ_PROGRESS_IT,
	MSG_HOMEYZ_PROGRESS_ES,
	MSG_HOMEYZ_PROGRESS_PL
};

const char MSG_HOTEND_OFFSET_EN[] PROGMEM = "Hotend offsets:";
const char * const MSG_HOTEND_OFFSET_LANG_TABLE[1] PROGMEM = {
	MSG_HOTEND_OFFSET_EN
};

const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_EN[] PROGMEM = "Improving bed calibration point";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_CZ[] PROGMEM = "Zlepsuji presnost kalibracniho bodu";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_IT[] PROGMEM = "Perfezion. il letto punto di calibraz.";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_ES[] PROGMEM = "Mejorando cama punto de calibracion";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_PL[] PROGMEM = "Poprawiam precyzyjnosc punktu kalibracyjnego";
const char * const MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_EN,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_CZ,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_IT,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_ES,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1_PL
};

const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_EN[] PROGMEM = " of 9";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_CZ[] PROGMEM = " z 9";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_IT[] PROGMEM = " su 9";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_ES[] PROGMEM = " de 9";
const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_PL[] PROGMEM = " z 9";
const char * const MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_EN,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_CZ,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_IT,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_ES,
	MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2_PL
};

const char MSG_INIT_SDCARD_EN[] PROGMEM = "Init. SD card";
const char * const MSG_INIT_SDCARD_LANG_TABLE[1] PROGMEM = {
	MSG_INIT_SDCARD_EN
};

const char MSG_INSERT_FILAMENT_EN[] PROGMEM = "Insert filament";
const char MSG_INSERT_FILAMENT_CZ[] PROGMEM = "Vlozte filament";
const char MSG_INSERT_FILAMENT_IT[] PROGMEM = "Inserire filamento";
const char MSG_INSERT_FILAMENT_ES[] PROGMEM = "Inserta filamento";
const char MSG_INSERT_FILAMENT_PL[] PROGMEM = "Wprowadz filament";
const char * const MSG_INSERT_FILAMENT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_INSERT_FILAMENT_EN,
	MSG_INSERT_FILAMENT_CZ,
	MSG_INSERT_FILAMENT_IT,
	MSG_INSERT_FILAMENT_ES,
	MSG_INSERT_FILAMENT_PL
};

const char MSG_INVALID_EXTRUDER_EN[] PROGMEM = "Invalid extruder";
const char * const MSG_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_INVALID_EXTRUDER_EN
};

const char MSG_KILLED_EN[] PROGMEM = "KILLED. ";
const char MSG_KILLED_IT[] PROGMEM = "IN TILT.";
const char MSG_KILLED_ES[] PROGMEM = "PARADA DE EMERG.";
const char * const MSG_KILLED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_KILLED_EN,
	MSG_KILLED_EN,
	MSG_KILLED_IT,
	MSG_KILLED_ES,
	MSG_KILLED_EN
};

const char MSG_LANGUAGE_NAME_EN[] PROGMEM = "English";
const char MSG_LANGUAGE_NAME_CZ[] PROGMEM = "Cestina";
const char MSG_LANGUAGE_NAME_IT[] PROGMEM = "Italiano";
const char MSG_LANGUAGE_NAME_ES[] PROGMEM = "Espanol";
const char MSG_LANGUAGE_NAME_PL[] PROGMEM = "Polski";
const char * const MSG_LANGUAGE_NAME_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_LANGUAGE_NAME_EN,
	MSG_LANGUAGE_NAME_CZ,
	MSG_LANGUAGE_NAME_IT,
	MSG_LANGUAGE_NAME_ES,
	MSG_LANGUAGE_NAME_PL
};

const char MSG_LANGUAGE_SELECT_EN[] PROGMEM = "Select language";
const char MSG_LANGUAGE_SELECT_CZ[] PROGMEM = "Vyber jazyka";
const char MSG_LANGUAGE_SELECT_IT[] PROGMEM = "Seleziona lingua";
const char MSG_LANGUAGE_SELECT_ES[] PROGMEM = "Cambia la lengua ";
const char MSG_LANGUAGE_SELECT_PL[] PROGMEM = "Wybor jezyka";
const char * const MSG_LANGUAGE_SELECT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_LANGUAGE_SELECT_EN,
	MSG_LANGUAGE_SELECT_CZ,
	MSG_LANGUAGE_SELECT_IT,
	MSG_LANGUAGE_SELECT_ES,
	MSG_LANGUAGE_SELECT_PL
};

const char MSG_LOADING_COLOR_EN[] PROGMEM = "Loading color";
const char MSG_LOADING_COLOR_CZ[] PROGMEM = "Cisteni barvy";
const char MSG_LOADING_COLOR_IT[] PROGMEM = "Cargando color";
const char MSG_LOADING_COLOR_ES[] PROGMEM = "Cargando color";
const char MSG_LOADING_COLOR_PL[] PROGMEM = "Czyszcz. koloru";
const char * const MSG_LOADING_COLOR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_LOADING_COLOR_EN,
	MSG_LOADING_COLOR_CZ,
	MSG_LOADING_COLOR_IT,
	MSG_LOADING_COLOR_ES,
	MSG_LOADING_COLOR_PL
};

const char MSG_LOADING_FILAMENT_EN[] PROGMEM = "Loading filament";
const char MSG_LOADING_FILAMENT_CZ[] PROGMEM = "Zavadeni filamentu";
const char MSG_LOADING_FILAMENT_IT[] PROGMEM = "Cargando fil.";
const char MSG_LOADING_FILAMENT_ES[] PROGMEM = "Cargando fil.";
const char MSG_LOADING_FILAMENT_PL[] PROGMEM = "Wprow. filamentu";
const char * const MSG_LOADING_FILAMENT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_LOADING_FILAMENT_EN,
	MSG_LOADING_FILAMENT_CZ,
	MSG_LOADING_FILAMENT_IT,
	MSG_LOADING_FILAMENT_ES,
	MSG_LOADING_FILAMENT_PL
};

const char MSG_LOAD_EPROM_EN[] PROGMEM = "Load memory";
const char * const MSG_LOAD_EPROM_LANG_TABLE[1] PROGMEM = {
	MSG_LOAD_EPROM_EN
};

const char MSG_LOAD_FILAMENT_EN[] PROGMEM = "Load filament";
const char MSG_LOAD_FILAMENT_CZ[] PROGMEM = "Zavest filament";
const char MSG_LOAD_FILAMENT_IT[] PROGMEM = "Carica filamento";
const char MSG_LOAD_FILAMENT_ES[] PROGMEM = "Poner filamento";
const char MSG_LOAD_FILAMENT_PL[] PROGMEM = "Wprowadz filament";
const char * const MSG_LOAD_FILAMENT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_LOAD_FILAMENT_EN,
	MSG_LOAD_FILAMENT_CZ,
	MSG_LOAD_FILAMENT_IT,
	MSG_LOAD_FILAMENT_ES,
	MSG_LOAD_FILAMENT_PL
};

const char MSG_M104_INVALID_EXTRUDER_EN[] PROGMEM = "M104 Invalid extruder ";
const char * const MSG_M104_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_M104_INVALID_EXTRUDER_EN
};

const char MSG_M105_INVALID_EXTRUDER_EN[] PROGMEM = "M105 Invalid extruder ";
const char * const MSG_M105_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_M105_INVALID_EXTRUDER_EN
};

const char MSG_M109_INVALID_EXTRUDER_EN[] PROGMEM = "M109 Invalid extruder ";
const char * const MSG_M109_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_M109_INVALID_EXTRUDER_EN
};

const char MSG_M115_REPORT_EN[] PROGMEM = "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:https://github.com/prusa3d/Prusa-i3-Plus/ PROTOCOL_VERSION:1.0 MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:1 UUID:00000000-0000-0000-0000-000000000000\n";
const char * const MSG_M115_REPORT_LANG_TABLE[1] PROGMEM = {
	MSG_M115_REPORT_EN
};

const char MSG_M119_REPORT_EN[] PROGMEM = "Reporting endstop status";
const char * const MSG_M119_REPORT_LANG_TABLE[1] PROGMEM = {
	MSG_M119_REPORT_EN
};

const char MSG_M200_INVALID_EXTRUDER_EN[] PROGMEM = "M200 Invalid extruder ";
const char * const MSG_M200_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_M200_INVALID_EXTRUDER_EN
};

const char MSG_M218_INVALID_EXTRUDER_EN[] PROGMEM = "M218 Invalid extruder ";
const char * const MSG_M218_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_M218_INVALID_EXTRUDER_EN
};

const char MSG_M221_INVALID_EXTRUDER_EN[] PROGMEM = "M221 Invalid extruder ";
const char * const MSG_M221_INVALID_EXTRUDER_LANG_TABLE[1] PROGMEM = {
	MSG_M221_INVALID_EXTRUDER_EN
};

const char MSG_MAIN_EN[] PROGMEM = "Main";
const char MSG_MAIN_CZ[] PROGMEM = "Hlavni nabidka";
const char MSG_MAIN_IT[] PROGMEM = "Menu principale";
const char MSG_MAIN_ES[] PROGMEM = "Menu principal";
const char MSG_MAIN_PL[] PROGMEM = "Menu glowne";
const char * const MSG_MAIN_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MAIN_EN,
	MSG_MAIN_CZ,
	MSG_MAIN_IT,
	MSG_MAIN_ES,
	MSG_MAIN_PL
};

const char MSG_MAX_EN[] PROGMEM = " \002 Max";
const char * const MSG_MAX_LANG_TABLE[1] PROGMEM = {
	MSG_MAX_EN
};

const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_EN[] PROGMEM = "Measuring reference height of calibration point";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_CZ[] PROGMEM = "Merim referencni vysku kalibracniho bodu";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_IT[] PROGMEM = "Misurare l'altezza di riferimento del punto di calibrazione";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_ES[] PROGMEM = "Medir la altura del punto de la calibracion";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_PL[] PROGMEM = "Okreslam wysokosc odniesienia punktu kalibracyjnego";
const char * const MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_EN,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_CZ,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_IT,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_ES,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1_PL
};

const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_EN[] PROGMEM = " of 9";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_CZ[] PROGMEM = " z 9";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_IT[] PROGMEM = " su 9";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_ES[] PROGMEM = " de 9";
const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_PL[] PROGMEM = " z 9";
const char * const MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_EN,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_CZ,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_IT,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_ES,
	MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2_PL
};

const char MSG_MENU_CALIBRATION_EN[] PROGMEM = "Calibration";
const char MSG_MENU_CALIBRATION_CZ[] PROGMEM = "Kalibrace";
const char MSG_MENU_CALIBRATION_IT[] PROGMEM = "Calibrazione";
const char MSG_MENU_CALIBRATION_ES[] PROGMEM = "Calibracion";
const char MSG_MENU_CALIBRATION_PL[] PROGMEM = "Kalibracja";
const char * const MSG_MENU_CALIBRATION_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MENU_CALIBRATION_EN,
	MSG_MENU_CALIBRATION_CZ,
	MSG_MENU_CALIBRATION_IT,
	MSG_MENU_CALIBRATION_ES,
	MSG_MENU_CALIBRATION_PL
};

const char MSG_MESH_BED_LEVELING_EN[] PROGMEM = "Mesh Bed Leveling";
const char MSG_MESH_BED_LEVELING_IT[] PROGMEM = "Mesh livel. letto";
const char * const MSG_MESH_BED_LEVELING_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MESH_BED_LEVELING_EN,
	MSG_MESH_BED_LEVELING_EN,
	MSG_MESH_BED_LEVELING_IT,
	MSG_MESH_BED_LEVELING_EN,
	MSG_MESH_BED_LEVELING_EN
};

const char MSG_MIN_EN[] PROGMEM = " \002 Min";
const char * const MSG_MIN_LANG_TABLE[1] PROGMEM = {
	MSG_MIN_EN
};

const char MSG_MOTION_EN[] PROGMEM = "Motion";
const char * const MSG_MOTION_LANG_TABLE[1] PROGMEM = {
	MSG_MOTION_EN
};

const char MSG_MOVE_01MM_EN[] PROGMEM = "Move 0.1mm";
const char * const MSG_MOVE_01MM_LANG_TABLE[1] PROGMEM = {
	MSG_MOVE_01MM_EN
};

const char MSG_MOVE_10MM_EN[] PROGMEM = "Move 10mm";
const char * const MSG_MOVE_10MM_LANG_TABLE[1] PROGMEM = {
	MSG_MOVE_10MM_EN
};

const char MSG_MOVE_1MM_EN[] PROGMEM = "Move 1mm";
const char * const MSG_MOVE_1MM_LANG_TABLE[1] PROGMEM = {
	MSG_MOVE_1MM_EN
};

const char MSG_MOVE_AXIS_EN[] PROGMEM = "Move axis";
const char MSG_MOVE_AXIS_CZ[] PROGMEM = "Posunout osu";
const char MSG_MOVE_AXIS_IT[] PROGMEM = "Muovi asse";
const char MSG_MOVE_AXIS_ES[] PROGMEM = "Mover ejes";
const char MSG_MOVE_AXIS_PL[] PROGMEM = "Ruch osi";
const char * const MSG_MOVE_AXIS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_AXIS_EN,
	MSG_MOVE_AXIS_CZ,
	MSG_MOVE_AXIS_IT,
	MSG_MOVE_AXIS_ES,
	MSG_MOVE_AXIS_PL
};

const char MSG_MOVE_CARRIAGE_TO_THE_TOP_EN[] PROGMEM = "Calibrating XYZ. Rotate the knob to move the Z carriage up to the end stoppers. Click when done.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_CZ[] PROGMEM = "Kalibrace XYZ. Otacenim tlacitka posunte Z osu az k~hornimu dorazu. Potvrdte tlacitkem.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_IT[] PROGMEM = "Calibrazione XYZ. Ruotare la manopola per alzare il carrello Z fino all'altezza massima. Click per terminare.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_ES[] PROGMEM = "Calibrando XYZ. Gira el boton para subir el carro Z hasta golpe piezas superioras. Despues haz clic.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_PL[] PROGMEM = "Kalibracja XYZ. Przekrec galke, aby przesunac os Z do gornych krancowek. Nacisnij, by potwierdzic.";
const char * const MSG_MOVE_CARRIAGE_TO_THE_TOP_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_CARRIAGE_TO_THE_TOP_EN,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_CZ,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_IT,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_ES,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_PL
};

const char MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_EN[] PROGMEM = "Calibrating Z. Rotate the knob to move the Z carriage up to the end stoppers. Click when done.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_CZ[] PROGMEM = "Kalibrace Z. Otacenim tlacitka posunte Z osu az k~hornimu dorazu. Potvrdte tlacitkem.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_IT[] PROGMEM = "Calibrazione Z. Ruotare la manopola per alzare il carrello Z fino all'altezza massima. Click per terminare.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_ES[] PROGMEM = "Calibrando Z. Gira el boton para subir el carro Z hasta golpe piezas superioras. Despues haz clic.";
const char MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_PL[] PROGMEM = "Kalibracja Z. Przekrec galke, aby przesunac os Z do gornych krancowek. Nacisnij, by potwierdzic.";
const char * const MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_EN,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_CZ,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_IT,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_ES,
	MSG_MOVE_CARRIAGE_TO_THE_TOP_Z_PL
};

const char MSG_MOVE_E_EN[] PROGMEM = "Extruder";
const char MSG_MOVE_E_IT[] PROGMEM = "Muovi Estrusore";
const char MSG_MOVE_E_ES[] PROGMEM = "Extrusor";
const char * const MSG_MOVE_E_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_E_EN,
	MSG_MOVE_E_EN,
	MSG_MOVE_E_IT,
	MSG_MOVE_E_ES,
	MSG_MOVE_E_EN
};

const char MSG_MOVE_X_EN[] PROGMEM = "Move X";
const char MSG_MOVE_X_CZ[] PROGMEM = "Posunout X";
const char MSG_MOVE_X_IT[] PROGMEM = "Muovi X";
const char MSG_MOVE_X_ES[] PROGMEM = "Mover X";
const char MSG_MOVE_X_PL[] PROGMEM = "Przesunac X";
const char * const MSG_MOVE_X_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_X_EN,
	MSG_MOVE_X_CZ,
	MSG_MOVE_X_IT,
	MSG_MOVE_X_ES,
	MSG_MOVE_X_PL
};

const char MSG_MOVE_Y_EN[] PROGMEM = "Move Y";
const char MSG_MOVE_Y_CZ[] PROGMEM = "Posunout Y";
const char MSG_MOVE_Y_IT[] PROGMEM = "Muovi Y";
const char MSG_MOVE_Y_ES[] PROGMEM = "Mover Y";
const char MSG_MOVE_Y_PL[] PROGMEM = "Przesunac Y";
const char * const MSG_MOVE_Y_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_Y_EN,
	MSG_MOVE_Y_CZ,
	MSG_MOVE_Y_IT,
	MSG_MOVE_Y_ES,
	MSG_MOVE_Y_PL
};

const char MSG_MOVE_Z_EN[] PROGMEM = "Move Z";
const char MSG_MOVE_Z_CZ[] PROGMEM = "Posunout Z";
const char MSG_MOVE_Z_IT[] PROGMEM = "Muovi Z";
const char MSG_MOVE_Z_ES[] PROGMEM = "Mover Z";
const char MSG_MOVE_Z_PL[] PROGMEM = "Przesunac Z";
const char * const MSG_MOVE_Z_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_MOVE_Z_EN,
	MSG_MOVE_Z_CZ,
	MSG_MOVE_Z_IT,
	MSG_MOVE_Z_ES,
	MSG_MOVE_Z_PL
};

const char MSG_NEW_FIRMWARE_AVAILABLE_EN[] PROGMEM = "New firmware version available:";
const char MSG_NEW_FIRMWARE_AVAILABLE_CZ[] PROGMEM = "Vysla nova verze firmware:";
const char MSG_NEW_FIRMWARE_AVAILABLE_IT[] PROGMEM = "Nuova versione del firmware disponibile";
const char MSG_NEW_FIRMWARE_AVAILABLE_ES[] PROGMEM = "Nuevo firmware disponible:";
const char MSG_NEW_FIRMWARE_AVAILABLE_PL[] PROGMEM = "Wyszla nowa wersja firmware:";
const char * const MSG_NEW_FIRMWARE_AVAILABLE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NEW_FIRMWARE_AVAILABLE_EN,
	MSG_NEW_FIRMWARE_AVAILABLE_CZ,
	MSG_NEW_FIRMWARE_AVAILABLE_IT,
	MSG_NEW_FIRMWARE_AVAILABLE_ES,
	MSG_NEW_FIRMWARE_AVAILABLE_PL
};

const char MSG_NEW_FIRMWARE_PLEASE_UPGRADE_EN[] PROGMEM = "Please upgrade.";
const char MSG_NEW_FIRMWARE_PLEASE_UPGRADE_CZ[] PROGMEM = "Prosim aktualizujte.";
const char MSG_NEW_FIRMWARE_PLEASE_UPGRADE_IT[] PROGMEM = "Prega aggiorna.";
const char MSG_NEW_FIRMWARE_PLEASE_UPGRADE_ES[] PROGMEM = "Actualizar por favor";
const char MSG_NEW_FIRMWARE_PLEASE_UPGRADE_PL[] PROGMEM = "Prosze zaktualizowac";
const char * const MSG_NEW_FIRMWARE_PLEASE_UPGRADE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NEW_FIRMWARE_PLEASE_UPGRADE_EN,
	MSG_NEW_FIRMWARE_PLEASE_UPGRADE_CZ,
	MSG_NEW_FIRMWARE_PLEASE_UPGRADE_IT,
	MSG_NEW_FIRMWARE_PLEASE_UPGRADE_ES,
	MSG_NEW_FIRMWARE_PLEASE_UPGRADE_PL
};

const char MSG_NO_EN[] PROGMEM = "No";
const char MSG_NO_CZ[] PROGMEM = "Ne";
const char MSG_NO_PL[] PROGMEM = "Nie";
const char * const MSG_NO_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NO_EN,
	MSG_NO_CZ,
	MSG_NO_EN,
	MSG_NO_EN,
	MSG_NO_PL
};

const char MSG_NOT_COLOR_EN[] PROGMEM = "Color not clear";
const char MSG_NOT_COLOR_CZ[] PROGMEM = "Barva neni cista";
const char MSG_NOT_COLOR_IT[] PROGMEM = "Color no claro";
const char MSG_NOT_COLOR_ES[] PROGMEM = "Color no claro";
const char MSG_NOT_COLOR_PL[] PROGMEM = "Kolor zanieczysz.";
const char * const MSG_NOT_COLOR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NOT_COLOR_EN,
	MSG_NOT_COLOR_CZ,
	MSG_NOT_COLOR_IT,
	MSG_NOT_COLOR_ES,
	MSG_NOT_COLOR_PL
};

const char MSG_NOT_LOADED_EN[] PROGMEM = "Filament not loaded";
const char MSG_NOT_LOADED_CZ[] PROGMEM = "Filament nezaveden";
const char MSG_NOT_LOADED_IT[] PROGMEM = "Fil. no cargado";
const char MSG_NOT_LOADED_ES[] PROGMEM = "Fil. no cargado";
const char MSG_NOT_LOADED_PL[] PROGMEM = "Brak filamentu";
const char * const MSG_NOT_LOADED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NOT_LOADED_EN,
	MSG_NOT_LOADED_CZ,
	MSG_NOT_LOADED_IT,
	MSG_NOT_LOADED_ES,
	MSG_NOT_LOADED_PL
};

const char MSG_NOZZLE_EN[] PROGMEM = "Nozzle";
const char MSG_NOZZLE_CZ[] PROGMEM = "Tryska";
const char MSG_NOZZLE_IT[] PROGMEM = "Ugello";
const char MSG_NOZZLE_ES[] PROGMEM = "Fusor";
const char MSG_NOZZLE_PL[] PROGMEM = "Dysza";
const char * const MSG_NOZZLE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NOZZLE_EN,
	MSG_NOZZLE_CZ,
	MSG_NOZZLE_IT,
	MSG_NOZZLE_ES,
	MSG_NOZZLE_PL
};

const char MSG_NOZZLE1_EN[] PROGMEM = "Nozzle2";
const char * const MSG_NOZZLE1_LANG_TABLE[1] PROGMEM = {
	MSG_NOZZLE1_EN
};

const char MSG_NOZZLE2_EN[] PROGMEM = "Nozzle3";
const char * const MSG_NOZZLE2_LANG_TABLE[1] PROGMEM = {
	MSG_NOZZLE2_EN
};

const char MSG_NO_CARD_EN[] PROGMEM = "No SD card";
const char MSG_NO_CARD_CZ[] PROGMEM = "Zadna SD karta";
const char MSG_NO_CARD_IT[] PROGMEM = "Nessuna SD";
const char MSG_NO_CARD_ES[] PROGMEM = "No hay tarjeta SD";
const char MSG_NO_CARD_PL[] PROGMEM = "Brak karty SD";
const char * const MSG_NO_CARD_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NO_CARD_EN,
	MSG_NO_CARD_CZ,
	MSG_NO_CARD_IT,
	MSG_NO_CARD_ES,
	MSG_NO_CARD_PL
};

const char MSG_NO_MOVE_EN[] PROGMEM = "No move.";
const char MSG_NO_MOVE_IT[] PROGMEM = "Nessun movimento.";
const char MSG_NO_MOVE_ES[] PROGMEM = "Sin movimiento";
const char * const MSG_NO_MOVE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_NO_MOVE_EN,
	MSG_NO_MOVE_EN,
	MSG_NO_MOVE_IT,
	MSG_NO_MOVE_ES,
	MSG_NO_MOVE_EN
};

const char MSG_OFF_EN[] PROGMEM = "Off";
const char * const MSG_OFF_LANG_TABLE[1] PROGMEM = {
	MSG_OFF_EN
};

const char MSG_OK_EN[] PROGMEM = "ok";
const char * const MSG_OK_LANG_TABLE[1] PROGMEM = {
	MSG_OK_EN
};

const char MSG_ON_EN[] PROGMEM = "On ";
const char * const MSG_ON_LANG_TABLE[1] PROGMEM = {
	MSG_ON_EN
};

const char MSG_PAUSE_PRINT_EN[] PROGMEM = "Pause print";
const char MSG_PAUSE_PRINT_CZ[] PROGMEM = "Pozastavit tisk";
const char MSG_PAUSE_PRINT_IT[] PROGMEM = "Metti in pausa";
const char MSG_PAUSE_PRINT_ES[] PROGMEM = "Pausar impresion";
const char MSG_PAUSE_PRINT_PL[] PROGMEM = "Przerwac druk";
const char * const MSG_PAUSE_PRINT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PAUSE_PRINT_EN,
	MSG_PAUSE_PRINT_CZ,
	MSG_PAUSE_PRINT_IT,
	MSG_PAUSE_PRINT_ES,
	MSG_PAUSE_PRINT_PL
};

const char MSG_PICK_Z_EN[] PROGMEM = "Pick print";
const char MSG_PICK_Z_CZ[] PROGMEM = "Vyberte vytisk";
const char MSG_PICK_Z_ES[] PROGMEM = "Vyberte vytisk";
const char MSG_PICK_Z_PL[] PROGMEM = "Vyberte vytisk";
const char * const MSG_PICK_Z_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PICK_Z_EN,
	MSG_PICK_Z_CZ,
	MSG_PICK_Z_EN,
	MSG_PICK_Z_ES,
	MSG_PICK_Z_PL
};

const char MSG_PLANNER_BUFFER_BYTES_EN[] PROGMEM = "  PlannerBufferBytes: ";
const char * const MSG_PLANNER_BUFFER_BYTES_LANG_TABLE[1] PROGMEM = {
	MSG_PLANNER_BUFFER_BYTES_EN
};

const char MSG_PLEASE_WAIT_EN[] PROGMEM = "Please wait";
const char MSG_PLEASE_WAIT_CZ[] PROGMEM = "Prosim cekejte";
const char MSG_PLEASE_WAIT_IT[] PROGMEM = "Aspetta";
const char MSG_PLEASE_WAIT_ES[] PROGMEM = "Espera";
const char MSG_PLEASE_WAIT_PL[] PROGMEM = "Prosze czekac";
const char * const MSG_PLEASE_WAIT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PLEASE_WAIT_EN,
	MSG_PLEASE_WAIT_CZ,
	MSG_PLEASE_WAIT_IT,
	MSG_PLEASE_WAIT_ES,
	MSG_PLEASE_WAIT_PL
};

const char MSG_POSITION_UNKNOWN_EN[] PROGMEM = "Home X/Y before Z";
const char * const MSG_POSITION_UNKNOWN_LANG_TABLE[1] PROGMEM = {
	MSG_POSITION_UNKNOWN_EN
};

const char MSG_POWERUP_EN[] PROGMEM = "PowerUp";
const char * const MSG_POWERUP_LANG_TABLE[1] PROGMEM = {
	MSG_POWERUP_EN
};

const char MSG_PREHEAT_EN[] PROGMEM = "Preheat";
const char MSG_PREHEAT_CZ[] PROGMEM = "Predehrev";
const char MSG_PREHEAT_IT[] PROGMEM = "Preriscalda";
const char MSG_PREHEAT_ES[] PROGMEM = "Precalentar";
const char MSG_PREHEAT_PL[] PROGMEM = "Grzanie";
const char * const MSG_PREHEAT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PREHEAT_EN,
	MSG_PREHEAT_CZ,
	MSG_PREHEAT_IT,
	MSG_PREHEAT_ES,
	MSG_PREHEAT_PL
};

const char MSG_PREHEAT_NOZZLE_EN[] PROGMEM = "Preheat the nozzle!";
const char MSG_PREHEAT_NOZZLE_CZ[] PROGMEM = "Predehrejte trysku!";
const char MSG_PREHEAT_NOZZLE_IT[] PROGMEM = "Preris. ugello!";
const char MSG_PREHEAT_NOZZLE_ES[] PROGMEM = "Precal. extrusor!";
const char MSG_PREHEAT_NOZZLE_PL[] PROGMEM = "Nagrzej dysze!";
const char * const MSG_PREHEAT_NOZZLE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PREHEAT_NOZZLE_EN,
	MSG_PREHEAT_NOZZLE_CZ,
	MSG_PREHEAT_NOZZLE_IT,
	MSG_PREHEAT_NOZZLE_ES,
	MSG_PREHEAT_NOZZLE_PL
};

const char MSG_PRESS_EN[] PROGMEM = "And press the knob";
const char MSG_PRESS_CZ[] PROGMEM = "A stisknete tlacitko";
const char MSG_PRESS_IT[] PROGMEM = "Y pulse el mando";
const char MSG_PRESS_ES[] PROGMEM = "Y pulse el mando";
const char MSG_PRESS_PL[] PROGMEM = "Nacisnij przycisk";
const char * const MSG_PRESS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PRESS_EN,
	MSG_PRESS_CZ,
	MSG_PRESS_IT,
	MSG_PRESS_ES,
	MSG_PRESS_PL
};

const char MSG_PRINT_ABORTED_EN[] PROGMEM = "Print aborted";
const char MSG_PRINT_ABORTED_CZ[] PROGMEM = "Tisk prerusen";
const char MSG_PRINT_ABORTED_IT[] PROGMEM = "Stampa abortita";
const char MSG_PRINT_ABORTED_PL[] PROGMEM = "Druk przerwany";
const char * const MSG_PRINT_ABORTED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PRINT_ABORTED_EN,
	MSG_PRINT_ABORTED_CZ,
	MSG_PRINT_ABORTED_IT,
	MSG_PRINT_ABORTED_EN,
	MSG_PRINT_ABORTED_PL
};

const char MSG_PRUSA3D_EN[] PROGMEM = "prusa3d.com";
const char MSG_PRUSA3D_CZ[] PROGMEM = "prusa3d.cz";
const char MSG_PRUSA3D_PL[] PROGMEM = "prusa3d.cz";
const char * const MSG_PRUSA3D_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PRUSA3D_EN,
	MSG_PRUSA3D_CZ,
	MSG_PRUSA3D_EN,
	MSG_PRUSA3D_EN,
	MSG_PRUSA3D_PL
};

const char MSG_PRUSA3D_FORUM_EN[] PROGMEM = "forum.prusa3d.com";
const char MSG_PRUSA3D_FORUM_CZ[] PROGMEM = "forum.prusa3d.cz";
const char MSG_PRUSA3D_FORUM_PL[] PROGMEM = "forum.prusa3d.cz";
const char * const MSG_PRUSA3D_FORUM_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PRUSA3D_FORUM_EN,
	MSG_PRUSA3D_FORUM_CZ,
	MSG_PRUSA3D_FORUM_EN,
	MSG_PRUSA3D_FORUM_EN,
	MSG_PRUSA3D_FORUM_PL
};

const char MSG_PRUSA3D_HOWTO_EN[] PROGMEM = "howto.prusa3d.com";
const char MSG_PRUSA3D_HOWTO_CZ[] PROGMEM = "howto.prusa3d.cz";
const char MSG_PRUSA3D_HOWTO_PL[] PROGMEM = "howto.prusa3d.cz";
const char * const MSG_PRUSA3D_HOWTO_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_PRUSA3D_HOWTO_EN,
	MSG_PRUSA3D_HOWTO_CZ,
	MSG_PRUSA3D_HOWTO_EN,
	MSG_PRUSA3D_HOWTO_EN,
	MSG_PRUSA3D_HOWTO_PL
};

const char MSG_REBOOT_EN[] PROGMEM = "Reboot the printer";
const char MSG_REBOOT_CZ[] PROGMEM = "Restartujte tiskarnu";
const char MSG_REBOOT_IT[] PROGMEM = "Riavvia stampante";
const char MSG_REBOOT_ES[] PROGMEM = "Reiniciar la imp.";
const char MSG_REBOOT_PL[] PROGMEM = "Restart drukarki";
const char * const MSG_REBOOT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_REBOOT_EN,
	MSG_REBOOT_CZ,
	MSG_REBOOT_IT,
	MSG_REBOOT_ES,
	MSG_REBOOT_PL
};

const char MSG_RECTRACT_EN[] PROGMEM = "Rectract";
const char * const MSG_RECTRACT_LANG_TABLE[1] PROGMEM = {
	MSG_RECTRACT_EN
};

const char MSG_REFRESH_EN[] PROGMEM = "\xF8" "Refresh";
const char * const MSG_REFRESH_LANG_TABLE[1] PROGMEM = {
	MSG_REFRESH_EN
};

const char MSG_RESEND_EN[] PROGMEM = "Resend: ";
const char * const MSG_RESEND_LANG_TABLE[1] PROGMEM = {
	MSG_RESEND_EN
};

const char MSG_RESTORE_FAILSAFE_EN[] PROGMEM = "Restore failsafe";
const char * const MSG_RESTORE_FAILSAFE_LANG_TABLE[1] PROGMEM = {
	MSG_RESTORE_FAILSAFE_EN
};

const char MSG_RESUME_PRINT_EN[] PROGMEM = "Resume print";
const char MSG_RESUME_PRINT_CZ[] PROGMEM = "Pokracovat";
const char MSG_RESUME_PRINT_IT[] PROGMEM = "Riprendi stampa";
const char MSG_RESUME_PRINT_ES[] PROGMEM = "Reanudar impres.";
const char MSG_RESUME_PRINT_PL[] PROGMEM = "Kontynuowac";
const char * const MSG_RESUME_PRINT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_RESUME_PRINT_EN,
	MSG_RESUME_PRINT_CZ,
	MSG_RESUME_PRINT_IT,
	MSG_RESUME_PRINT_ES,
	MSG_RESUME_PRINT_PL
};

const char MSG_RESUMING_EN[] PROGMEM = "Resuming print";
const char MSG_RESUMING_CZ[] PROGMEM = "Obnoveni tisku";
const char MSG_RESUMING_IT[] PROGMEM = "Riprendi stampa";
const char MSG_RESUMING_ES[] PROGMEM = "Resumiendo impre.";
const char MSG_RESUMING_PL[] PROGMEM = "Wznowienie druku";
const char * const MSG_RESUMING_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_RESUMING_EN,
	MSG_RESUMING_CZ,
	MSG_RESUMING_IT,
	MSG_RESUMING_ES,
	MSG_RESUMING_PL
};

const char MSG_SD_CANT_ENTER_SUBDIR_EN[] PROGMEM = "Cannot enter subdir: ";
const char * const MSG_SD_CANT_ENTER_SUBDIR_LANG_TABLE[1] PROGMEM = {
	MSG_SD_CANT_ENTER_SUBDIR_EN
};

const char MSG_SD_CANT_OPEN_SUBDIR_EN[] PROGMEM = "Cannot open subdir";
const char * const MSG_SD_CANT_OPEN_SUBDIR_LANG_TABLE[1] PROGMEM = {
	MSG_SD_CANT_OPEN_SUBDIR_EN
};

const char MSG_SD_CARD_OK_EN[] PROGMEM = "SD card ok";
const char * const MSG_SD_CARD_OK_LANG_TABLE[1] PROGMEM = {
	MSG_SD_CARD_OK_EN
};

const char MSG_SD_ERR_WRITE_TO_FILE_EN[] PROGMEM = "error writing to file";
const char * const MSG_SD_ERR_WRITE_TO_FILE_LANG_TABLE[1] PROGMEM = {
	MSG_SD_ERR_WRITE_TO_FILE_EN
};

const char MSG_SD_FILE_OPENED_EN[] PROGMEM = "File opened: ";
const char * const MSG_SD_FILE_OPENED_LANG_TABLE[1] PROGMEM = {
	MSG_SD_FILE_OPENED_EN
};

const char MSG_SD_FILE_SELECTED_EN[] PROGMEM = "File selected";
const char * const MSG_SD_FILE_SELECTED_LANG_TABLE[1] PROGMEM = {
	MSG_SD_FILE_SELECTED_EN
};

const char MSG_SD_INIT_FAIL_EN[] PROGMEM = "SD init fail";
const char * const MSG_SD_INIT_FAIL_LANG_TABLE[1] PROGMEM = {
	MSG_SD_INIT_FAIL_EN
};

const char MSG_SD_INSERTED_EN[] PROGMEM = "Card inserted";
const char MSG_SD_INSERTED_CZ[] PROGMEM = "Karta vlozena";
const char MSG_SD_INSERTED_IT[] PROGMEM = "SD inserita";
const char MSG_SD_INSERTED_ES[] PROGMEM = "Tarjeta colocada";
const char MSG_SD_INSERTED_PL[] PROGMEM = "Karta wlozona";
const char * const MSG_SD_INSERTED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SD_INSERTED_EN,
	MSG_SD_INSERTED_CZ,
	MSG_SD_INSERTED_IT,
	MSG_SD_INSERTED_ES,
	MSG_SD_INSERTED_PL
};

const char MSG_SD_NOT_PRINTING_EN[] PROGMEM = "Not SD printing";
const char * const MSG_SD_NOT_PRINTING_LANG_TABLE[1] PROGMEM = {
	MSG_SD_NOT_PRINTING_EN
};

const char MSG_SD_OPENROOT_FAIL_EN[] PROGMEM = "openRoot failed";
const char * const MSG_SD_OPENROOT_FAIL_LANG_TABLE[1] PROGMEM = {
	MSG_SD_OPENROOT_FAIL_EN
};

const char MSG_SD_OPEN_FILE_FAIL_EN[] PROGMEM = "open failed, File: ";
const char * const MSG_SD_OPEN_FILE_FAIL_LANG_TABLE[1] PROGMEM = {
	MSG_SD_OPEN_FILE_FAIL_EN
};

const char MSG_SD_PRINTING_BYTE_EN[] PROGMEM = "SD printing byte ";
const char * const MSG_SD_PRINTING_BYTE_LANG_TABLE[1] PROGMEM = {
	MSG_SD_PRINTING_BYTE_EN
};

const char MSG_SD_REMOVED_EN[] PROGMEM = "Card removed";
const char MSG_SD_REMOVED_CZ[] PROGMEM = "Karta vyjmuta";
const char MSG_SD_REMOVED_IT[] PROGMEM = "SD rimossa";
const char MSG_SD_REMOVED_ES[] PROGMEM = "Tarjeta retirada";
const char MSG_SD_REMOVED_PL[] PROGMEM = "Karta wyjeta";
const char * const MSG_SD_REMOVED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SD_REMOVED_EN,
	MSG_SD_REMOVED_CZ,
	MSG_SD_REMOVED_IT,
	MSG_SD_REMOVED_ES,
	MSG_SD_REMOVED_PL
};

const char MSG_SD_SIZE_EN[] PROGMEM = " Size: ";
const char * const MSG_SD_SIZE_LANG_TABLE[1] PROGMEM = {
	MSG_SD_SIZE_EN
};

const char MSG_SD_VOL_INIT_FAIL_EN[] PROGMEM = "volume.init failed";
const char * const MSG_SD_VOL_INIT_FAIL_LANG_TABLE[1] PROGMEM = {
	MSG_SD_VOL_INIT_FAIL_EN
};

const char MSG_SD_WORKDIR_FAIL_EN[] PROGMEM = "workDir open failed";
const char * const MSG_SD_WORKDIR_FAIL_LANG_TABLE[1] PROGMEM = {
	MSG_SD_WORKDIR_FAIL_EN
};

const char MSG_SD_WRITE_TO_FILE_EN[] PROGMEM = "Writing to file: ";
const char * const MSG_SD_WRITE_TO_FILE_LANG_TABLE[1] PROGMEM = {
	MSG_SD_WRITE_TO_FILE_EN
};

const char MSG_SELFTEST_EN[] PROGMEM = "Selftest         ";
const char MSG_SELFTEST_IT[] PROGMEM = "Autotest";
const char MSG_SELFTEST_ES[] PROGMEM = "Autotest";
const char * const MSG_SELFTEST_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_EN,
	MSG_SELFTEST_EN,
	MSG_SELFTEST_IT,
	MSG_SELFTEST_ES,
	MSG_SELFTEST_EN
};

const char MSG_SELFTEST_BEDHEATER_EN[] PROGMEM = "Bed / Heater";
const char MSG_SELFTEST_BEDHEATER_IT[] PROGMEM = "Letto/Riscald.";
const char MSG_SELFTEST_BEDHEATER_ES[] PROGMEM = "Cama/Calentador";
const char * const MSG_SELFTEST_BEDHEATER_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_BEDHEATER_EN,
	MSG_SELFTEST_BEDHEATER_EN,
	MSG_SELFTEST_BEDHEATER_IT,
	MSG_SELFTEST_BEDHEATER_ES,
	MSG_SELFTEST_BEDHEATER_EN
};

const char MSG_SELFTEST_CHECK_ALLCORRECT_EN[] PROGMEM = "All correct      ";
const char MSG_SELFTEST_CHECK_ALLCORRECT_CZ[] PROGMEM = "Vse OK           ";
const char MSG_SELFTEST_CHECK_ALLCORRECT_IT[] PROGMEM = "Nessun errore";
const char MSG_SELFTEST_CHECK_ALLCORRECT_ES[] PROGMEM = "Todo bie ";
const char MSG_SELFTEST_CHECK_ALLCORRECT_PL[] PROGMEM = "Wszystko OK      ";
const char * const MSG_SELFTEST_CHECK_ALLCORRECT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_ALLCORRECT_EN,
	MSG_SELFTEST_CHECK_ALLCORRECT_CZ,
	MSG_SELFTEST_CHECK_ALLCORRECT_IT,
	MSG_SELFTEST_CHECK_ALLCORRECT_ES,
	MSG_SELFTEST_CHECK_ALLCORRECT_PL
};

const char MSG_SELFTEST_CHECK_BED_EN[] PROGMEM = "Checking bed     ";
const char MSG_SELFTEST_CHECK_BED_CZ[] PROGMEM = "Kontrola bed     ";
const char MSG_SELFTEST_CHECK_BED_IT[] PROGMEM = "Verifica letto";
const char MSG_SELFTEST_CHECK_BED_ES[] PROGMEM = "Control de cama";
const char MSG_SELFTEST_CHECK_BED_PL[] PROGMEM = "Kontrola bed     ";
const char * const MSG_SELFTEST_CHECK_BED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_BED_EN,
	MSG_SELFTEST_CHECK_BED_CZ,
	MSG_SELFTEST_CHECK_BED_IT,
	MSG_SELFTEST_CHECK_BED_ES,
	MSG_SELFTEST_CHECK_BED_PL
};

const char MSG_SELFTEST_CHECK_ENDSTOPS_EN[] PROGMEM = "Checking endstops";
const char MSG_SELFTEST_CHECK_ENDSTOPS_CZ[] PROGMEM = "Kontrola endstops";
const char MSG_SELFTEST_CHECK_ENDSTOPS_IT[] PROGMEM = "Verifica finecorsa";
const char MSG_SELFTEST_CHECK_ENDSTOPS_ES[] PROGMEM = "Cont. topes final";
const char MSG_SELFTEST_CHECK_ENDSTOPS_PL[] PROGMEM = "Kontrola endstops";
const char * const MSG_SELFTEST_CHECK_ENDSTOPS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_ENDSTOPS_EN,
	MSG_SELFTEST_CHECK_ENDSTOPS_CZ,
	MSG_SELFTEST_CHECK_ENDSTOPS_IT,
	MSG_SELFTEST_CHECK_ENDSTOPS_ES,
	MSG_SELFTEST_CHECK_ENDSTOPS_PL
};

const char MSG_SELFTEST_CHECK_HOTEND_EN[] PROGMEM = "Checking hotend  ";
const char MSG_SELFTEST_CHECK_HOTEND_CZ[] PROGMEM = "Kontrola hotend  ";
const char MSG_SELFTEST_CHECK_HOTEND_IT[] PROGMEM = "Verifica ugello";
const char MSG_SELFTEST_CHECK_HOTEND_ES[] PROGMEM = "Control hotend ";
const char MSG_SELFTEST_CHECK_HOTEND_PL[] PROGMEM = "Kontrola hotend  ";
const char * const MSG_SELFTEST_CHECK_HOTEND_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_HOTEND_EN,
	MSG_SELFTEST_CHECK_HOTEND_CZ,
	MSG_SELFTEST_CHECK_HOTEND_IT,
	MSG_SELFTEST_CHECK_HOTEND_ES,
	MSG_SELFTEST_CHECK_HOTEND_PL
};

const char MSG_SELFTEST_CHECK_X_EN[] PROGMEM = "Checking X axis  ";
const char MSG_SELFTEST_CHECK_X_CZ[] PROGMEM = "Kontrola X axis  ";
const char MSG_SELFTEST_CHECK_X_IT[] PROGMEM = "Verifica asse X";
const char MSG_SELFTEST_CHECK_X_ES[] PROGMEM = "Control del eje X";
const char MSG_SELFTEST_CHECK_X_PL[] PROGMEM = "Kontrola X axis  ";
const char * const MSG_SELFTEST_CHECK_X_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_X_EN,
	MSG_SELFTEST_CHECK_X_CZ,
	MSG_SELFTEST_CHECK_X_IT,
	MSG_SELFTEST_CHECK_X_ES,
	MSG_SELFTEST_CHECK_X_PL
};

const char MSG_SELFTEST_CHECK_Y_EN[] PROGMEM = "Checking Y axis  ";
const char MSG_SELFTEST_CHECK_Y_CZ[] PROGMEM = "Kontrola Y axis  ";
const char MSG_SELFTEST_CHECK_Y_IT[] PROGMEM = "Verifica asse Y";
const char MSG_SELFTEST_CHECK_Y_ES[] PROGMEM = "Control del eje Y";
const char MSG_SELFTEST_CHECK_Y_PL[] PROGMEM = "Kontrola Y axis  ";
const char * const MSG_SELFTEST_CHECK_Y_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_Y_EN,
	MSG_SELFTEST_CHECK_Y_CZ,
	MSG_SELFTEST_CHECK_Y_IT,
	MSG_SELFTEST_CHECK_Y_ES,
	MSG_SELFTEST_CHECK_Y_PL
};

const char MSG_SELFTEST_CHECK_Z_EN[] PROGMEM = "Checking Z axis  ";
const char MSG_SELFTEST_CHECK_Z_CZ[] PROGMEM = "Kontrola Z axis  ";
const char MSG_SELFTEST_CHECK_Z_IT[] PROGMEM = "Verifica asse Z";
const char MSG_SELFTEST_CHECK_Z_ES[] PROGMEM = "Control del eje Z";
const char MSG_SELFTEST_CHECK_Z_PL[] PROGMEM = "Kontrola Z axis  ";
const char * const MSG_SELFTEST_CHECK_Z_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_CHECK_Z_EN,
	MSG_SELFTEST_CHECK_Z_CZ,
	MSG_SELFTEST_CHECK_Z_IT,
	MSG_SELFTEST_CHECK_Z_ES,
	MSG_SELFTEST_CHECK_Z_PL
};

const char MSG_SELFTEST_COOLING_FAN_EN[] PROGMEM = "Front print fan?";;
const char MSG_SELFTEST_COOLING_FAN_CZ[] PROGMEM = "Predni tiskovy vent?";;
const char MSG_SELFTEST_COOLING_FAN_IT[] PROGMEM = "Vent di stampa ant.?";;
const char MSG_SELFTEST_COOLING_FAN_ES[] PROGMEM = "Vent. al frente?";;
const char MSG_SELFTEST_COOLING_FAN_PL[] PROGMEM = "Przodni went. druku?";;
const char * const MSG_SELFTEST_COOLING_FAN_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_COOLING_FAN_EN,
	MSG_SELFTEST_COOLING_FAN_CZ,
	MSG_SELFTEST_COOLING_FAN_IT,
	MSG_SELFTEST_COOLING_FAN_ES,
	MSG_SELFTEST_COOLING_FAN_PL
};

const char MSG_SELFTEST_ENDSTOP_EN[] PROGMEM = "Endstop";
const char MSG_SELFTEST_ENDSTOP_IT[] PROGMEM = "Finecorsa";
const char MSG_SELFTEST_ENDSTOP_ES[] PROGMEM = "Tope final";
const char * const MSG_SELFTEST_ENDSTOP_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_ENDSTOP_EN,
	MSG_SELFTEST_ENDSTOP_EN,
	MSG_SELFTEST_ENDSTOP_IT,
	MSG_SELFTEST_ENDSTOP_ES,
	MSG_SELFTEST_ENDSTOP_EN
};

const char MSG_SELFTEST_ENDSTOPS_EN[] PROGMEM = "Endstops";
const char MSG_SELFTEST_ENDSTOPS_IT[] PROGMEM = "Finecorsa (2)";
const char MSG_SELFTEST_ENDSTOPS_ES[] PROGMEM = "Topes final";
const char * const MSG_SELFTEST_ENDSTOPS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_ENDSTOPS_EN,
	MSG_SELFTEST_ENDSTOPS_EN,
	MSG_SELFTEST_ENDSTOPS_IT,
	MSG_SELFTEST_ENDSTOPS_ES,
	MSG_SELFTEST_ENDSTOPS_EN
};

const char MSG_SELFTEST_ENDSTOP_NOTHIT_EN[] PROGMEM = "Endstop not hit";
const char MSG_SELFTEST_ENDSTOP_NOTHIT_IT[] PROGMEM = "Finec. fuori por.";
const char MSG_SELFTEST_ENDSTOP_NOTHIT_ES[] PROGMEM = "Tope fin. no toc.";
const char * const MSG_SELFTEST_ENDSTOP_NOTHIT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_ENDSTOP_NOTHIT_EN,
	MSG_SELFTEST_ENDSTOP_NOTHIT_EN,
	MSG_SELFTEST_ENDSTOP_NOTHIT_IT,
	MSG_SELFTEST_ENDSTOP_NOTHIT_ES,
	MSG_SELFTEST_ENDSTOP_NOTHIT_EN
};

const char MSG_SELFTEST_ERROR_EN[] PROGMEM = "Selftest error !";
const char MSG_SELFTEST_ERROR_IT[] PROGMEM = "Autotest negativo";
const char MSG_SELFTEST_ERROR_ES[] PROGMEM = "Autotest error!";
const char * const MSG_SELFTEST_ERROR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_ERROR_EN,
	MSG_SELFTEST_ERROR_EN,
	MSG_SELFTEST_ERROR_IT,
	MSG_SELFTEST_ERROR_ES,
	MSG_SELFTEST_ERROR_EN
};

const char MSG_SELFTEST_EXTRUDER_FAN_EN[] PROGMEM = "Left hotend fan?";;
const char MSG_SELFTEST_EXTRUDER_FAN_CZ[] PROGMEM = "Levy vent na trysce?";;
const char MSG_SELFTEST_EXTRUDER_FAN_IT[] PROGMEM = "Vent SX sull'ugello?";;
const char MSG_SELFTEST_EXTRUDER_FAN_ES[] PROGMEM = "Vent. en la izg?";;
const char MSG_SELFTEST_EXTRUDER_FAN_PL[] PROGMEM = "Lewy went na dysze?";;
const char * const MSG_SELFTEST_EXTRUDER_FAN_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_EXTRUDER_FAN_EN,
	MSG_SELFTEST_EXTRUDER_FAN_CZ,
	MSG_SELFTEST_EXTRUDER_FAN_IT,
	MSG_SELFTEST_EXTRUDER_FAN_ES,
	MSG_SELFTEST_EXTRUDER_FAN_PL
};

const char MSG_SELFTEST_FAILED_EN[] PROGMEM = "Selftest failed  ";
const char MSG_SELFTEST_FAILED_CZ[] PROGMEM = "Selftest selhal  ";
const char MSG_SELFTEST_FAILED_IT[] PROGMEM = "Autotest fallito";
const char MSG_SELFTEST_FAILED_ES[] PROGMEM = "Autotest fallado";
const char MSG_SELFTEST_FAILED_PL[] PROGMEM = "Selftest nieudany";
const char * const MSG_SELFTEST_FAILED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_FAILED_EN,
	MSG_SELFTEST_FAILED_CZ,
	MSG_SELFTEST_FAILED_IT,
	MSG_SELFTEST_FAILED_ES,
	MSG_SELFTEST_FAILED_PL
};

const char MSG_SELFTEST_FAN_EN[] PROGMEM = "Fan test";;
const char MSG_SELFTEST_FAN_CZ[] PROGMEM = "Test ventilatoru";;
const char MSG_SELFTEST_FAN_IT[] PROGMEM = "Prova del ventilator";;
const char MSG_SELFTEST_FAN_ES[] PROGMEM = "Test del ventilador";;
const char MSG_SELFTEST_FAN_PL[] PROGMEM = "Test wentylatora";;
const char * const MSG_SELFTEST_FAN_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_FAN_EN,
	MSG_SELFTEST_FAN_CZ,
	MSG_SELFTEST_FAN_IT,
	MSG_SELFTEST_FAN_ES,
	MSG_SELFTEST_FAN_PL
};

const char MSG_SELFTEST_FAN_NO_EN[] PROGMEM = "Not spinning";;
const char MSG_SELFTEST_FAN_NO_CZ[] PROGMEM = "Netoci se";;
const char MSG_SELFTEST_FAN_NO_IT[] PROGMEM = "Non si gira";;
const char MSG_SELFTEST_FAN_NO_ES[] PROGMEM = "Ventilador no gira";;
const char MSG_SELFTEST_FAN_NO_PL[] PROGMEM = "Nekreci sie";;
const char * const MSG_SELFTEST_FAN_NO_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_FAN_NO_EN,
	MSG_SELFTEST_FAN_NO_CZ,
	MSG_SELFTEST_FAN_NO_IT,
	MSG_SELFTEST_FAN_NO_ES,
	MSG_SELFTEST_FAN_NO_PL
};

const char MSG_SELFTEST_FAN_YES_EN[] PROGMEM = "Spinning";;
const char MSG_SELFTEST_FAN_YES_CZ[] PROGMEM = "Toci se";;
const char MSG_SELFTEST_FAN_YES_IT[] PROGMEM = "Gira";;
const char MSG_SELFTEST_FAN_YES_ES[] PROGMEM = "Ventilador gira";;
const char MSG_SELFTEST_FAN_YES_PL[] PROGMEM = "Kreci sie";;
const char * const MSG_SELFTEST_FAN_YES_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_FAN_YES_EN,
	MSG_SELFTEST_FAN_YES_CZ,
	MSG_SELFTEST_FAN_YES_IT,
	MSG_SELFTEST_FAN_YES_ES,
	MSG_SELFTEST_FAN_YES_PL
};

const char MSG_SELFTEST_HEATERTHERMISTOR_EN[] PROGMEM = "Heater/Thermistor";
const char MSG_SELFTEST_HEATERTHERMISTOR_IT[] PROGMEM = "Riscald./Termist.";
const char MSG_SELFTEST_HEATERTHERMISTOR_ES[] PROGMEM = "Calent./Termistor";
const char * const MSG_SELFTEST_HEATERTHERMISTOR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_HEATERTHERMISTOR_EN,
	MSG_SELFTEST_HEATERTHERMISTOR_EN,
	MSG_SELFTEST_HEATERTHERMISTOR_IT,
	MSG_SELFTEST_HEATERTHERMISTOR_ES,
	MSG_SELFTEST_HEATERTHERMISTOR_EN
};

const char MSG_SELFTEST_MOTOR_EN[] PROGMEM = "Motor";
const char MSG_SELFTEST_MOTOR_IT[] PROGMEM = "Motore";
const char MSG_SELFTEST_MOTOR_PL[] PROGMEM = "Silnik";
const char * const MSG_SELFTEST_MOTOR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_MOTOR_EN,
	MSG_SELFTEST_MOTOR_EN,
	MSG_SELFTEST_MOTOR_IT,
	MSG_SELFTEST_MOTOR_EN,
	MSG_SELFTEST_MOTOR_PL
};

const char MSG_SELFTEST_NOTCONNECTED_EN[] PROGMEM = "Not connected";
const char MSG_SELFTEST_NOTCONNECTED_CZ[] PROGMEM = "Nezapojeno    ";
const char MSG_SELFTEST_NOTCONNECTED_IT[] PROGMEM = "Non connesso";
const char MSG_SELFTEST_NOTCONNECTED_ES[] PROGMEM = "No hay conexion  ";
const char MSG_SELFTEST_NOTCONNECTED_PL[] PROGMEM = "Nie podlaczono   ";
const char * const MSG_SELFTEST_NOTCONNECTED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_NOTCONNECTED_EN,
	MSG_SELFTEST_NOTCONNECTED_CZ,
	MSG_SELFTEST_NOTCONNECTED_IT,
	MSG_SELFTEST_NOTCONNECTED_ES,
	MSG_SELFTEST_NOTCONNECTED_PL
};

const char MSG_SELFTEST_OK_EN[] PROGMEM = "Self test OK";
const char MSG_SELFTEST_OK_IT[] PROGMEM = "Autotest OK";
const char * const MSG_SELFTEST_OK_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_OK_EN,
	MSG_SELFTEST_OK_EN,
	MSG_SELFTEST_OK_IT,
	MSG_SELFTEST_OK_EN,
	MSG_SELFTEST_OK_EN
};

const char MSG_SELFTEST_PLEASECHECK_EN[] PROGMEM = "Please check :";
const char MSG_SELFTEST_PLEASECHECK_CZ[] PROGMEM = "Zkontrolujte :";
const char MSG_SELFTEST_PLEASECHECK_IT[] PROGMEM = "Verificare:";
const char MSG_SELFTEST_PLEASECHECK_ES[] PROGMEM = "Controla :";
const char MSG_SELFTEST_PLEASECHECK_PL[] PROGMEM = "Skontroluj :";
const char * const MSG_SELFTEST_PLEASECHECK_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_PLEASECHECK_EN,
	MSG_SELFTEST_PLEASECHECK_CZ,
	MSG_SELFTEST_PLEASECHECK_IT,
	MSG_SELFTEST_PLEASECHECK_ES,
	MSG_SELFTEST_PLEASECHECK_PL
};

const char MSG_SELFTEST_START_EN[] PROGMEM = "Self test start  ";
const char MSG_SELFTEST_START_IT[] PROGMEM = "Avvia autotest";
const char MSG_SELFTEST_START_ES[] PROGMEM = "Autotest salida";
const char * const MSG_SELFTEST_START_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_START_EN,
	MSG_SELFTEST_START_EN,
	MSG_SELFTEST_START_IT,
	MSG_SELFTEST_START_ES,
	MSG_SELFTEST_START_EN
};

const char MSG_SELFTEST_WIRINGERROR_EN[] PROGMEM = "Wiring error";
const char MSG_SELFTEST_WIRINGERROR_CZ[] PROGMEM = "Chyba zapojeni";
const char MSG_SELFTEST_WIRINGERROR_IT[] PROGMEM = "Errore cablaggio";
const char MSG_SELFTEST_WIRINGERROR_ES[] PROGMEM = "Error de conexion";
const char MSG_SELFTEST_WIRINGERROR_PL[] PROGMEM = "Blad polaczenia";
const char * const MSG_SELFTEST_WIRINGERROR_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SELFTEST_WIRINGERROR_EN,
	MSG_SELFTEST_WIRINGERROR_CZ,
	MSG_SELFTEST_WIRINGERROR_IT,
	MSG_SELFTEST_WIRINGERROR_ES,
	MSG_SELFTEST_WIRINGERROR_PL
};

const char MSG_SERIAL_ERROR_MENU_STRUCTURE_EN[] PROGMEM = "Error in menu structure";
const char * const MSG_SERIAL_ERROR_MENU_STRUCTURE_LANG_TABLE[1] PROGMEM = {
	MSG_SERIAL_ERROR_MENU_STRUCTURE_EN
};

const char MSG_SETTINGS_EN[] PROGMEM = "Settings";
const char MSG_SETTINGS_CZ[] PROGMEM = "Nastaveni";
const char MSG_SETTINGS_IT[] PROGMEM = "Impostazioni";
const char MSG_SETTINGS_ES[] PROGMEM = "Ajuste";
const char MSG_SETTINGS_PL[] PROGMEM = "Ustawienia";
const char * const MSG_SETTINGS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SETTINGS_EN,
	MSG_SETTINGS_CZ,
	MSG_SETTINGS_IT,
	MSG_SETTINGS_ES,
	MSG_SETTINGS_PL
};

const char MSG_SET_HOME_OFFSETS_EN[] PROGMEM = "Set home offsets";
const char * const MSG_SET_HOME_OFFSETS_LANG_TABLE[1] PROGMEM = {
	MSG_SET_HOME_OFFSETS_EN
};

const char MSG_SET_ORIGIN_EN[] PROGMEM = "Set origin";
const char * const MSG_SET_ORIGIN_LANG_TABLE[1] PROGMEM = {
	MSG_SET_ORIGIN_EN
};

const char MSG_SHOW_END_STOPS_EN[] PROGMEM = "Show end stops";
const char MSG_SHOW_END_STOPS_CZ[] PROGMEM = "Stav konc. spin.";
const char MSG_SHOW_END_STOPS_IT[] PROGMEM = "Stato finecorsa";
const char MSG_SHOW_END_STOPS_ES[] PROGMEM = "Ensena tope final";
const char MSG_SHOW_END_STOPS_PL[] PROGMEM = "Pokaz krancowki";
const char * const MSG_SHOW_END_STOPS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SHOW_END_STOPS_EN,
	MSG_SHOW_END_STOPS_CZ,
	MSG_SHOW_END_STOPS_IT,
	MSG_SHOW_END_STOPS_ES,
	MSG_SHOW_END_STOPS_PL
};

const char MSG_SILENT_MODE_OFF_EN[] PROGMEM = "Mode [high power]";
const char MSG_SILENT_MODE_OFF_CZ[] PROGMEM = "Mod  [vys. vykon]";
const char MSG_SILENT_MODE_OFF_IT[] PROGMEM = "Mode [prestante]";
const char MSG_SILENT_MODE_OFF_ES[] PROGMEM = "Modo [mas fuerza]";
const char MSG_SILENT_MODE_OFF_PL[] PROGMEM = "Mod [w wydajnosc]";
const char * const MSG_SILENT_MODE_OFF_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SILENT_MODE_OFF_EN,
	MSG_SILENT_MODE_OFF_CZ,
	MSG_SILENT_MODE_OFF_IT,
	MSG_SILENT_MODE_OFF_ES,
	MSG_SILENT_MODE_OFF_PL
};

const char MSG_SILENT_MODE_ON_EN[] PROGMEM = "Mode     [silent]";
const char MSG_SILENT_MODE_ON_CZ[] PROGMEM = "Mod       [tichy]";
const char MSG_SILENT_MODE_ON_IT[] PROGMEM = "Modo [silenzioso]";
const char MSG_SILENT_MODE_ON_ES[] PROGMEM = "Modo   [silencio]";
const char MSG_SILENT_MODE_ON_PL[] PROGMEM = "Mod       [cichy]";
const char * const MSG_SILENT_MODE_ON_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SILENT_MODE_ON_EN,
	MSG_SILENT_MODE_ON_CZ,
	MSG_SILENT_MODE_ON_IT,
	MSG_SILENT_MODE_ON_ES,
	MSG_SILENT_MODE_ON_PL
};

const char MSG_SOFTWARE_RESET_EN[] PROGMEM = " Software Reset";
const char * const MSG_SOFTWARE_RESET_LANG_TABLE[1] PROGMEM = {
	MSG_SOFTWARE_RESET_EN
};

const char MSG_SPEED_EN[] PROGMEM = "Speed";
const char MSG_SPEED_CZ[] PROGMEM = "Rychlost";
const char MSG_SPEED_IT[] PROGMEM = "Velocita";
const char MSG_SPEED_ES[] PROGMEM = "Velocidad";
const char MSG_SPEED_PL[] PROGMEM = "Predkosc";
const char * const MSG_SPEED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SPEED_EN,
	MSG_SPEED_CZ,
	MSG_SPEED_IT,
	MSG_SPEED_ES,
	MSG_SPEED_PL
};

const char MSG_STATISTICS_EN[] PROGMEM = "Statistics  ";
const char MSG_STATISTICS_CZ[] PROGMEM = "Statistika  ";
const char MSG_STATISTICS_IT[] PROGMEM = "Statistiche";
const char MSG_STATISTICS_ES[] PROGMEM = "Estadistica  ";
const char MSG_STATISTICS_PL[] PROGMEM = "Statystyka  ";
const char * const MSG_STATISTICS_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STATISTICS_EN,
	MSG_STATISTICS_CZ,
	MSG_STATISTICS_IT,
	MSG_STATISTICS_ES,
	MSG_STATISTICS_PL
};

const char MSG_STATS_FILAMENTUSED_EN[] PROGMEM = "Filament used:  ";
const char MSG_STATS_FILAMENTUSED_CZ[] PROGMEM = "Filament :  ";
const char MSG_STATS_FILAMENTUSED_IT[] PROGMEM = "Filamento usato:";
const char MSG_STATS_FILAMENTUSED_ES[] PROGMEM = "Filamento :  ";
const char MSG_STATS_FILAMENTUSED_PL[] PROGMEM = "Filament :  ";
const char * const MSG_STATS_FILAMENTUSED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STATS_FILAMENTUSED_EN,
	MSG_STATS_FILAMENTUSED_CZ,
	MSG_STATS_FILAMENTUSED_IT,
	MSG_STATS_FILAMENTUSED_ES,
	MSG_STATS_FILAMENTUSED_PL
};

const char MSG_STATS_PRINTTIME_EN[] PROGMEM = "Print time:  ";
const char MSG_STATS_PRINTTIME_CZ[] PROGMEM = "Cas tisku :  ";
const char MSG_STATS_PRINTTIME_IT[] PROGMEM = "Tempo di stampa:";
const char MSG_STATS_PRINTTIME_ES[] PROGMEM = "Tiempo de imp.:";
const char MSG_STATS_PRINTTIME_PL[] PROGMEM = "Czas druku :  ";
const char * const MSG_STATS_PRINTTIME_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STATS_PRINTTIME_EN,
	MSG_STATS_PRINTTIME_CZ,
	MSG_STATS_PRINTTIME_IT,
	MSG_STATS_PRINTTIME_ES,
	MSG_STATS_PRINTTIME_PL
};

const char MSG_STATS_TOTALFILAMENT_EN[] PROGMEM = "Total filament :";
const char MSG_STATS_TOTALFILAMENT_CZ[] PROGMEM = "Filament celkem :";
const char MSG_STATS_TOTALFILAMENT_IT[] PROGMEM = "Filamento tot:";
const char MSG_STATS_TOTALFILAMENT_ES[] PROGMEM = "Filamento total:";
const char MSG_STATS_TOTALFILAMENT_PL[] PROGMEM = "Filament lacznie :";
const char * const MSG_STATS_TOTALFILAMENT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STATS_TOTALFILAMENT_EN,
	MSG_STATS_TOTALFILAMENT_CZ,
	MSG_STATS_TOTALFILAMENT_IT,
	MSG_STATS_TOTALFILAMENT_ES,
	MSG_STATS_TOTALFILAMENT_PL
};

const char MSG_STATS_TOTALPRINTTIME_EN[] PROGMEM = "Total print time :";
const char MSG_STATS_TOTALPRINTTIME_CZ[] PROGMEM = "Celkovy cas :";
const char MSG_STATS_TOTALPRINTTIME_IT[] PROGMEM = "Tempo stampa tot:";
const char MSG_STATS_TOTALPRINTTIME_ES[] PROGMEM = "Tiempo total :";
const char MSG_STATS_TOTALPRINTTIME_PL[] PROGMEM = "Czas calkowity :";
const char * const MSG_STATS_TOTALPRINTTIME_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STATS_TOTALPRINTTIME_EN,
	MSG_STATS_TOTALPRINTTIME_CZ,
	MSG_STATS_TOTALPRINTTIME_IT,
	MSG_STATS_TOTALPRINTTIME_ES,
	MSG_STATS_TOTALPRINTTIME_PL
};

const char MSG_STEPPER_TOO_HIGH_EN[] PROGMEM = "Steprate too high: ";
const char * const MSG_STEPPER_TOO_HIGH_LANG_TABLE[1] PROGMEM = {
	MSG_STEPPER_TOO_HIGH_EN
};

const char MSG_STOPPED_EN[] PROGMEM = "STOPPED. ";
const char MSG_STOPPED_IT[] PROGMEM = "ARRESTATO.";
const char MSG_STOPPED_ES[] PROGMEM = "PARADA";
const char * const MSG_STOPPED_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STOPPED_EN,
	MSG_STOPPED_EN,
	MSG_STOPPED_IT,
	MSG_STOPPED_ES,
	MSG_STOPPED_EN
};

const char MSG_STOP_PRINT_EN[] PROGMEM = "Stop print";
const char MSG_STOP_PRINT_CZ[] PROGMEM = "Zastavit tisk";
const char MSG_STOP_PRINT_IT[] PROGMEM = "Arresta stampa";
const char MSG_STOP_PRINT_ES[] PROGMEM = "Detener impresion";
const char MSG_STOP_PRINT_PL[] PROGMEM = "Zatrzymac druk";
const char * const MSG_STOP_PRINT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_STOP_PRINT_EN,
	MSG_STOP_PRINT_CZ,
	MSG_STOP_PRINT_IT,
	MSG_STOP_PRINT_ES,
	MSG_STOP_PRINT_PL
};

const char MSG_STORE_EPROM_EN[] PROGMEM = "Store memory";
const char * const MSG_STORE_EPROM_LANG_TABLE[1] PROGMEM = {
	MSG_STORE_EPROM_EN
};

const char MSG_SUPPORT_EN[] PROGMEM = "Support";
const char MSG_SUPPORT_CZ[] PROGMEM = "Podpora";
const char MSG_SUPPORT_PL[] PROGMEM = "Pomoc";
const char * const MSG_SUPPORT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SUPPORT_EN,
	MSG_SUPPORT_CZ,
	MSG_SUPPORT_EN,
	MSG_SUPPORT_EN,
	MSG_SUPPORT_PL
};

const char MSG_SWITCH_PS_OFF_EN[] PROGMEM = "Switch power off";
const char MSG_SWITCH_PS_OFF_CZ[] PROGMEM = "Zapnout zdroj";
const char MSG_SWITCH_PS_OFF_PL[] PROGMEM = "Zapnout zdroj";
const char * const MSG_SWITCH_PS_OFF_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SWITCH_PS_OFF_EN,
	MSG_SWITCH_PS_OFF_CZ,
	MSG_SWITCH_PS_OFF_EN,
	MSG_SWITCH_PS_OFF_EN,
	MSG_SWITCH_PS_OFF_PL
};

const char MSG_SWITCH_PS_ON_EN[] PROGMEM = "Switch power on";
const char MSG_SWITCH_PS_ON_CZ[] PROGMEM = "Vypnout zdroj";
const char MSG_SWITCH_PS_ON_PL[] PROGMEM = "Vypnout zdroj";
const char * const MSG_SWITCH_PS_ON_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_SWITCH_PS_ON_EN,
	MSG_SWITCH_PS_ON_CZ,
	MSG_SWITCH_PS_ON_EN,
	MSG_SWITCH_PS_ON_EN,
	MSG_SWITCH_PS_ON_PL
};

const char MSG_TAKE_EFFECT_EN[] PROGMEM = " for take effect";
const char MSG_TAKE_EFFECT_CZ[] PROGMEM = " pro projeveni zmen";
const char MSG_TAKE_EFFECT_IT[] PROGMEM = " per attualizzare";
const char MSG_TAKE_EFFECT_ES[] PROGMEM = "para tomar efecto";
const char MSG_TAKE_EFFECT_PL[] PROGMEM = "wprow. zmian";
const char * const MSG_TAKE_EFFECT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_TAKE_EFFECT_EN,
	MSG_TAKE_EFFECT_CZ,
	MSG_TAKE_EFFECT_IT,
	MSG_TAKE_EFFECT_ES,
	MSG_TAKE_EFFECT_PL
};

const char MSG_TEMPERATURE_EN[] PROGMEM = "Temperature";
const char MSG_TEMPERATURE_CZ[] PROGMEM = "Teplota";
const char MSG_TEMPERATURE_IT[] PROGMEM = "Temperatura";
const char MSG_TEMPERATURE_ES[] PROGMEM = "Temperatura";
const char MSG_TEMPERATURE_PL[] PROGMEM = "Temperatura";
const char * const MSG_TEMPERATURE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_TEMPERATURE_EN,
	MSG_TEMPERATURE_CZ,
	MSG_TEMPERATURE_IT,
	MSG_TEMPERATURE_ES,
	MSG_TEMPERATURE_PL
};

const char MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_EN[] PROGMEM = "SD card [normal]";
const char MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_PL[] PROGMEM = "karta SD [normal]";
const char * const MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF_PL
};

const char MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_EN[] PROGMEM = "SD card [FlshAir]";
const char MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_PL[] PROGMEM = "karta SD[FlshAir]";
const char * const MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_EN,
	MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON_PL
};

const char MSG_TUNE_EN[] PROGMEM = "Tune";
const char MSG_TUNE_CZ[] PROGMEM = "Ladit";
const char MSG_TUNE_IT[] PROGMEM = "Regola";
const char MSG_TUNE_ES[] PROGMEM = "Ajustar";
const char MSG_TUNE_PL[] PROGMEM = "Nastroic";
const char * const MSG_TUNE_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_TUNE_EN,
	MSG_TUNE_CZ,
	MSG_TUNE_IT,
	MSG_TUNE_ES,
	MSG_TUNE_PL
};

const char MSG_UNKNOWN_COMMAND_EN[] PROGMEM = "Unknown command: \"";
const char * const MSG_UNKNOWN_COMMAND_LANG_TABLE[1] PROGMEM = {
	MSG_UNKNOWN_COMMAND_EN
};

const char MSG_UNLOAD_FILAMENT_EN[] PROGMEM = "Unload filament";
const char MSG_UNLOAD_FILAMENT_CZ[] PROGMEM = "Vyjmout filament";
const char MSG_UNLOAD_FILAMENT_IT[] PROGMEM = "Scarica filamento";
const char MSG_UNLOAD_FILAMENT_ES[] PROGMEM = "Sacar filamento";
const char MSG_UNLOAD_FILAMENT_PL[] PROGMEM = "Wyjac filament";
const char * const MSG_UNLOAD_FILAMENT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_UNLOAD_FILAMENT_EN,
	MSG_UNLOAD_FILAMENT_CZ,
	MSG_UNLOAD_FILAMENT_IT,
	MSG_UNLOAD_FILAMENT_ES,
	MSG_UNLOAD_FILAMENT_PL
};

const char MSG_USB_PRINTING_EN[] PROGMEM = "USB printing  ";
const char MSG_USB_PRINTING_CZ[] PROGMEM = "Tisk z USB  ";
const char MSG_USB_PRINTING_IT[] PROGMEM = "Stampa da USB";
const char MSG_USB_PRINTING_ES[] PROGMEM = "Impresion de USB ";
const char MSG_USB_PRINTING_PL[] PROGMEM = "Druk z USB  ";
const char * const MSG_USB_PRINTING_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_USB_PRINTING_EN,
	MSG_USB_PRINTING_CZ,
	MSG_USB_PRINTING_IT,
	MSG_USB_PRINTING_ES,
	MSG_USB_PRINTING_PL
};

const char MSG_USERWAIT_EN[] PROGMEM = "Wait for user...";
const char MSG_USERWAIT_IT[] PROGMEM = "Attendendo utente";
const char MSG_USERWAIT_ES[] PROGMEM = "Esperando ordenes";
const char * const MSG_USERWAIT_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_USERWAIT_EN,
	MSG_USERWAIT_EN,
	MSG_USERWAIT_IT,
	MSG_USERWAIT_ES,
	MSG_USERWAIT_EN
};

const char MSG_VMIN_EN[] PROGMEM = "Vmin";
const char * const MSG_VMIN_LANG_TABLE[1] PROGMEM = {
	MSG_VMIN_EN
};

const char MSG_VOLUMETRIC_EN[] PROGMEM = "Filament";
const char * const MSG_VOLUMETRIC_LANG_TABLE[1] PROGMEM = {
	MSG_VOLUMETRIC_EN
};

const char MSG_VOLUMETRIC_ENABLED_EN[] PROGMEM = "E in mm3";
const char * const MSG_VOLUMETRIC_ENABLED_LANG_TABLE[1] PROGMEM = {
	MSG_VOLUMETRIC_ENABLED_EN
};

const char MSG_VTRAV_MIN_EN[] PROGMEM = "VTrav min";
const char * const MSG_VTRAV_MIN_LANG_TABLE[1] PROGMEM = {
	MSG_VTRAV_MIN_EN
};

const char MSG_WATCH_EN[] PROGMEM = "Info screen";
const char MSG_WATCH_CZ[] PROGMEM = "Informace";
const char MSG_WATCH_IT[] PROGMEM = "Schermata info";
const char MSG_WATCH_ES[] PROGMEM = "Monitorizar";
const char MSG_WATCH_PL[] PROGMEM = "Informacje";
const char * const MSG_WATCH_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_WATCH_EN,
	MSG_WATCH_CZ,
	MSG_WATCH_IT,
	MSG_WATCH_ES,
	MSG_WATCH_PL
};

const char MSG_WATCHDOG_RESET_EN[] PROGMEM = " Watchdog Reset";
const char * const MSG_WATCHDOG_RESET_LANG_TABLE[1] PROGMEM = {
	MSG_WATCHDOG_RESET_EN
};

const char MSG_X_MAX_EN[] PROGMEM = "x_max: ";
const char * const MSG_X_MAX_LANG_TABLE[1] PROGMEM = {
	MSG_X_MAX_EN
};

const char MSG_X_MIN_EN[] PROGMEM = "x_min: ";
const char * const MSG_X_MIN_LANG_TABLE[1] PROGMEM = {
	MSG_X_MIN_EN
};

const char MSG_YES_EN[] PROGMEM = "Yes";
const char MSG_YES_CZ[] PROGMEM = "Ano";
const char MSG_YES_IT[] PROGMEM = "Si";
const char MSG_YES_ES[] PROGMEM = "Si";
const char MSG_YES_PL[] PROGMEM = "Tak";
const char * const MSG_YES_LANG_TABLE[LANG_NUM] PROGMEM = {
	MSG_YES_EN,
	MSG_YES_CZ,
	MSG_YES_IT,
	MSG_YES_ES,
	MSG_YES_PL
};

const char MSG_Y_MAX_EN[] PROGMEM = "y_max: ";
const char * const MSG_Y_MAX_LANG_TABLE[1] PROGMEM = {
	MSG_Y_MAX_EN
};

const char MSG_Y_MIN_EN[] PROGMEM = "y_min: ";
const char * const MSG_Y_MIN_LANG_TABLE[1] PROGMEM = {
	MSG_Y_MIN_EN
};

const char MSG_ZPROBE_OUT_EN[] PROGMEM = "Z probe out. bed";
const char * const MSG_ZPROBE_OUT_LANG_TABLE[1] PROGMEM = {
	MSG_ZPROBE_OUT_EN
};

const char MSG_ZPROBE_ZOFFSET_EN[] PROGMEM = "Z Offset";
const char * const MSG_ZPROBE_ZOFFSET_LANG_TABLE[1] PROGMEM = {
	MSG_ZPROBE_ZOFFSET_EN
};

const char MSG_Z_MAX_EN[] PROGMEM = "z_max: ";
const char * const MSG_Z_MAX_LANG_TABLE[1] PROGMEM = {
	MSG_Z_MAX_EN
};

const char MSG_Z_MIN_EN[] PROGMEM = "z_min: ";
const char * const MSG_Z_MIN_LANG_TABLE[1] PROGMEM = {
	MSG_Z_MIN_EN
};

const char WELCOME_MSG_EN[] PROGMEM = CUSTOM_MENDEL_NAME " ready.";
const char WELCOME_MSG_CZ[] PROGMEM = CUSTOM_MENDEL_NAME " ok";
const char WELCOME_MSG_IT[] PROGMEM = CUSTOM_MENDEL_NAME "pronta.";
const char WELCOME_MSG_ES[] PROGMEM = CUSTOM_MENDEL_NAME " lista";
const char WELCOME_MSG_PL[] PROGMEM = CUSTOM_MENDEL_NAME " gotowa";
const char * const WELCOME_MSG_LANG_TABLE[LANG_NUM] PROGMEM = {
	WELCOME_MSG_EN,
	WELCOME_MSG_CZ,
	WELCOME_MSG_IT,
	WELCOME_MSG_ES,
	WELCOME_MSG_PL
};


char langbuffer[LCD_WIDTH+1];
char* CAT2(const char *s1,const char *s2) {
  unsigned char len=0;
  strncpy_P(langbuffer+len,s1,LCD_WIDTH-len);
  len+=strlen_P(s1);
  strncpy_P(langbuffer+len,s2,LCD_WIDTH-len);
  return langbuffer;
}
char* CAT4(const char *s1,const char *s2,const char *s3,const char *s4) {
  unsigned char len=0;
  strncpy_P(langbuffer+len,s1,LCD_WIDTH-len);
  len+=strlen_P(s1);
  strncpy_P(langbuffer+len,s2,LCD_WIDTH-len);
  len+=strlen_P(s2);
  strncpy_P(langbuffer+len,s3,LCD_WIDTH-len);
  len+=strlen_P(s3);
  strncpy_P(langbuffer+len,s4,LCD_WIDTH-len);
  return langbuffer;
}
