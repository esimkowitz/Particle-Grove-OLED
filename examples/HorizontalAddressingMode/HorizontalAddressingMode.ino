/*
||
|| @file HorizontalAddressingMode.cpp
|| @version 1.0
|| @author Seeed Technologies Inc., Evan Simkowitz
|| @contact esimkowitz@wustl.edu
||
|| @description
|| | I'll be honest I don't really know what this one is supposed to demonstrate
|| | other than the ability to have text roll over to another line.
|| #
||
|| @license
|| | This library is free software; you can redistribute it and/or
|| | modify it under the terms of the GNU General Public
|| | License as published by the Free Software Foundation; version
|| | 3 of the License.
|| |
|| | This library is distributed in the hope that it will be useful,
|| | but WITHOUT ANY WARRANTY; without even the implied warranty of
|| | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|| | General Public License for more details.
|| |
|| | You should have received a copy of the GNU General Public
|| | License along with this library; if not, write to the Free Software
|| | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
|| #
||
*/

#include "Grove_OLED_128x64.h"

#if defined (SPARK)
// Nothing to include if Spark
#else
#include <Wire.h>
#endif

void setup()
{
  Wire.begin();
  SeeedOled.init();  //initialze SEEED OLED display

  SeeedOled.clearDisplay();           //clear the screen and set start position to top left corner
  SeeedOled.setNormalDisplay();       //Set display to Normal mode
  SeeedOled.setHorizontalMode();      //Set addressing mode to Horizontal Mode
  SeeedOled.putString("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");  //Print String (ASCII 32 - 126 )
}

void loop()
{

}
