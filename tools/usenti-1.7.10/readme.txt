
         -------------------------------------------------------
       //                                                       \\
      ||        UU     UU      ss                                ||
      ||        UUU    UU     s  s                               ||
      ||        UU U   UU    s  s      nnn                       ||
      ||        UU  U  UU    s     ee     n   ttt   i   i        ||
      ||        UU   U UU   s s     e   nn   t   t  i  i         ||
      ||        UU    UUU   s  s    e     n  t   t   ii          ||
      ||        UU     UU  s    s   e  nnn   tttt   i i          ||
      ||                                     t      i i          ||
      ||                                     t      ii           ||
      ||                                                         ||
      ||=========================================================||
      ||                 Usenti: a bitmap editor                 ||
      ||                          v1.7.9                         ||
      ||                  By : Jasper Vijn (cearn)               ||
      ||                 (last update: 2008-06-14)               ||
      ||                  (started: 2002-10-10)                  ||
       \\_______________________________________________________//


Usenti is:
- an 8bit bitmap editor for Windows with nearly all the capabitities 
  of MS-Paint, plus a few extras like proper palette editor,
  adjustable grid settings for easy tile-aligning and mouse-wheel 
  use for zooming and moving aruond the image.
- using standard Windows-interface functionality like undo, toolbars, 
  profile-settings, drag&drop and clipboard support.
- capable of exporting to GBA source code (C/S/BIN/GBFS).
- able to do some advanced (*cough*yeah right*cough*) palette 
  remapping like swapping and sorting.

Usenti is NOT:
- a photo-editor. You're not supposed to edit photos at the pixel-
  level. You can try, of course, but I give no guarantees.
- expensive. In fact, it's absolutely free :).
- restricted to 8bit bitmaps. Though internally working with an
  8bit palette, images at other bitdepths can be used as well, although
  true-color images will be quantized to 256 colors.

Usenti's primary purpose:
  To create/modify simple graphics where editing is done by the 
  pixel and easy control over the palette is essential. And we all
  know how woefully inadequate MS-Paint is there.
  Initially intended specifically for GBA graphics, it should work
  fine for other purposes (like web-graphics) as well.

Platforms:
  Win32.

Usable image formats:
  BMP, PCX, PNG, TGA

Last changes:
- (1.7.9): Exporter upgrade to grit 0.8.1.
- (1.7.9): Requantize option.
- (1.7.9): Shift+Fill replaces all colors of the selected pixel.
- (1.7.8): Font exporter and changes to texttool for easy bitmap-font making.
- (1.7.8): Different paste modes.


	- J Vijn

mail: cearn@coranac.com
url: http://www.coranac.com/

The screenshot is taken from the mode7d demo from the Tonc tutorials,
which can be found at http://www.coranac.com/tonc/

----------------------------------------------------------------------------------

PS: This is just a simple readme. For more details on features and how 
to work with Usenti, see usenti.chm.


