#include "mi_allegro.h"


BITMAP *cargar_img(char *img_filename)
{
    BITMAP *img = NULL;
    PALETTE palette;

	assert(img_filename);
	
	img = load_bitmap(img_filename, palette);
	if(img)
	{
    	set_palette(palette);
	}

    return img;
}

BITMAP *Crear_video_buffer()
{
    BITMAP *img = NULL;

    img = create_video_bitmap(SCREEN_W, SCREEN_H);

    return img;
}

BITMAP *Crear_buffer()
{
    BITMAP *img = NULL;

    img = create_bitmap(SCREEN_W, SCREEN_H);

    return img;
}
