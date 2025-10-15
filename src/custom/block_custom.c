#include "block_custom.h"
#include "../Block.h"
#include "../Graphics.h"
#include "../Game.h"

/* Inicia i registra els blocs personalitzats */
void CustomBlocks_Init(void) {
    /* Exemple de nous blocs */
    Block_DefineCustom(200, "CraftingTable", "crafting_table.png", BLOCK_OPAQUE);
    Block_DefineCustom(201, "Furnace", "furnace.png", BLOCK_OPAQUE);
    Block_DefineCustom(202, "GlassBlue", "glass_blue.png", BLOCK_TRANSPARENT);

    /* Pots afegir més blocs aquí! */
}
