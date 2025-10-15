#include "../Menu.h"
#include "../Game.h"
#include "../Graphics.h"
#include "../Chat.h"

/* Color corporatiu ArCom: blau cel */
#define COLOR_ARCOM PackedCol_Make(100, 180, 255, 255)

/* Declarem la funció del botó Creative+ */
void Menu_EnterCreativePlus(void);

/* Afegeix els botons i textos personalitzats al menú */
void Menu_Custom_AddButtons(void) {
    Menu_AddLabel("ArCom Corporation", FONT_SIZE_LARGE, COLOR_ARCOM);
    Menu_AddButton("Creative+ Mode", Menu_EnterCreativePlus);
    Menu_AddButton("Check for Updates", Updater_Run);
}

/* Funció per entrar al Creative+ */
void Menu_EnterCreativePlus(void) {
    Chat_AddRaw("&bEntering ArCom Creative+ Mode...");
    Game_ChangeMode(GAME_MODE_CREATIVE);
}
