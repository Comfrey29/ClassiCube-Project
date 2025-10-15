#include "../Game.h"
#include "../Inventory.h"
#include "../Chat.h"

/* Inicialitza el Creative+ d'ArCom */
void CreativePlus_Init(void) {
    Chat_AddRaw("&eWelcome to ArCom Creative+ Edition!");

    /* Exemple: donar blocs addicionals */
    Inventory_Add(200, 10); // Crafting Table
    Inventory_Add(201, 10); // Furnace
    Inventory_Add(202, 20); // Glass Blue
}

