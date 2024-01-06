#ifndef MAP_H
#define MAP_H

#include "global.h"
#include "screen.h"

/**
 * @page TileMap TileMap
 * @brief
 *
 * 16x16 tiles
 * 8x8 subTiles
 * 
 *
 */

/**
 * @brief Layer of the TileMap.
 * @ingroup TileMap
 */
typedef struct {
    /*0x0000*/ BgSettings* bgSettings;
    /*0x0004*/ u16 mapData[0x40 * 0x40];
    /**< TileIndex for each tile on the current layer. */ // tilemap data? <-- gMapDataTop / gMapDataBottom
    /*0x2004*/ u8 collisionData[0x40 * 0x40];                 // more tilemap data? <-- gUnk_0200D654 / gUnk_02027EB4
    /*0x3004*/ u16 mapDataOriginal[0x40 * 0x40];                 // more tilemap data? <-- gUnk_0200E654 / gUnk_02028EB4
                                                              // Tileset
    /*0x5004*/ u16 tileTypes[0x800];
    /**< Maps from the TileIndex to the TileType. */ // gTileTypesTop, gTileTypesBottom
    /*0x6004*/ u16 unkData2[0x800];
    /**< Maps from a TileType to a TileIndex. */ // gUnk_02011654,gUnk_0202BEB4 // TODO tile index for
                                                         // the tile type??
    /*0x7004*/ u16 tiles[0x800 * 4];
    /**< Mapping from a tile to the four tile_attrs it consists of.*/ // gTilesTop, gTilesBottom

    /*
    Temporarily call this vvv
    VVV
    vvv
    Vvv

    */
    /*0xb004*/ u8 vvv[0x40*0x40]; /**< Some sort of special behavior for tiles? Falling into holes or jumping off walls does not work when this is all zero.*/     // gUnk_02016654, gUnk_02030EB4
    // TODO check with debugger what accesses this
    // 0x637
    // 0x2030eb4 + 0x637
    // 0x20314eb
    // e.g. GetVvvAtTilePos accesses this
    // TODO check whether this also affects sound played when walking?
    /*
    0x10: water
    0x12: ice
    0x57: cloning pad
    */
} MapLayer;

extern MapLayer gMapTop;
extern MapLayer gMapBottom;

extern MapLayer* GetLayerByIndex(u32 layer);

/*
Definition where some map data is found and where it should be copied to.
Defined using the map_data asm macro, e.g. in map_headers.s
*/
typedef struct {
    u32 src;
    void* dest;
    u32 size;
} MapDataDefinition;

// There is another map data definition following.
#define MAP_MULTIPLE 0x80000000
// The src is compressed.
#define MAP_COMPRESSED 0x80000000

typedef enum {
    LAYER_BOTTOM = 1,
    LAYER_TOP = 2,
} LayerIndex;

#endif // MAP_H
