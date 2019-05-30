#ifndef __ILI9488_H
#define __ILI9488_H

#ifdef __cplusplus
 extern "C" {
#endif

/* T�bbsz�las vagy megszak�t�sb�l t�rt�n� haszn�lat miatt az Lcd �s a Touchscreen
   egyidej� haszn�lata �sszeakad�st tud okozni (mivel k�z�s I/O er�forr�sokat haszn�l)
   Ezzel a mutex-el ki lehet z�rni az �sszeakad�st.
   Az Lcd f�ggv�nyei kiv�rj�k a Touchscreen fefejezt�t,
   a touchscreen lek�rdez�s meg nem hajtodik v�gre, ha az Lcd �ppen foglalt.
   Figyelem: Ha az Lcd priorit�sa magasabb mint a Touchscreen-�, v�gtelen ciklusba ker�lhet!
   - 0: nincs v�delem az LCD �s a touchscreen egyidej�s�g�nek kiz�r�s�ra
   - 1: van v�delem az LCD �s a touchscreen egyidej�s�g�nek kiz�r�s�ra
 */
 #define  ILI9488_MULTITASK_MUTEX  0

/* Orient�cio:
   - 0: 320x480 micro-sd k�rtya fel�l (portrait)
   - 1: 480x320 micro-sd k�rtya gomb bal oldalt (landscape)
   - 2: 320x480 micro-sd k�rtya gomb alul (portrait)
   - 3: 480x320 micro-sd k�rtya jobb oldalt (landscape)
*/
#define  ILI9488_ORIENTATION       1

/* Color mode
   - 0: RGB565 (R:bit15..bit11, G:bit10..bit5, B:bit4..bit0)
   - 1: BGR565 (B:bit15..bit11, G:bit10..bit5, R:bit4..bit0)
*/
#define  ILI9488_COLORMODE         0

// ILI9488 Size (fizikai felbont�s, az alap�rtelmezett orient�ciora vonatkoztatva)
#define  ILI9488_LCD_PIXEL_WIDTH   320
#define  ILI9488_LCD_PIXEL_HEIGHT  480

/* LCD driver structure */
extern   LCD_DrvTypeDef   *lcd_drv;
extern   TS_DrvTypeDef    *ts_drv;

#ifdef __cplusplus
}
#endif

#endif /* __ILI9488_H */