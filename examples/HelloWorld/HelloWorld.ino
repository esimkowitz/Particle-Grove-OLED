/*
||
|| @file HelloWorld.cpp
|| @version 1.0
|| @author Seeed Technologies Inc., Evan Simkowitz
|| @contact esimkowitz@wustl.edu
||
|| @description
|| | This simply displays "Hello World". A simple demonstration of how to
|| | print strings to the display.
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
#include <avr/pgmspace.h>
#endif

void setup()
{
  Wire.begin();
  SeeedOled.init();  //initialze SEEED OLED display

  SeeedOled.clearDisplay();          //clear the screen and set start position to top left corner
  SeeedOled.setNormalDisplay();      //Set display to normal mode (i.e non-inverse mode)
  SeeedOled.setPageMode();           //Set addressing mode to Page Mode
  SeeedOled.setTextXY(0,0);          //Set the cursor to Xth Page, Yth Column
  SeeedOled.putString("Hello World!"); //Print the String

}

void loop()
{

}
